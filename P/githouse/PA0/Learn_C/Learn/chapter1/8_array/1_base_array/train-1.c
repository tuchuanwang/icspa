/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 15时08分28秒
 ************************************************************************/

#include<stdio.h>

struct text
{
	char *name;
	int age;
};


int main(int argc, char *argv[])
{
	int a[4] = {1,2,3,4};
	int b[4];

	struct text wang = {"wangzhen",23};
	struct text zhen;


	//结构体这样的赋值是可以的
	zhen = wang;

	printf("%s is %d\n",wang.name, wang.age);
	printf("%s is %d\n",zhen.name, zhen.age);
	
	int i=0;
	for(i=0; i< 4; i++)
	{
		b[i] = a[i];
		printf("a[%d]=%d\n",i,a[i]);
		printf("b[%d]=%d\n",i,b[i]);
	}


	return 0;
}
