/*************************************************************************
	> File Name: e10-3.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月09日 星期日 15时26分18秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0, i = 0;
	char input[5];

	while (1) {
		sum = 0;
		scanf("%s",input);
		for (i = 0; input[i] != '\0'; i++)	{
			if (input[i] < '0' || input[i] >'9'){
				printf("Invalid input!\n");
				sum = -1;
				break;
			}
			sum = sum*10 + input[i] - '0';
		}
		printf("input=%d\n",sum);
	}
	return 0;
}
