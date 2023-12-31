/*************************************************************************
  > File Name: example.c
  > Author :WangZhen
  > Mail: 1240306894@qq.com
  > Created Time: 2023年07月06日 星期四 20时01分52秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

struct complex_struct{
	double x, y;
};

double real_part(struct complex_struct z){
	return z.x;
};

double img_part(struct complex_struct z){
	return z.y;
};

double magnitude(struct complex_struct z){
	return sqrt(z.x * z.x + z.y * z.y);
};

double angle(struct complex_struct z){
	return atan2(z.y,z.x); //反正切函数
};

struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
	struct complex_struct z;
	z.x = r * cos(A);
	z.y = r * sin(A);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)+real_part(z2), img_part(z1)+img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)-real_part(z2), img_part(z1)-img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(magnitude(z1)*magnitude(z2), angle(z1)+angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(magnitude(z1)/magnitude(z2), angle(z1)-angle(z2));
}

void print(struct complex_struct z)
{
	if(real_part(z) == 0)
	{
		printf("%.1fi\n",img_part(z));
	}
	else	if(img_part(z) == 0)
	{
		printf("%.1f\n",real_part(z));
	}
	else
		printf("%.1f%.1fi\n",real_part(z),img_part(z));
}

int main(int argc, char *argv[])
{
	struct complex_struct z0 ={4,};
	print(z0);

	return 0;
}
