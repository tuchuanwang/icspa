/*************************************************************************
	> File Name: example.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 11时27分21秒
 ************************************************************************/

#include<stdio.h>

struct complex_struct
{
	double a,b;
};

struct segment 
{
	struct complex_struct start;
	struct complex_struct end;
};

int main(int argc, char *argv[])
{

	struct segment s = {{1.1,2.1},{3.0,4.0}};

	//调用需要多个.
	printf("start: %f+%fi\n",s.start.a,s.start.b);
	printf("end: %f+%fi\n",s.end.a,s.end.b);

	//也可以这样初始化
	struct segment a ={ 1.2, 1.5 , 2.3 ,3.4};  //会出现warning 建议还是采用第一种方法，加上{}
	printf("start: %f+%fi\n",a.start.a,a.start.b);
	printf("end: %f+%fi\n",a.end.a,a.end.b);


	return 0;
}
