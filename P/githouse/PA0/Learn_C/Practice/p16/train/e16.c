/*************************************************************************
	> File Name: e16.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月02日 星期日 20时07分16秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

struct Person
{
	char *name;
	int age;
	int height;
};

void change(struct Person hum);

void change1(struct Person *hum);

void print(struct Person you);
	

int main(int argc, char *argv[])
{
	struct Person wangzhen = {"wangzhen",23,170};
	struct Person tuchuan;
	tuchuan.name ="tuchuan";
	tuchuan.age = 18;
	tuchuan.height = 170;
	
	printf("change效果：只传递数值:\n");
	print(wangzhen);
	change(wangzhen);
	print(wangzhen);	//只传递数值，输出并为改变
	
	printf("change1效果：传递地址:\n");
	print(tuchuan);
	change1(&tuchuan);//将tuchuan的地址传递进来
	print(tuchuan);
	return 0;

}

void change(struct Person hum)
{
	hum.name = "wangtuchuan";
}

void change1(struct Person *hum)
{
	hum->name = "wangtuchuan"; //这里就相当于 (*hun).name
}

void print(struct Person you)
{
	printf("Name: %s\n", you.name);
	printf("\tage: %d\n",you.age);
	printf("\theight: %d\n",you.height);
	printf("-------next------\n");
}
