/*************************************************************************
	> File Name: add6.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月29日 星期四 10时42分02秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int age[] = {1,4,6,8,10};
//	char *names[] = {"nihao","hao","linux","world"};

	int *unage = (int*)(&age +1);
	
	int len = sizeof(age)/sizeof(int);
	int i=0;

	printf("len is %d \n", len);

	while(i<len)
	{
		printf("age[%d]is   :%d \t",i,  age[i]);
		printf("unage[%d]is :%d \n ", i , unage[-i-1]);
		printf("unage[%d]is : %d \n", i , *(unage -i-1));
		printf("---\n");
		i++;
	}

	return 0;
}
