/*************************************************************************
	> File Name: train-2.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 09时47分36秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double myround(double x)
{
	if(x == 0.0 ){
		return 0;	
	}
	else	if(x < 0.0 ){
		return ceil(x)-1 ;
	}
	else
		return floor(x);
}

int main(int argc, char *argv[])
{
	double x;
//	x = -(3.51);
	x = 4.49;
	printf("%.1f 的四舍五入的结果为: %.1f \n", x, myround(x));

	return 0;
}
