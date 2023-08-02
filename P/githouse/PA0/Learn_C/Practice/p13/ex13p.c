
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
	char letter = argv[1][0];
	for(i=0; argv[1][i] != '\0';i++,letter =argv[1][i])	//for 中的","的执行顺序为从左到右。！
	{
	//	char letter = argv[1][i];

//if语句
//		
		if(letter >= 65 && letter <= 92)
		{
			printf("%d: %c\n",i,letter);	
		}
		else if(letter >= 97 && letter <= 122)
		{
			printf("%d : %c\n",i,letter -32);
		}
		else
		{
			printf("请输入大小写字母:\n");
		}


//weitch 语句
	/*	switch(letter)
		{
			case 'a':
		
				printf("%d '%c'\n", i,letter-32);
				break;

			case 'e':
				printf("%d '%c'\n", i,letter-32);			
				break;

			case 'i':
				printf("%d '%c'\n", i,letter-32);
				break;

			case 'o':
				printf("%d '%c'\n", i,letter-32);
				break;

			case 'u':
				printf("%d '%c'\n", i,letter-32);
				break;

			case 'y':
				if(i >2)
				{
					// is is only sometimes Y
					printf("%d '%c'\n", i,letter-32);
				}
				break;
		default:
				printf("%d: %c is not a vowel\n",i,letter);
				break;
		}*/
	}
	return 0;
}
