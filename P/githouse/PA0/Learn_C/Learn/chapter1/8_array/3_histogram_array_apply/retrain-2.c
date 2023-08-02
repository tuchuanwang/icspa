/*************************************************************************
	> File Name: retrain-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月10日 星期一 14时26分45秒
 ************************************************************************/

#include<stdio.h>
#define N 3
int a[N] = { 1, 2, 3, };

void Swap(int a[] ,int s,int e)
{
	int c = a[s];
	a[s] = a[e] ;
	a[e] = c ;
}


void recursion(int *b ,int s, int e)
{

	int i=0;

	if(s == e){
		
		int k;
		for(k=0;k<N;k++)
		{
			printf("%d ",a[k]); //排完了
		}
		printf("\n");
	}
	else	{
		for(i=s;i<e+1;i++)
		{
			Swap(a,s,i);
			recursion(a,s+1,e);
			Swap(a,s,i);
		}
	}
}

int main(int argc, char *argv[])
{

	recursion(a,0,N-1);
/*
	for( i=0; i<N ; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
*/


	return 0;
}
