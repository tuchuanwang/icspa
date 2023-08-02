/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 15时13分20秒
 ************************************************************************/

#include<stdio.h>

int bit(int x)
{
	return x%10;
}

int ten(int x)
{
	return x/10;
}

int main(int argc, char *argv[])
{
	int i=1;
	int count = 0;

	while (i<=100) {
		int a = bit(i);
		int b = ten(i);
		
	    if(b==9 && a==9){
			count=count +2;
		}	
		else	if(a==9)
		{
			count++;
		}
		else if(b == 9){
			count++;
		}
		
		i++;
	}

	printf("1-100中共出现%d次数字9\n",count);
	return 0;
}
