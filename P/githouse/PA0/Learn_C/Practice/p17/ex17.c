/*************************************************************************
	> File Name: ex17.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月03日 星期一 19时29分00秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA];
};

struct Database	{
	struct Address rows[MAX_ROWS];//define rows[100]
};

struct Connection {
	FILE *file;			//
	struct Database *db;
};

void die(const char *message)
{
	if(errno)	{      //errno 只有0表示成功，其他的数字都表示出错（1-133
		perror(message);
	}
	else	{
		printf("ERROR: %s\n",message);
	}

	exit(1);
}

void Address_print(struct Address *addr)
{
	printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
	int rc = fread(conn->db , sizeof(struct Database), 1, conn->file);
	if(rc != 1) die("Failed to load database ");
}

struct Connection *Database_open(const char *filename, char mode)
{
	struct Connection *conn = malloc(sizeof(struct Connection));
	if(!conn) die("Memory error");

	conn->db = malloc(sizeof(struct Database));
	if(!conn->db) die("Memory error");

	if(mode == 'c')
	{
		conn->file = fopen(filename, "w"); // 创建一个用于写入的空文件，如果文件名称与一存在的文件相同，则会删除一有的文件的内容，文件被视为一个新文件
	}
	else
	{
		conn->file = fopen(filename, "r+"); //r+ 打开一个用于更新的文件，可读取也可写入，该文件必须存在

		if(conn->file){
			Database_load(conn);
		}
	}
	
	if(!conn->file) die("Failed to open the file");
	
	return conn;
}

void Database_close(struct Connection *conn)
{
	if(conn)
	{
		if(conn->file) fclose(conn->file);	//关闭 (*conn).file
		if(conn->db) free(conn->db);//释放内存	
		free(conn);
	}
}

void Database_write(struct Connection *conn)
{
	rewind(conn->file);	//rewind函数 设置文件位置为给定流stream的文件的开头,类似于vim中的‘0’

	int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
	if(rc !=1) die("Failed to write database.");

	rc = fflush(conn->file); // fflush更新缓存区 用于刷新流的缓冲区，以确保缓冲区中的数据被写入到文件中。它的函数原型如下.int fflush(FILE *stream);
							 //
	if(rc == -1) die("Cannot flush database.");
}

void Database_create(struct Connection *conn)
{
	int i = 0;

	for(i=0; i < MAX_ROWS ; i++){
		//make a prototype to initialize it
		struct Address addr = {.id = i, .set = 0};
		//then just assign it
		conn->db->rows[i] = addr; // 读取conn中的db中的rows的第i个元素 
								  // conn->db->row+i
	}
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
	struct Address *addr = &conn->db->rows[id];
	if(addr->set) die("Already set, delete it first");

	addr->set = 1;
	// WARINGl bug,read the "How To Break IT" and fix this
	char *res = strncpy(addr->name, name, MAX_DATA);// 将name复制到addr->name中 MAX_DATA次
	//demonstrate the strncpy bug
	if(!res) die("Name copy failes");

	res = strncpy(addr->email, email, MAX_DATA); // 字符串用*res, 整数用res
	if(!res) die("Email copy failed");
}

void Database_get(struct Connection *conn, int id)
{
	struct Address *addr = &conn->db->rows[id];

	if(addr->set){
		Address_print(addr);
	}else{
		die("ID is not set");
	}
}

void Database_delete(struct Connection *conn, int id)
{
	struct Address addr = {.id = id, .set = 0};
	conn->db->rows[id] = addr;
}

void Database_list(struct Connection *conn)
{
	int i=0;
	struct Database *db = conn->db;

	for(i = 0; i< MAX_ROWS; i++){
		struct Address *cur = &db->rows[i];

		if(cur->set){
			Address_print(cur);
		}
	}
}


int main(int argc, char *argv[])
{
	if(argc <3) die("USAGE: ex17 <dbfile> <action> [action params]");

	char *filename = argv[1];
	char action = argv[2][0];
	struct Connection *conn = Database_open(filename, action);
	int id = 0;

	if(argc >3) id = atoi(argv[3]);// atoi() 把参数所指向的字符串转换为一个整数
	if(id >= MAX_ROWS) die("There is not that many records.");

	switch(action){
		case 'c':
			Database_create(conn);
			Database_write(conn);
			break;

		case 'g':
			if(argc !=4) die("Need an id to get");

			Database_get(conn, id);
			break;

		case 's':
			if(argc !=6) die("Need id, name, email to set");

			Database_delete(conn, id);
			Database_write(conn);
			break;

		case 'd':
			if(argc !=4) die("Need id to delet");

			Database_delete(conn, id);
			Database_write(conn);
			break;

		case 'l':
			Database_list(conn);
			break;
	 
		default:
			die("Invalid action, only: c=create, g=get, s=set, d=del, l=list");
	}

	Database_close(conn);

	return 0;
}
