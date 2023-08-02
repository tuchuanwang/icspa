/*************************************************************************
	> File Name: e6-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 16时31分01秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j;
	for(i =1; i<=100; i++){
		for(j = 2; j<i; j++){
			if(i%j==0)
				break;	
		}
		if(j == i)
			printf("%d\n",i);
	
	}
	return 0;
}
