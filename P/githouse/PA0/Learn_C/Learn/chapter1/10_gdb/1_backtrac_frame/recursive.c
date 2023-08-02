/*************************************************************************
	> File Name: recursive.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月08日 星期六 20时36分47秒
 ************************************************************************/

#include<stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	else{
			int recurse = factorial(n-1);
			int result = n * recurse;
			return result;
	}
}

int main(int argc, char *argv[])
{
	int a = factorial(3);
	printf("3!=%d\n",a);
	int b = factorial(5);
	printf("3!=%d\n",b);
return 0;
}
