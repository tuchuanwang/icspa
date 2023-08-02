/*************************************************************************
	> File Name: e5-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 11时21分03秒
 ************************************************************************/

#include<stdio.h>

int f(int x)
{
	if(x == 0)
		return 1;
	else{
		int y = x*f(x-1);
		return y;
	}
}

int main(int argc, char *argv[])
{
	int x =5;
	printf("%d! = %d\n",x,f(x));
	return 0;
}
