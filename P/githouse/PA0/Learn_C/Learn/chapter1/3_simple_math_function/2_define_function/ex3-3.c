/*************************************************************************
	> File Name: ex3-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 16时32分46秒
 ************************************************************************/

#include<stdio.h>

void newline(void)
{
	printf("\n");
}

void threeline(void)
{
	newline();
	newline();
	newline();
}

int main(int argc, char *argv[])
{
	printf("Firest Line.\n");
	threeline();
	printf("Second Line.\n");

	return 0;
}
