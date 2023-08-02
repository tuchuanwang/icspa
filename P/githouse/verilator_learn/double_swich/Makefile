all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	#verilator -cc --exe --build -j 0 -Wall sim_top.cpp top.v 
	verilator -Wall top.v top_main.cpp --cc --trace --exe --build
#增加了--trace 是为了显示波形的

vcd:
	./obj_dir/Vtop   //必须执行这个，才会出现.vcd文件

wave:
	gtkwave wave.vcd //如果报错缺少canberra-gtk-module，apt安装即可


clean:
	@echo "delete "

#include ../Makefile
