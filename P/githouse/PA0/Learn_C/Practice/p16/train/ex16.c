/*************************************************************************
	> File Name: ex16.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月01日 星期六 20时21分09秒
 ************************************************************************/
//在栈区构造结构体

#include<stdio.h>
#include<assert.h>   // 对所给的表达式求值，就像if语句一样，如果该直为真则正常运行，否则报错。
#include<stdlib.h>   // 包含了free()函数: void free(void* p)  释放p所指的内存区
#include<string.h>	 // 包含了一些字符串函数

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};


//打印函数
void Person_print(struct  Person  who)
{
	printf("Name: %s\n", who.name); //(*who).name
	printf("\tAge: %d \n", who.age);
	printf("\tHeight: %d \n", who.height);
	printf("\tWeight: %d \n", who.weight);
}

int main(int argc, char *argv[])
{
	//make two pepole structures
	struct Person joe ; 
	struct Person frank = {"frank",34,124,124};

	joe.name = "joe";
	joe.age  = 12;
	joe.height = 170;
	joe.weight = 170;




	//printf them out and where they are in memory
	printf("Joe is at memory location %p:\n",joe.name);
	Person_print(joe);

	printf("Frank is at memory location %p:\n",frank.name);
	Person_print(frank);

	printf("----\n");
	//make everyone age 20 years and print them again
	joe.age += 20;
	joe.height -= 2;
	joe.weight += 40;
	Person_print(joe);
	
	frank.age +=20;
	frank.weight +=20;
	Person_print(frank);

	//destroy them both so we clean up

	return 0;
}
