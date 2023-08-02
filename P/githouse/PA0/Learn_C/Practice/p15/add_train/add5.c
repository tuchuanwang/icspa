/*************************************************************************
	> File Name: ex15.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月28日 星期三 19时23分06秒
 ************************************************************************/
//使用指针来处理命令行参数，

#include<stdio.h>

int main(int argc, char *argv[])
{
	//creat two arrays we care about
	int i=0;

	for(i=0 ; i<argc ; i++)
	{
		printf("数组argv[%d] is %s \n",i,     argv[i] );
		printf("指针argv[%d] is %s \n",i , *(argv + i));
		printf("argv[%d]的地址： %p\n",i,	argv[i]);	//数组元素中保存的地址
		printf("&*(argv + %d)的地址： %p\n", i,	&*(argv + i)); //数组元素单元本身的地址
		printf("argv[%d]的地址： %p\n",i,	&argv[i]);
		printf("argc[%d]      :  %d\n", i , *argv[i]);
		printf("---\n");
	}


	return 0;
}
