/*************************************************************************
	> File Name: e12-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月10日 星期一 09时25分08秒
 ************************************************************************/
//LIFO last in first out
#include<stdio.h>

char stack[512];
int top = 0;

void push(char c)
{
	stack[top++] = c;
}

char pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}

int main(int argc, char *argv[])
{
	push('a');
	push('b');
	push('c');

	while(!is_empty())
		putchar(pop());
	putchar('\n');

	return 0;
}
