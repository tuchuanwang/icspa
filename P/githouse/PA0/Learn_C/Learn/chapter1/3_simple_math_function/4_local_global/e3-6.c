/*************************************************************************
	> File Name: e3-5.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 17时16分16秒
 ************************************************************************/

#include<stdio.h>

int hour = 23, minute = 59;
int x = 10;

void print_time (void)
{
	printf("%d:%d in print_time\n",hour,minute);
}
int main(int argc, char *argv[])
{	
	int hour = 0, minute = 30;
	print_time();
	printf("%d:%d in main\n",hour,minute);
	printf("x = %d\n",x);
	return 0;
}
