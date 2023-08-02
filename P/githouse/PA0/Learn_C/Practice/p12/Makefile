NUMBER = 12

#CFLAGS=-Wall -g
ex$(NUMBER): ex$(NUMBER).c
	gcc -g  ex$(NUMBER).c -o ex$(NUMBER)

#创建.c文件
creat:
	vim.ex$(NUMBER).c

#运行程序
run:
	./ex$(NUMBER)

#重定向
obj:
	objdump -d ex$(NUMBER) > ex$(NUMBER).txt

#indent进行编码风格的转换:
#在 Linux 下，比较流行的“行业”风格有 KR 的编码风格、GNU 的编码风格、
#Linux 内核的编码风格（基于 KR 的，缩进是 8 个空格）等，它们都可以通过 indent 命令格式化，
#对应的选项分别是-kr，-gnu，-kr -i8。下面演示用 indent 命令把代码格式化成上面的三种风格。
.PHONY:indent
indent:
	indent -kr ex$(NUMBER).c

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
