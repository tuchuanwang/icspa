NUMBER = 10

#CFLAGS=-Wall -g
ex$(NUMBER): ex$(NUMBER).c
	gcc  ex$(NUMBER).c -o ex$(NUMBER)

#运行程序
run:
	./ex$(NUMBER)

#重定向
obj:
	objdump -d ex$(NUMBER) > ex$(NUMBER).txt

#清除产生的程序

.PHONY:clean
clean:
	rm -f ex$(NUMBER)
