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
		for(j=1; j<=9;j++){
			if(j<=8){
				printf("%d\t",i*j);
			}
			else
				printf("%d\n",i*j);
		}
	}
	printf("\n");
	return 0;
}
