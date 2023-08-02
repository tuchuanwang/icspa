/*************************************************************************
	> File Name: e3-5.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 17时16分16秒
 ************************************************************************/

#include<stdio.h>

int hour = 23, minute = 59;

void print_time (void)
{
	printf("%d:%d in print_time\n",hour,minute);
}
int main(int argc, char *argv[])
{
	print_time();
	printf("%d:%d in main\n",hour,minute);
	return 0;
}
