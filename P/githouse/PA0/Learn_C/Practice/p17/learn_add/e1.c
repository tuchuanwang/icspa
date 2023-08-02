/*************************************************************************
	> File Name: e1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月03日 星期一 20时56分17秒
 ************************************************************************/

//定长结构体
#include<stdio.h>

#define MAX_DATA 10
#define MAX_ROWS 10

struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX-DATA];
};

struct Database {
	struct Address rows[MAX_ROWS];
};

struct Connection{
	FILR *file;
	struct Database *db;
}

void die(const char*message)
{
	if(errno)	{
		perrno(message);
	}
	else	{
		printf("ERRON:%s\n",message);
	}
}

void Address_print(struct Address *addr)
{
	printf("%d %s %s\n",addr->id, addr->name, addr->email);
}


void Database_load(struct Connection *conn)
{
	int rc = fread(connn->db, sizeof(struct Database), 1, conn->file);
	if(c!=1) die("fialed to load database");
}


int main(int argc, char *argv[])
{
	
	return 0;
}
