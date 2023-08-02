/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 09时43分05秒
 ************************************************************************/

#include<stdio.h>

int is_run(int x)
{
	if(x%4 == 0){
		if(x%100 !=0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else
		return 0;
}

int main(int argc, char *argv[])
{
	int x;
	x=2004;
	if(is_run(x) ){
		printf("%d是闰年\n",x);
	}
	else
		printf("%d不是闰年\n",x);

	return 0;
}
