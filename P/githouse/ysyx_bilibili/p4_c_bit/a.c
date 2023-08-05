/*************************************************************************
    > File Name: a.c
    > Author: wangzhen
    > Mail: 1240306894@qq.com 
    > Created Time: 2023年08月03日 星期四 19时20分51秒
 ************************************************************************/
#include "stdio.h"
#define MSG "Hello \ 
World!\n"

int main()
{
	  printf(MSG /*"hi!\n"*/);
#ifdef __riscv
		  printf("Hello RISC-V!\n");
#endif
			  return 0;
}
