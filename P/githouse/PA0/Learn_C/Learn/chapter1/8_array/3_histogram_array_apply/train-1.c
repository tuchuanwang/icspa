/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 16时43分32秒
 ************************************************************************/
//产生直方图

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100  //产生的数的个数
#define NUM 10 //产生的数的范围

int a[N];

int howany(int num);
void print(int num);
int max_num(int num);

void gen_random(int upper_bound)
{
	int i;
	for(i=0;i<N;i++)
		a[i] = rand()%upper_bound;
}

int howmany(int num)
{
	int i=0;
	int count = 0;
	for(i=0; i<N; i++)
	{
		if(a[i]== num )
			count ++;
	}

	return count;
}

void print(int num)
{
	int i;
	int j;
	for(i=0;i<num;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	
	int k;
	for(j=1;j<=max_num(10);j++)
	{
		for(k=0;k<num;k++)
		{
			if(howmany(k) >= j )
				printf("%c\t",'*');
			else
				printf("\t");
		}
		printf("\n");
	}

}

int max_num(int num)
{
	int i=0;
	int mid=0;
	
	int a[num];

	int j;
	for(j=0;j<num;j++)
	{
		a[j] = howmany(j);
	}

	for(i=1; i<num; i++)
	{
		if(a[i-1]>a[i])
		{
			mid = a[i];
			a[i] = a[i-1];
			a[i-1] = mid;
		}
	}

	return a[9];
}

int main(int argc, char *argv[])
{
	gen_random(NUM);
	
	int i= 0;
	printf("value\tnum\n");

	for(i=0;i<NUM;i++)
	{
		printf("%d \t%d\n",i,howmany(i));
	}
	printf("\n直方图：\n");	
	print(NUM);

	return 0;
}
