/*************************************************************************
	> File Name: ex6.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月18日 星期日 17时24分41秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.3424f;
	double super_power = 23423.234234;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %#x miles away. \n",distance);
	printf("You have %f levels of power. \n", power);
	printf("You have %f awesome super powers. \n", super_power);
	printf("I have an initial %c. \n", initial);
	printf("I have a first name %s. \n", first_name);
	printf("I have a last name %s. \n", last_name);
	printf("My whole name is %s  %c. %s. \n",   first_name,initial,last_name);
	printf("111%s 222 \n", "" );
	return 0;
}
