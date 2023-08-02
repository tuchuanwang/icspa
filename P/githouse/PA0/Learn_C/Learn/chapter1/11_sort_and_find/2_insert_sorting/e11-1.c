/*************************************************************************
	> File Name: e11-1.c
	> Author :WangZhen
	> Mail: 1240306894@qq.com
	> Created Time: 2023年07月09日 星期日 16时28分05秒
 ************************************************************************/

#include<stdio.h>
#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7};

void insertion_sort(void)
{
	int i, j, key;
	for (j = 1; j < LEN; j++){
		printf("%d, %d, %d, %d, %d\n",
				a[0], a[1], a[2], a[3], a[4]);
		key = a[j];
		i = j-1;
		while (i >= 0 && a[i] >key) {
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
		printf("%d, %d, %d, %d, %d\n",
				a[0], a[1], a[2], a[3], a[4]);
}

int main(int argc, char *argv[])
{
	insertion_sort();
	return 0;
}
