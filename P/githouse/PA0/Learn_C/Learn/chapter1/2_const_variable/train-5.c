/*************************************************************************
	> File Name: train-5.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月05日 星期三 19时52分25秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int x=16;
	int y=4;
	int z;
	
	z=((x-1)/y)+1; //向上取整

	printf("%d / %d = %d\n",x,y,z);

	return 0;
}
