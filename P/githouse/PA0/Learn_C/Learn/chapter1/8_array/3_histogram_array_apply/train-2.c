/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 19时17分19秒
 ************************************************************************/

//打印数组的全排列

#include<stdio.h>
#define N 3

int a[N] = { 1, 2, 3,};

void Swap(int a[], int s, int e)
{
	int c = a[s];
	a[s]  = a[e];
	a[e]  = c;
}


void print(int a[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void Perm(int *bl, int s, int e) 
{
	int i=0;

	if(s==e)
	{
		print(a);
	}
	else	{
		for (i=s;i<N;i++)
		{
			Swap(a,s,i);
			Perm(a,s+1,e);
			Swap(a,s,i);
		}
	}

}

int main(int argc, char *argv[])
{

	Perm(a,0,N-1);
/*
	int i=0;
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}

	Swap(a, 0,1);
	
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
*/
	return 0;
}
