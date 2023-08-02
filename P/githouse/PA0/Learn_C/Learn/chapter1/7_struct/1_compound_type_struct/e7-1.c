/*************************************************************************
	> File Name: e7-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 19时13分02秒
 ************************************************************************/

#include<stdio.h>
/*
int main(int argc, char *argv[])
{
	struct complex_struct
	{
		double x,y;
	} z;

	double x = 3.0;
	z.x = x;
	z.y = 4.0;

	if(z.y <0)
		printf("z=%f%fi\n",z.x,z.y);
	else
		printf("z=%f+%fi\n",z.x,z.y);
	return 0;
}*/

struct complex_struct{
	double x;
	double y;
};

struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2)
{
	struct complex_struct z0;
	z0.x=z1.x+z2.x;
	z0.y=z1.y+z2.y;

	return z0;
}

double re(struct complex_struct z1, struct complex_struct z2)
{
	double zre;
	zre = z1.x+z2.x;

	return zre;
}

void print(struct complex_struct a)
{
	printf("%.1f + %.1fi",a.x,a.y);
}

int main(int argc, char *argv[])
{
	struct complex_struct a={1.0, 2.0};
	struct complex_struct b={2.0, 3.0};
	
	print(a);
	printf("+");
	print(b);
	printf("=");
	print(add_complex(a,b));
	printf("\n");

	printf("实部：%.1f\n", re(a,b));

	return 0;
}
