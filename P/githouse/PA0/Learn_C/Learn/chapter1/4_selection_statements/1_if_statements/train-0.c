/*************************************************************************
	> File Name: train-0.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 20时06分59秒
 ************************************************************************/

#include<stdio.h>

void foo(void)
{
	int i = 0;
	{
		int i =1;
		int j = 2;
		printf("i=%d, j=%d\n", i, j);
	}
	printf("i=%d\n", i); /*candnot access j here*/
}

int main(int argc, char *argv[])
{
	foo();
	return 0;
}
