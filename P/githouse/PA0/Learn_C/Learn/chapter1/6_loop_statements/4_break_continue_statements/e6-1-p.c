/*************************************************************************
	> File Name: e6-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 15时41分45秒
 ************************************************************************/

#include<stdio.h>

int is_prime(int n)
{
	int i;
	for (i=2; n%i!=0; i++);//i不断加，若为素数，则会一直加，直到等于n

	if(n == i)
		printf("%d\n",n);
	
	return 0;
}

int main(int argc, char *argv[])
{
	int i;
	for(i = 2; i<= 100; i++)
	{
		is_prime(i);
	}

	return 0;
}
