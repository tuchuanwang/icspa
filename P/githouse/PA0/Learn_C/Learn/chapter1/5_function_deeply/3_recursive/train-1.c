/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 11时24分48秒
 ************************************************************************/

//编写递归函数求两个正整数a和b的最大公约数（GCD，Greatest Common Divisor），使用Euclid算法：
//
//1,如果a除以b能整除，则最大公约数是b。
//
//2,否则，最大公约数等于b和a%b的最大公约数。
#include<stdio.h>

int gcd(int a, int b)
{
	int a1,b1;

	//判断a,b,大小
	if(b>a)	{	
		a1 = b;
		b1 = a;
	}
	else	{
		a1 = a;
		b1 = b;
	}

	if(a1 == 0 || b1 == 0){
		return 0;
	}
	else{
		if(a1%b1 == 0)
		{
			return b1;
		}
		else	{
			int c=a1%b1;
			return gcd(b1,c);
		}
	}
}

int main(int argc, char *argv[])
{
	int a = 44;
	int b = 99;
	printf("%d 与 %d 的最大公约数：%d \n",a,b,gcd(a,b));
	return 0;
}
