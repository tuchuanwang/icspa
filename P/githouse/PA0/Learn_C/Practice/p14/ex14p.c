/*************************************************************************
	> File Name: ex14.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月26日 星期一 16时43分54秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

// forward declarations 前向声明
/*int can_print_it(char ch);*/
void print_letters(char arg[]);

void printf_arguments(int argc, char *argv[])
{
	int i=0;

	for(i=0; i< argc; i++)
	{
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i =0;

	for(i=0 ; arg[i]!='\0' ; i++)
	{
		char ch =arg[i];

		//if(can_print_it(ch))
		if(isalpha(ch)||isblank(ch)) //这里可一不用can_print_it函数
		{
			printf("'%c' == %d ",ch ,ch);
		}
	}

	printf("\n");
}

/*
int can_print_it(char ch)
{
	return isalpha(ch)||isblank(ch);//isblank:判断单元格是否为空    //isalpha 检测单元格是否只有字母组成(本例子中无法识别非字母单元格)
}
*/

int main(int argc, char *argv[])
{
	printf_arguments(argc , argv);
	return 0;
}
