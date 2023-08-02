练习17：堆和栈的内存分配

# 函数的解析： 	
### 0.结构体定义
	struct Address {
		int id;
		int set;
		char name[MAX_DATA];
		 char email[MAX_DATA];
		};

### 1.定长结构体

	struct Address rows[MAX_ROWS]

### 2.文件类型的指针	
	
	FILE *file

  声明 \*file是指针，用来指向FILE类型的对象。
\*file是指向文件结构体的指针变量，通过fp可找到存放某个文件信息的结构变量，根据这个结构变量的信息找到该文件，实施对文件的操作。file通常被成为一个指向文件的指针。

### 3.die(const char \*message)
停止函数，小程序中如果出现错误可以直接消灭掉。

	perror()     头文件<stdio.h>
用来将上一个函数发生错误的原因输出到标准设备。

	erron  错误码 
Linux中系统调用的错误都存储在errno中，errno由操作系统维护，存储就近发生的错误，及下一次的错误会覆盖掉上一次的错误。
#### 打印错误信息：
 可以参考 [Linux errno详解](https://www.cnblogs.com/Jimmy1988/p/7485133.html "这个足以解释erron了")
#### 1.perror
		头文件：#include<stdio.h>
		函数原型： void perror(const char*s)
作用：打印系统错误信息
#### 2.strerror
		头文件 #include<stdio.h>
		函数原型: char *strerror(int errnum);
将错误码以字符串的信息显示出来

#### c++退出函数 
	exit(1) 是非正常退出,返回给主程序1
其中 exit(0)表示正常推出(类似于 return 0)，在程序中效果相同，但是在函数之中，return会跳出函数，exit会结束程序。

### 4.输出程序，输出结构体的各个参数 
	void Address_print(struct Address *addr)

### 5.数据库加载 Database_load
	void Database_load(struct Connection *conn)
创建了一个conn
#### 1.fread() [c库函数-freed()](https://www.runoob.com/cprogramming/c-function-fread.html)
	函数原型：size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
#### 参数
ptr-这是这项带有最小先尺寸size \*nmemb字节的内存快的指针.<br />
size:这是要读取的每个元素的大小，以字节为单位.<br /> 
nmemb:这是元素的个数，每个元素的大小为size字节.<br />
stream:这是这项FILE对象的指针，该GILE对象制定了一个输入流.<br />  

### 6.Database_open 打开数据库函数？




