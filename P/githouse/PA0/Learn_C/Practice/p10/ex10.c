/*************************************************************************
	> File Name: ex10.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月21日 星期三 22时03分56秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	argc =10;
	//argv = "nihao";
	//argv[2] = "ni hao linux";
	//go through each string in argv
	//why am i skipping argv[0]?
	for(i = 0; i< argc; i++)
		{
			printf("arg %d: %s\n", i, argv[i]);
		}

	char *states[] = {
						"California", "Oregon",
						"Washington","Texas"
					};
	
	int num_states = 4;

	for(i=0; i< num_states; i++)
		{
			printf("state %d: %s\n",i,states[i]);
			if(i ==1 )
			{
				break;
			}

		}

	return 0;
}
