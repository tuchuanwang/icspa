/*************************************************************************
	> File Name: e12-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月10日 星期一 09时41分10秒
 ************************************************************************/

#include<stdio.h>
#define LEN 3

char buf[LEN]={'a', 'b', 'c'};

void print_backward(int pos)
{
	if(pos == LEN)
		return ;
	print_backward(pos+1);
	putchar(buf[pos]);
}

int main(int argc, char *argv[])
{
	print_backward(0);
	putchar('\n');

	return 0;
}
