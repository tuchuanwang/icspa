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
#include<math.h>
#include<stdlib.h>

//判断是否都为负数
int p_n(int a, int b)
{
	int	k=0;
	if(a*b>0 && a<0)
	{
		k=1;
	}
	else
	{
		k=0;
	}

	return k;
}

//判断最大公约数
int gcd(int a, int b)
{
	int ap,bp;
	ap = abs(a);
	bp = abs(b);

	int a1,b1;

	//判断a,b,大小
	if(b>a)	{	
		a1 = bp;
		b1 = ap;
	}
	else	{
		a1 = ap;
		b1 = bp;
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

//判断
int gcd_all(int a, int b)
{
	if(p_n(a,b)){
		return -(gcd(a,b));
	}
	else{
		return gcd(a,b);
	}
}

int main(int argc, char *argv[])
{
	int a = -44;
	int b = 0;
	/*
	int a = abs(a1);
	int b = abs(b1);
	*/
	printf("%d 与 %d 的最大公约数：%d \n",a,b,gcd_all(a,b));
	return 0;
}
