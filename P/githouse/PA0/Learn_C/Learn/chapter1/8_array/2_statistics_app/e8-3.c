/*************************************************************************
	> File Name: e8-3.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 15时37分21秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 100000

int a[N];

void gen_random(int upper_bound)
{
	int i;
	for (i=0; i<N ; i++)
		a[i] = rand() % upper_bound;
}

int howmany(int value)
{
	int count = 0, i;
	for( i=0; i<N; i++)
	{
		if(a[i] == value)
			++count;
	}

	return count;
}

int main(int argc, char *argv[])
{
	int i;
	gen_random(10);
	printf("value\thow many\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t%d\n",i,howmany(i));
	}
	return 0;
}
