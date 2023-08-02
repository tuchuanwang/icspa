/*************************************************************************
	> File Name: web.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月19日 星期三 20时54分34秒
 ************************************************************************/

#include<stdio.h>
#define N 3

int a[N];

void perm(int);
void print();
void swap(int, int);

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < N; ++i){
		a[i] = i + 1;
	}
	perm(0);
	return 0;
}

void perm(int offset){
	int i /* temp*/;
	if(offset == N-1){ //BaseCase
		print();
		return;
	}
	else
	{
		for(i = offset; i < N; ++i){
			swap(i, offset); //交换
			perm(offset + 1);// 递归
			swap(i, offset);				 
		}
	}
}

void print(){
	int i;
	for(i = 0; i < N; ++i)
		printf(" %d",a[i]);
	printf("\n");
}

void swap(int i, int offset){
	int temp;
	temp = a[offset];
	a[offset] = a[i];
	a[i] = temp;
}
