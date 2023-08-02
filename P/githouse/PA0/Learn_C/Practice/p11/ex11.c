/*************************************************************************
	> File Name: ex11.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月22日 星期四 14时18分49秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	//go throuch each string in argv
	
	int i = 0;
	//argc =4  ;
	while(i < argc)
	{
		printf("arg %d; %s\n", i , argv[i]);
		i++;
	}

	//let is make our own array of strings
	char *states[]={"California","Oregan","Washington","Texas"};
	char *states1[]={"nihao","this","is","test"};
	int num_states = 4;
	i = 0; //watch for this
		   
	while(i< num_states)
	{
		printf("state %d: %s\n",i,states[i]);
		i++;
	}

	i = 3;

	printf("下面开始倒序输出: \n");
	//倒序输出 这里的i并没有初始化，仍然为4
	while(i >= 0)
	{
		printf("state %d: %s\n",i,states[i]);
		i--;
	}


	printf("下面开始将argv复制到states之中:\n");
	i=3;

	while(i >= 0)
	{
		printf("state %d: %s\n",i,states[i]);
		printf("*state %d: %d\n",i,*states[i]);
		printf("*argv: %d: %d\n",i,*argv[i]);
		states[i] = argv[i];
		printf("state %d: %s\n",i,states[i]);
		printf("*state %d: %d\n",i,*states[i]);
		printf("*argv: %d: %d\n",i,*argv[i]);
		printf("\n");

		i--;
	}

/*
	while(i >= 0)
	{
		printf("state %d: %s\n",i,states[i]);
		printf("*state %d: %d\n",i,*states[i]);
	//	states[i] = states1[i];
	//	printf("state %d: %s\n",i,states[i]);
	//	printf("*state %d: %d\n",i,*states[i]);
		i--;
	}
*/
	return 0;
}
