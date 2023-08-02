/*************************************************************************
	> File Name: ex7.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月19日 星期一 19时35分18秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

	long universe_of_defects = -1L* 1024L * 1024L * 1024l *1024l * 1024L * 1024L * 8l/* 1024l*/ ;
	printf("The entire universe has %ld bug.\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("Thata is only a %e potion of the universe. \n",part_of_universe);

	//this makes no sense, just a demo of sonething weird
	 char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%. \n",  care_percentage);

	return 0;
}
