/*************************************************************************
	> File Name: ex8.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月20日 星期二 15时35分10秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10,12,13,14,20};
	char	name[] = "Zed";
	char full_name[] = {
	'Z','e','d',
	' ','A','.',' ',
	'S','h','a','w'/*,'\0'*/
	};

	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of an long: %ld\n",sizeof(long));
	printf("The size of areas(int[]): %ld\n",sizeof(areas));

	printf("The number of this in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("Tje first area is %d, the 2nd %d. \n",areas[0],areas[1]);

	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));

	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

	printf("The size of full_name (char[]: %ld\n)", sizeof(full_name));

	printf("The number of chars: %ld\n",sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n",name ,full_name);	//注意这里转移字符的使用，主要是为了避免“”的误解，可以自输出语句中长生""

	return 0;

/*
The size of an int: 4
The size of areas(int[]): 20
The number of this in areas: 5
Tje first area is 10, the 2nd 12. 
The size of a char: 1
The size of name (char[]): 4	//char 中最后会有一个占为符“%0”来结束字符。所以”zed“的长度实际上为4.
The number of chars: 4
The size of full_name (char[]: 12
The number of chars: 12
name="Zed"and full_name="Zed A. Shaw"
*/
}
