/*************************************************************************
	> File Name: e5-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月06日 星期四 10时06分58秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define pi 3.14

double distance(double x1, double y1, double x2, double y2)
{
	double dist;
	double dx = x2-x1;
	double dy = y2-y1;
//	printf("dx is %f\ndy is %f\n",dx,dy);
	dist = sqrt(dx*dx + dy*dy);
	return dist;
}

double area(double r)
{
	return r*r*pi;
}

double area_point(double x1, double y1, double x2, double y2)
{
	return area(distance(x1,y1,x2,y2));	
}

int main(int argc, char *argv[])
{
	double x1 = 1.0;
	double y1 = 2.0;
	double x2 = 4.0;
	double y2 = 6.0;
	double r  = distance(1.0, 2.0, 4.0, 6.0);
	double a  = area_point(x1,y1,x2,y2);

	printf("(%.1f,%.1f)到(%.1f,%.1f)的距离为：%.2f\n",x1,y1,x2,y2,distance(x1,y1,x2,y2));
	printf("半径%.1f的圆面积为：%.1f\n",r,a);
	return 0;
}
