/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 16时39分26秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void diamond(int x, char y)
{
	int i,j;

	int a= (x+1)/2;
	int b= (x-1)/2;

	if(x%2 ==0)
		printf("参数打印错误\n");
	else
		for(i=1;i<=x;i++){
			for(j=1;j<=x;j++){
				if(abs(i-a)+abs(j-a)<=b){  //画图，找各个位置到中心点的范围。
					printf("%c\t",y);
				}
				else
					printf("\t");
			}
			printf("\n");
		}	
}

int main(int argc, char *argv[])
{
	diamond(5,'+');

	return 0;
}
