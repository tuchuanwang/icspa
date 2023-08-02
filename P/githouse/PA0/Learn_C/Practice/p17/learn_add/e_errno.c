/*************************************************************************
	> File Name: e_errno.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月04日 星期二 10时18分18秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int tmp = 0;
	for(tmp = 0 ;tmp <= 26; tmp++)
	{
	// char *strerror(int errnum); 字符串显示错误信息：将错误码一字符串的信息显示出来
		printf("errbi: %2d\t%s\n",tmp, strerror(tmp));
	}
	return 0;
}
