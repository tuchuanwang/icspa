/*************************************************************************
	> File Name: e8-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 15时23分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 20

int a[N];

void gen_random(int upper_bound)
{
	int i;
	for(i=0;i<N;i++)
	{
		a[i] = rand() % upper_bound;
	}
}

void print_random()
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	gen_random(10);
	print_random();
	return 0;
}
