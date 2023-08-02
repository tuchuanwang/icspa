/*************************************************************************
	> File Name: ex8.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月20日 星期二 15时35分10秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10,12,13,14,20};
	int areas1[]= {100,'h'};
	char	name1[] = "haha";
	char	name2[] = {'h','a','h','a','\0'};

	printf("This is name1[]=%s\n",name1);
	printf("This is name2[]=%s\n",name2);
	printf("areas1[0]=%d\n",areas1[0]); //输出100
	printf("areas1[0]=%d\n",areas1[1]);	//char也是一种整形，asicii表中 h-> 104

	printf("this size name1[]=%ld\n",sizeof(name1));
	printf("this size name2[]=%ld\n",sizeof(name2));
	return 0;
}
