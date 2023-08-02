/*************************************************************************
	> File Name: ex9.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月21日 星期三 20时41分41秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {1};
	char name[4] = {"a"};


	printf("int size is %ld\n",sizeof(numbers));
	printf("char size is %ld\n",sizeof(name));
	printf("int size is %ld\n",sizeof(int));
	printf("char size is %ld\n",sizeof(char));
	//first,print them out raw
	printf("numvers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);

	printf("name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);

	//setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 'a';
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'h';//'\0';


	//逐个显示name
	int i;
	char *p;
	p=name;
	int t = sizeof(name);

	for(i=0;i<t;i++)
	printf("%c   %x \n",*(p+i),*(p+i));
	
	//the print them out initialized
	printf("numvers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);
	printf("name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);
	
	//printf the name like a string
	printf("name: %s\n",name);

	//another way to use name
	char *another = "zed";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",another[0],another[1],another[2],another[3]);

	//name -> *namep
	char *namep = name;
	printf("namep: %s\n",namep);

	return 0;
}
