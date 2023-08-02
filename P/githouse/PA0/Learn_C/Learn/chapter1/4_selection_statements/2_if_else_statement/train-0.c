/*************************************************************************
	> File Name: train-0.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 20时32分11秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	double i = 20.0;
	double j = i/7.0;

	if(j*7.0 == i)
		printf("Equal.\n");
	else
		printf("Unequal.\n");

	return 0;
}
