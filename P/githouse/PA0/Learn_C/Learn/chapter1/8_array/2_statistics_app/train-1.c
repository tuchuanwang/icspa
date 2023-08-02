/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 15时43分32秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 20

int a[N];


void gen_random(int upper_bound)
{
	int i;
	for(i=0;i<N;i++)
		a[i] = (rand()%10)+10;
}

void print(void)
{
	int i;
	for(i=0;i<N;i++)
		printf("a[%d]= %d\n",i,a[i]);
}

int main(int argc, char *argv[])
{
	gen_random(20);
	print();
	return 0;
}
