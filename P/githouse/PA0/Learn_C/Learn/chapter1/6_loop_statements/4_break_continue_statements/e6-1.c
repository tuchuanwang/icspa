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
	for(i=2; i<n; i++)
		if(n%i == 0)
			break;
	
	if(i == n)
			return 1;
	else
			return 0;
}

int main(int argc, char *argv[])
{
	int i;
	for(i = 1; i<= 100; i++){
		if(!is_prime(i))
			continue;
		printf("%d\n",i);
	}
	return 0;
}
