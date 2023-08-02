/*************************************************************************
	> File Name: fread1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月04日 星期二 11时46分34秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char c[] = "This is runoob";
	char buffer[20];

	/* 打开文件用于读写*/
	fp = fopen("file.txt", "w+");

	/*写数据到文件之中*/
	fwrite(c, strlen(c) +1, 1,fp);

	/*查找文件开头*/
	fseek(fp,0,SEEK_SET);

	/*读取并显示数据*/
	fread(buffer, strlen(c)+1,1,fp);
	printf("%s\n",buffer);
	fclose(fp);


	return 0;
}
