/*************************************************************************
	> File Name: train-4.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 21时03分50秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int x,y,z;

	x=4;
	y=4;
	z=4;

	if (x<3 && y>3)
			printf("Test OK!\n");
	/*else if (x>=3 && y>=3)
			printf("Test OK!\n");*/
	else if (z>3 && x>=3)
			printf("Test OK!\n");
	else if (z<=3 && y>=3)
			printf("Test OK!\n");
	else
			printf("Test failed!\n");

	return 0;
}
