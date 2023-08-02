/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 20时35分52秒
 ************************************************************************/

#include<stdio.h>

void print(int x)
{
	printf("%d ten is %d\n",x , (x/10));
	printf("%d bit is %d\n",x , (x%10));
}

int main(int argc, char *argv[])
{
	int x;
	x=23;

	print(x);

	return 0;
}
