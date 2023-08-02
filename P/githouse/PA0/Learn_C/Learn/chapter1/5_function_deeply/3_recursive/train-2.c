/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 14时53分14秒
 ************************************************************************/

#include<stdio.h>

int fib(int x)
{
	if(x == 0)
	{
		return 1;
	}
	else if(x == 1) {
		return 1;
	}
	else {
		return fib(x-1)+fib(x-2);
	}
}


int main(int argc, char *argv[])
{
	int x =5;
	printf("fib(%d) = %d\n",x,fib(x));
	return 0;
}
