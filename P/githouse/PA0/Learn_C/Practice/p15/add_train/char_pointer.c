/*************************************************************************
	> File Name: char_pointer.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月28日 星期三 20时44分27秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	char name[] = {'a','b','\0' };
	char *names[] = {"abs","sadasd"};
	
	int len = sizeof(name)/sizeof(char);

	int i=0;
	char *s;

	printf("*s is %ld\n",sizeof(s));
	printf("names is %ld\n", sizeof(names));
	
	for(i=0; i<len; i++)
	{
		printf("name[%d] is : %c\n",i,name[i]);
		printf("*names[%d] is : %s\n",i,names[i]);
		printf("---\n");
	}

	printf("name is %s \n",name);
	return 0;
}
