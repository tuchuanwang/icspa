/*************************************************************************
	> File Name: e4-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 21时57分50秒
 ************************************************************************/

#include<stdio.h>

void print_day(int day)
{
	switch(day)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("illegal day number!\n");
			break;

	}
}

int main(int argc, char *argv[])
{
	int day = 4;
	print_day(day);
	
	return 0;
}
