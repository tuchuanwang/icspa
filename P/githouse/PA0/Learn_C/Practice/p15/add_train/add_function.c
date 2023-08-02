/*************************************************************************
	> File Name: ex15.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月28日 星期三 19时23分06秒
 ************************************************************************/

#include<stdio.h>

void fun1(int len ,int agef1[], char *namef1[]);
//void fun1;

int main(int argc, char *argv[])
{
	//creat two arrays we care about
	int	ages[]={23,43,12,89,2};
	char *names[] ={"alan","Frank","Mary","John","Lisa"};

	int count = sizeof(ages)/sizeof(int);

	fun1(count, ages, names);

	return 0;
}


void fun1(int len ,int agef1[], char *namef1[])
{
	int i=0;
	for(i=0; i< len; i++)
	{
		printf("%s ages old is %d \n", namef1[i], agef1[i]);
	}
	printf("-----------funf1 end-----------\n");
}
