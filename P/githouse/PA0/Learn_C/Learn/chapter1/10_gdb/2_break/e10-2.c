/*************************************************************************
	> File Name: e10-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月08日 星期六 21时05分42秒
 ************************************************************************/

//断点
#include<stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0, i = 0;
	char input[5];

	while (1) {
		/*sum = 0;*/
		scanf("%s", input);
		for(i = 0; input[i] != '\0'; i++)
			sum = sum*10 + input[i] - '0';
		printf("input=%d\n", sum);
	}
	return 0;
}
