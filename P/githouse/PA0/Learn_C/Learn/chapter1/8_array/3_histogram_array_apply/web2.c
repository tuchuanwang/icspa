/*************************************************************************
	> File Name: web2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月19日 星期三 21时21分21秒
 ************************************************************************/

#include<stdio.h>
#define N 4
#define M 2  //取出M个元素进行排列，默认M<=N

int a[N] = {1, 2, 3, 4,};
int b[N];

void print(){
	int i;
	for(i = 0; i < M; ++i)
		printf(" %d ",a[i]);
	printf("\n");
}

void swap(int i, int offset){
	int temp;
	temp = a[offset];
	a[offset] = a[i];
	a[i] = temp;
}

//
void perm(int offset){
	int i;
	if( offset == M) {
		print();
		return;
	}
	else{
		for(i = offset; i<N; ++i)
		{
			swap(i, offset);
			perm(offset + 1);
			swap(i, offset);
		}
	}
}

/*
void comb(int n, int m){
	int i;
	if (m == 0){
		print();
		return;
	}
	else {
		for(int i = n-1; i>= 0; --i)
		{
			b[m-1] = a[i];
			comb(i, m-1);
		}
	}
}*/

int main(int argc, char *argv[])
{
	perm(0);
	return 0;
}
