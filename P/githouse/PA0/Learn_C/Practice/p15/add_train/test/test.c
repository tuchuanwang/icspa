/*************************************************************************
	> File Name: test.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年06月28日 星期三 21时38分28秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
/*
		int a[5] = {1,2,3,4,5};
	    int *p = (int*)(&a+1);	// & sizeof是对镇个数字组进行操作。要注意！		
		
		int i=0;
		int count = sizeof(a)/sizeof(int);

		for(i=0; i<count;i++)
		{
			printf("%d,%d\n",*(a+i),*(p-i-1));
			printf("%d\n", i);
		}	
a*/	

	char *s[]={"nihao","","haha"};

	char **a=s;		//a和b表示的为用一个东西
	char **b =&(*s);

//	int count = sizeof(s)/sizeof(char);
	int i=0;

	for (i =0; i<3 ; i++)
	{
		//地址比较
		printf("**a[%d] is %p\n",i,*(a+i));
		printf("**b[%d] is %p\n",i,*(b+i));
		
		//数值比较
		printf("**a[%d] is %s\n",i,*(a+i));
		printf("**b[%d] is %s\n",i,*(b+i));

		//数值比较
		printf("**a[%d] is %s\n",i,(a[i]));
		printf("**b[%d] is %s\n",i,(b[i]));

		printf("---\n");
	}


	return 0;
}
