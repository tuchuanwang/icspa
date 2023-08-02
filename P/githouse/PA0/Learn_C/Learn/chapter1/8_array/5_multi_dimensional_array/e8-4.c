/*************************************************************************
	> File Name: e8-4.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月08日 星期六 17时15分47秒
 ************************************************************************/

#include<stdio.h>

void print_day(int day)
{
	char days[8][10]= {"","Monday","Thuesday",
						"Wednesday","Thursday","Firday",
						"Saturday","Sunday"};

	if( day <1 || day >7)
		printf("ILLEGAL DAY NUMBER!\n");
	printf("%s\n",days[day]);
}

int main(int argc, char *argv[])
{
	print_day(2);
	return 0;
}
