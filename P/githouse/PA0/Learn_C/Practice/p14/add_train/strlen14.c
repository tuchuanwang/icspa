/*************************************************************************
	> File Name: strlen14.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月26日 星期一 20时07分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int len;
	char str[50];

	strcpy(str, "汉字的长度");//汉字的长度为

	len = strlen(str);
	printf("%s 的长度为： %d \n",str,len);
	printf("%ld\n",sizeof(str[1]));

	return 0;
}
