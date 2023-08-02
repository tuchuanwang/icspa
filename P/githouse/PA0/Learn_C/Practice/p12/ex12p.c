/*************************************************************************
	> File Name: ex12.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月22日 星期四 15时35分39秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
	printf("You only have one argument.You suck.\n");
    } else if (argc > 1 && argc < 4) {
	printf("Here is your arguments:\n");
	for (i = 0; i < argc; i++) {
	    printf("%s %%", argv[i]);
	}
	printf("\n");
    } else {
	printf("You take too mant arguments, You suck.\n");
    }
    return 0;
}
