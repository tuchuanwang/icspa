/*************************************************************************
	> File Name: ex4.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月13日 星期二 15时53分06秒
 ************************************************************************/

#include<stdio.h>

void crash() {
	char *test = NULL;
	int i= 0;

	for(i=0; i< 1000; i++){
		printf("%c", test[i]);
	}
}
/**Waring : this program is wrong on purpose.  **/

int main(int argc, char *argv[])
{
    int age = 10;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);
	
	crash();

    return 0;
}
