/*************************************************************************
	> File Name: train-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月07日 星期五 09时59分47秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI acos(-1)

enum mp_type {RECTANGULAR, POLAR};

struct complex_struct
{
	enum mp_type t;
	double a,b;
};

//直角坐标系
struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.t = RECTANGULAR;
	z.a = x;
	z.b = y;
	return z;
}

//极坐标坐标系
struct complex_struct make_from_mag_ang(double r, double A)
{
	struct complex_struct z;
	z.t = POLAR;
	z.a = r;
	z.b = A;
	return z;
}

//实部
double real_part (struct complex_struct z)
{
	double re;

	struct complex_struct p;

	if(z.t == RECTANGULAR)
	{
		p = make_from_real_img(z.a,z.b);
		re = p.a;
	}
	else
	{
		p = make_from_mag_ang(z.a,z.b);
		re = p.a * cos((p.b/180)*PI);
	}
	
	return re;
}

//虚部
double img_part (struct complex_struct z)
{
	double im;

	struct complex_struct p;

	if(z.t == RECTANGULAR)
	{
		p = make_from_real_img(z.a,z.b);
		im = p.b;
	}
	else
	{
		p = make_from_mag_ang(z.a,z.b);
		im = p.a * sin((p.b/180)*PI);
	}
	
	return im;
}
	

//幅度
double manguitude (struct complex_struct z)
{
	double ma;

	struct complex_struct p;

	if(z.t == RECTANGULAR)
	{
		p = make_from_real_img(z.a,z.b);
		ma = p.a /(cos(atan2(p.b,p.a)));
	}
	else
	{
		p = make_from_mag_ang(z.a,z.b);
		ma = p.a ;
	}
	
	return ma;
}
	

//角度
double angle(struct complex_struct z)
{
	double an;

	struct complex_struct p;

	if(z.t == RECTANGULAR)
	{
		p = make_from_real_img(z.a,z.b);
		an = (atan2(p.b,p.a))*(180/PI);
	}
	else
	{
		p = make_from_mag_ang(z.a,z.b);
		an = p.b ;
	}
	
	return an;
}
	
//打印函数
void print(struct complex_struct z, double t)
{
	if(z.t == 0)
	{
		printf("%f+%fi: %f\n",z.a,z.b,t);
	}
	else
	{
		printf("%.2fe(%.fI): %f\n",z.a,z.b,t);
	}
}


int main(int argc, char *argv[])
{
	struct complex_struct a = {1, 5,atan2(4,3)*(180/PI)};

	print(a,real_part(a));		
	print(a,img_part(a));	
	print(a,manguitude(a));
	print(a,angle(a));

	printf("%f+%.1fi的实部：%f\n", a.a,a.b, real_part(a));
	
	printf("%f+%.1fi的虚部：%f\n", a.a,a.b, img_part(a));

	printf("%f+%fi的幅度：%f\n", a.a,a.b, manguitude(a));
	
	printf("%f+%fi的幅角: %f\n", a.a,a.b, angle(a));

	return 0;
}
