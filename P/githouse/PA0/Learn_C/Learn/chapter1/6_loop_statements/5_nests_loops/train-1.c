/*************************************************************************
	> File Name: e6-3.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 16时34分32秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j;

	for(i= 1; i<=9;i++){
		for(j=1; j<=i;j++){
				printf("%d\t",i*j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
