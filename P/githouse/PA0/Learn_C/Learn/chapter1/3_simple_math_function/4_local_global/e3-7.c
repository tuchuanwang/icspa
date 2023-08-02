/*************************************************************************
	> File Name: e3-7.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 17时30分05秒
 ************************************************************************/

#include<stdio.h>

void foo(void)
{
	int i;
	printf("%d\n",i);
	i = 777;
}
int main(int argc, char *argv[])
{
	foo();
	//printf("hello\n");
	foo();
	return 0;
}
