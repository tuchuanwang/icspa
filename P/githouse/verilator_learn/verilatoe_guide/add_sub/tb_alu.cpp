/*************************************************************************
    > File Name: tb-alu.cpp
    > Author: wangzhen
    > Mail:   1240306894@qq.com 
    > Created Time: 2023年08月06日 星期日 21时32分13秒
 ************************************************************************/

#include <alloca.h>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <ostream>
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valu.h"
#include "Valu___024unit.h"

#define MAX_SIM_TIME 300
#define VERIF_START_TIME 7

vluint64_t sim_time = 0; // unsigned 64bit
vluint64_t posedge_cnt = 0;

class AluInTx{
	public:
			uint32_t a;
		  uint32_t b;
			enum Operation {
				add = Valu___024unit::operation_t::add,
				sub = Valu___024unit::operation_t::sub,
				nop = Valu___024unit::operation_t::nop
			} op;
};


class AluOutTx {
	public:
		uint32_t out;
};


class AluScb {
	private:
		std::deque<AluInTx*> in_q;

	public:
	
		void writeIn(AluInTx *tx) {
				in_q.push_back(tx);
		}

		void writeOut(AluOutTx *tx){
			if(in_q.empty()){
				std::cout <<"Fatal Error in AluScb: empty AluInTx queue" << std::endl;
				exit(1);
			}

			AluInTx* in;
			in = in_q.front();
			in_q.pop_front();

			switch (in->op) {
				case AluInTx::add :
					if(in->a + in->b !=tx->out){
						std::cout << std::endl;
						std::cout << "AluScb: add mismatch"<<std::endl;
						std::cout << "   Expected  " << in->a + in->b
											<< "   Actual:" << tx->out << std::endl;
					  std::cout <<"    Simtime:"<< sim_time << std::endl;
					}
					break;


				case AluInTx::sub :
					if(in->a - in->b !=tx->out){
						std::cout << std::endl;
						std::cout << "AluScb: sub mismatch"<<std::endl;
						std::cout << "   Expected  " << in->a - in->b
											<< "   Actual:" << tx->out << std::endl;
					  std::cout <<"    Simtime:"<< sim_time << std::endl;
					}
					break;

			}

			delete in;
			delete tx;
		}
};



class AluInDrv{
	private:
			Valu *dut;
	public:
			AluInDrv(Valu *dut){
				this->dut = dut;
			}

			void drive(AluInTx *tx){
				// we always start with in_valid set to 0, and set it to 
				// 1 later only if necseeary
				dut->in_valid = 0;

				//don't drive anything if a transaction item doesn't exist
				if(tx != NULL){
					if(tx->op != AluInTx::nop){
						// if the operation is not a NOP, we drive it onto the
						// input interface pins
						dut->in_valid = 1;
						dut->op_in = tx->op;
						dut->a_in = tx->a;
						dut->b_in = tx->b;
					}
					// release he ,emory by deleting the tx item
					// after it has been consumed
					delete tx;
				}
			}
};

class AluInMon {
	private:
		Valu *dut;
		AluScb *scb;
  public:
		AluInMon(Valu *dut, AluScb *scb){
			this->dut = dut;
			this->scb = scb;
		}

		void monitor(){
			if(dut->in_valid == 1){
				AluInTx *tx = new AluInTx();
				tx->op = AluInTx::Operation(dut->op_in);
				tx->a = dut->a_in;
				tx->b = dut->b_in;

				scb->writeIn(tx);

			}
		}
};

class AluOutMon {
	private:
		Valu *dut;
		AluScb *scb;
	public:
		AluOutMon(Valu *dut, AluScb *scb){
			this->dut = dut;
			this->scb = scb;
		}

		void monitor(){
			if(dut->out_valid == 1){
				AluOutTx *tx = new AluOutTx();
				tx->out = dut->out;

				scb->writeOut(tx);
			}
		}
};

AluInTx* rndAluInTx() {
	//20% chance of generating a transaction
	if(rand()%5 == 0){
		AluInTx *tx = new AluInTx();
		tx->op = AluInTx::Operation(rand() % 3); // Our ENUM only has entries with values 0, 1, 2
		tx->a = rand()%11 + 10; // generate a in range 10-20
		tx->b = rand()%6; // generate b in range 0-5t
		return tx;
	}else{
		return NULL;
	}
}


void check_out_valid(Valu *dut, vluint64_t &sim_time){
    static unsigned char in_valid = 0; //in valid from current cycle
    static unsigned char in_valid_d = 0; //delayed in_valid
    static unsigned char out_valid_exp = 0; //expected out_valid value

    if (sim_time >= VERIF_START_TIME) {
        // note the order!
        out_valid_exp = in_valid_d;
        in_valid_d = in_valid;
        in_valid = dut->in_valid;
        if (out_valid_exp != dut->out_valid) {
            std::cout << "ERROR: out_valid mismatch, "
                << " exp: " << (int)(out_valid_exp)
                << " recv: " << (int)(dut->out_valid)
                << " simtime: " << sim_time << std::endl;
        }
    }
}


void dut_reset (Valu *dut, vluint64_t &sim_time){
    dut->rst = 0;
    if(sim_time >= 3 && sim_time < 6){
        dut->rst = 1;
        dut->a_in = 0;
        dut->b_in = 0;
        dut->op_in = 0;
        dut->in_valid = 0;
    }
}

void set_rnd_out_valid(Valu *dut, vluint64_t $sim_time){
	if(sim_time >= VERIF_START_TIME){
		dut->in_valid = rand() %2; // generate valus - and	1
	}
}

int main(int argc, char** argv, char** env) {
		srand(time(NULL));	 
		Verilated::commandArgs(argc, argv);
    Valu *dut = new Valu;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

		/* verilator guide part2
    while (sim_time < MAX_SIM_TIME) {
				dut_reset(dut, sim_time);
   			
				dut->clk ^= 1; // clk 与1 异或  clk = clk ^ 1
        dut->eval();
				
				if(dut->clk == 1){
					dut->in_valid = 0;
					posedge_cnt++;
					set_rnd_out_valid(dut, sim_time);
					check_out_valid(dut, sim_time);
				//	if(posedge_cnt == 5){
				//			dut->in_valid = 1;  //assert in_valid on 5th cc
				//	}
				//	check_out_valid(dut, sim_time);
				//	if(posedge_cnt == 7){
				//		if(dut->out_valid !=1) // check in_valid on 7th cc
				//				std::cout << "ERROR!" << std::endl;
				//	}
				}

        m_trace->dump(sim_time);
        sim_time++;
    }
		*/

	 // verilator guide part3
   /*
	 	while (sim_time < MAX_SIM_TIME) {
				dut_reset(dut, sim_time);
   			
				dut->clk ^= 1; // clk 与1 异或  clk = clk ^ 1
        dut->eval();
				
				if(dut->clk == 1){
					dut->in_valid = 0;
					posedge_cnt++;
					switch (posedge_cnt) {
						case 10:
							dut->in_valid = 1;
							dut->a_in = 5;
							dut->b_in = 3;
							dut->op_in = Valu___024unit::operation_t::add;
							break;
				 	 case 12:
							if(dut->out != 8)
									std::cout << "Addition failed @ " << sim_time << std::endl;
							break;
					 case 20:
							dut->in_valid = 1;
							dut->a_in = 5;
							dut->b_in = 3;
							dut->op_in = Valu___024unit::operation_t::sub;	
							break;		

					case 22:
								if(dut->out != 2)
									std::cout << "Subtraction failed @" << sim_time << std::endl;
							break;		
					}

					//set_rnd_out_valid(dut, sim_time);
						check_out_valid(dut, sim_time);
				}

        m_trace->dump(sim_time);
        sim_time++;
    }
    */

		// verilator guide part4

		AluInTx		*tx;

		//here we create the drive, scoreboard, input and output monitor blocks
		AluInDrv  *drv    = new AluInDrv(dut);
		AluScb    *scb    = new AluScb();
		AluInMon  *inMon  = new AluInMon(dut, scb);
		AluOutMon *outMon = new AluOutMon(dut, scb);

		while (sim_time < MAX_SIM_TIME) {
			dut_reset(dut, sim_time);
			dut->clk ^=1;
			dut->eval();

			if(dut->clk == 1){

				if(sim_time>= VERIF_START_TIME){
					tx = rndAluInTx();

					drv->drive(tx);

					inMon->monitor();

					outMon->monitor();

				}
			}
		
			m_trace->dump(sim_time);
			sim_time++;

		}
			


    m_trace->close();
    delete dut;
		delete outMon;
		delete inMon;
		delete scb;
		delete drv;
    exit(EXIT_SUCCESS);
}

