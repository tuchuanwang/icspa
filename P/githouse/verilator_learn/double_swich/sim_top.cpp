/*************************************************************************
	> File Name: sim_top.cpp
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月21日 星期三 16时48分03秒
 ************************************************************************/
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"	//create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h"

	int main(int argc, char** argv)
	{
		VerilatedContext* contextp = new VerilatedContext;
		contextp->commandArgs(argc, argv);
		Vtop* top = new Vtop{contextp};

		VerilatedVcdC* tfp = new VerilatedVcdC;
		contextp ->traceEverOn(true);
		top->trace(tfp, 0);
		tfp->open("wave.vcd");

		while (!contextp->gotFinish())
			{	
				int a= rand() &1;
				int b= rand() &1;
				top-> a = a;
				top-> b = b;
				top->eval();
				printf("a = %d, b=%d ,f=%d\n",a,b,top->f);
				
				top->dump(contextp->time());	//dump wave								
				contextp-> timeInc(1);			//推动仿真时间
									   
			   assert(top->f == a^b);
	
			}
        delete top;
		tfp -> close();
        delete contextp;
		
		return	0;
	}
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd


  while (!contextp->gotFinish()) {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);

    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间

    assert(top->f == a ^ b);
  }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
