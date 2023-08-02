/*************************************************************************
	> File Name: ex16.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月01日 星期六 20时21分09秒
 ************************************************************************/

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

//类创造函数
struct Person *Person_create(char *name, int age, int height, int weight)
{
	//void *malloc(size_t size) 配所需的内存空间，并返回一个指向它的指针。
	//向malloc传递sizeof(struct Person)参数，它计算结构体的大小，包含其中的所有成员。
	struct Person *who = malloc(sizeof(struct Person));

    //检查malloc是否会返回NULL,即确保从malloc得到一块有效的内存
	assert(who != NULL); 

	//使用x->y来初始化struct Person的每个成员  x->y == (*x).y
	//使用strdup来复制字符串name
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

//如果定义了创建函数，也要定义一个销毁函数，销毁Person结构体。
void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	//free 函数：void free(void *ptr) 释放malloc所分配的内存空间
	free(who->name);
	free(who);
}

//打印函数
void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name); //(*who).name
	printf("\tAge: %d \n", who->age);
	printf("\tHeight: %d \n", who->height);
	printf("\tWeight: %d \n", who->weight);
}

int main(int argc, char *argv[])
{
	//make two pepole structures
	struct Person *joe = Person_create("Joe Alex", 32 , 64, 140);
	struct Person *frank = Person_create("frank Blank", 20 , 72, 180);

	//printf them out and where they are in memory
	printf("Joe is at memory location %p:\n",joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n",frank);
	Person_print(frank);

	printf("----\n");
	//make everyone age 20 years and print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);
	
	frank->age +=20;
	frank->weight +=20;
	Person_print(frank);

	//destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);


	return 0;
}
