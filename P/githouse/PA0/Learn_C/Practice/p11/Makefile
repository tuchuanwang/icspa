NUMBER = 11

#CFLAGS=-Wall -g
ex$(NUMBER): ex$(NUMBER).c
	gcc -g  ex$(NUMBER).c -o ex$(NUMBER)

#运行程序
run:
	./ex$(NUMBER)

#重定向
obj:
	objdump -d ex$(NUMBER) > ex$(NUMBER).txt

#用valgrind检测错误
.PHONY:valgrind
#valgrind
valgrind:
	valgrind ./ex$(NUMBER)

#进入gdb
.PHONY:gdb
gdb:
	gdb ./ex$(NUMBER)


#清除产生的可执行文件
.PHONY:clean
clean:
	rm -f ex$(NUMBER)
