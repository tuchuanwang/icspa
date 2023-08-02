/*************************************************************************
	> File Name: ex15.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月28日 星期三 19时23分06秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	//creat two arrays we care about
	int	ages[]={23,43,12,89,2};
	char *names[] ={"alan","Frank","Mary","John","Lisa"};

	//safely get the siaze of ages
	int count = sizeof(ages)/sizeof(int);

	int i = 0;

	//first way using indexing
	for(i = 0; i< count; i++)
	{
		printf("%s has %d years alive.\n",names[i], ages[i]);
		printf("%s is %p\n",names[i],&names[i]);
	}

	printf("---\n");

	int *cur_age = ages;
	char **cur_name = names;

	//second way suing pointers
	for(i=0; i< count; i++)
	{
		printf("%s is %d years old again. \n", *(cur_name +i), *(cur_age+i));
		printf("%s is %p\n ", *(cur_name +i), &*(cur_name+i));
	}
	printf("---\n");

	//third way, pointers are just arrays
	for(i = 0; i<count ; i++)
	{
		printf("%s is %d years old again. \n", cur_name[i],cur_age[i]);
	}
	printf("---\n");

	// fourth way with pointers in a stupid complex way
	for(cur_name= names , cur_age = ages; (cur_age - ages)<count; cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}

	printf("int is %ld  char is %ld\n",sizeof(int),sizeof(char));

	return 0;
}
