/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 20时24分37秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct fraction_struct{
	int x,y;
};


int p_m(int a,int b)
{
	int k =0 ;
	if(a*b<0) k=1;
	return k;
}

int gcd(struct fraction_struct z)
{
	int ap,bp;
	ap = abs(z.x);
	bp = abs(z.y);

	int a1,b1;

	struct fraction_struct c;

	if(bp>ap){
		a1 = bp;
		b1 = ap;
	}
	else	{
		a1 = ap;
		b1 = bp;
	}

	if(a1 == 0 || b1 == 0){
		return 0;
	}
	else{
		if(a1%b1 == 0)
		{
			return b1;
		}
		else	{
			c.x = b1;
			c.y = a1%b1;
			return gcd(c);
		}
	}
}
	
//分数约分

void print(struct fraction_struct z)
{
	int g =gcd(z);

	if(z.y==0){
		printf("分母不能为0\n");
	}
	else	if(z.x == 0)	{
		printf("0\n");
	}
	else{
		if(p_m(z.x,z.y))
		{	
			if(abs(z.x) == abs(z.y))
				printf("-1\n");
			else
				printf("-%d/%d\n",abs(z.x)/g,abs(z.y)/g);
		}
		else
		{
			if(abs(z.x) == abs(z.y))
				printf("1\n");
			else
				printf("%d/%d\n",abs(z.x)/g,abs(z.y)/g);
		}
	}
}

//加法函数
struct fraction_struct add_fraction(struct fraction_struct a, struct fraction_struct b)
{
	struct fraction_struct z;
	z.y=a.y*b.y;
	z.x=a.x*b.y + a.y*b.x;

	return	z;
}

//减法函数
struct fraction_struct sub_fraction(struct fraction_struct a, struct fraction_struct b)
{
	struct fraction_struct z;
	z.y=a.y*b.y;
	z.x=a.x*b.y - a.y*b.x;

	return	z;
}

//c
struct fraction_struct mul_fraction(struct fraction_struct a, struct fraction_struct b)
{
	struct fraction_struct z;
	z.y=a.y*b.y;
	z.x=a.x*b.x;

	return z;
}

//
struct fraction_struct div_fraction(struct fraction_struct a, struct fraction_struct b)
{
	struct fraction_struct z;
	if(b.y !=0)
	{
		z.y=a.y*b.x;
		z.x=a.x*b.y;
	}
	else{
		z.y=0;
		z.x=1;
	}
	
	return z;
}

int main(int argc, char *argv[])
{
	struct fraction_struct a = {-1,8};
	struct fraction_struct b = {7,3};
	print(a);
	print(b);
	print(add_fraction(a,b));
	print(sub_fraction(a,b));
	print(mul_fraction(a,b));
	print(div_fraction(a,b));
	return 0;
}
