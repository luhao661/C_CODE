#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//复习题
//6
#if 0
int main(void)
{
	int grid[30][100];
	int a[100] = { [5] = 101,[20] = 101,101,101,101 };

	printf("%p\n%p\n%p\n",&grid[22][0],grid[22],&grid[22]);

	return 0;
}
#endif


//13.
#if 0
void show(const double ar[], int n);
int main(void)
{
	double* p;

	p=(double[4]) {8,3,9,2};
	show(p,4);

	return 0;
}
void show(const double ar[], int n)
{
	double sum=0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += *(ar+i);
	}
		printf("和为%.2f\n",sum);
}
#endif
#if 1
void show2(const double ar2[][3], int n);
int main(void)
{
	double (*p)[3];

	p = (double[2][3]){ {8,3,9},{5,4,1} };
	show2(p,2 );

	return 0;
}
void show2(const double ar2[][3], int n)
{
	int i, j;
	double sum = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			//sum += ar2[i][j];
			sum += *(*(ar2 + i) + j);
	}
	printf("和为%.2f",sum);
}
#endif