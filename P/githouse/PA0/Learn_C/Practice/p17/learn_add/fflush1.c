/*************************************************************************
	> File Name: fflush1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月04日 星期二 15时03分09秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	printf("Hello");
	
	fflush(stdout);

	sleep(5);

	printf(" world \n");


	return 0;
}
