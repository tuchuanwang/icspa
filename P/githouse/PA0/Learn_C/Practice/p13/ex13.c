/*************************************************************************
	> File Name: ex13.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月24日 星期六 15时47分24秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc !=2)
		{
			printf("ERROR； You need one argument. \n");
			//this is how you abort a program
			//return 1;
		}

	int i=0;
	for(i-0; argv[1][i] != '\0';i++)
	{
		char letter = argv[1][i];

		switch(letter)
		{
			case 'a':
			case 'A':
				
				printf("%d 'A'\n", i);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n",i);
				
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n",i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n",i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n",i);
				break;

			case 'y':
			case 'Y':
				if(i >2)
				{
					// is is only sometimes Y
					printf("%d: 'Y'\n",i);
				//	break;
				}
				break; //如果这个break移动到了if里面，会接着执行后面的default 的语句
		default:
				printf("%d: %c is not a vowel\n",i,letter);
		}
	}

	return 0;
}
