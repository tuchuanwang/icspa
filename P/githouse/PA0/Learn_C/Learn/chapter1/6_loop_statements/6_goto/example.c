/*************************************************************************
	> File Name: example.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 17时01分16秒
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i,j;
	for(i=0; i<10;i++)
	{
		for(j=0;j<10;j++){
			
			if(j == 3)
				continue;// break,continue都是退出当前的循环（内层）

			if(j == 6)
				break;

			printf("i:%d j:%d\n",i,j);
		
			if(i==2 && j==2)
				goto error;	//goto 是直接退出整个循环，跳到了外层
		}
	}

error:
	printf("2233\n");

	return 0;
}
