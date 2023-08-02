/*************************************************************************
	> File Name: ex14.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月26日 星期一 16时43分54秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
// forward declar:wations 前向声明
int can_print_it(char ch);
void print_letters(int len,char arg[]);

//使用strlen函数，让print_arguments知道每个字符串参数都有多长，之后将长度传入print_letters。然后重写print_letters，让它只处理固定的长度，不按照'\0'终止符。你需要#include <string.h>来实现它。''

void printf_arguments(int argc, char *argv[])
{
	int i=0;
	char str[200];
	int len;


	for(i=0; i< argc; i++)
	{	
		strcpy(str ,argv[i]);
		len = strlen(str);

		printf("%s 长度为： %d \n",str,len);
		print_letters(len ,argv[i]);

	}
}

void print_letters(int len, char arg[])
{
	int i =0;

	for(i=0 ; i<len ; i++)
	{
		char ch =arg[i];

		if(can_print_it(ch))
		{
			printf("'%c' == %d ",ch ,ch);
		}
	}

	printf("\n");
}

int can_print_it(char ch)
{
	//return isalpha(ch)||isblank(ch);//isblank:判断单元格是否为空    //isalpha 检测单元格是否只有字母组成(本例子中无法识别非字母单元格)
	//return isdigit(ch);//isdigit 只检查数字
	return	islower(ch);//islower 只打印小写字符
}

int main(int argc, char *argv[])
{
	printf_arguments(argc , argv);
	return 0;
}
