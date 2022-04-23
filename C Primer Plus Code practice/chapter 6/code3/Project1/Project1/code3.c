#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算数的整数次幂，并返回计算结果（使用函数返回值的循环）
//double power(double n, int p);
//int main(void)
//{
//	double x;
//	int exp;
//	
//	printf("请输入一个数字和该数字的整数次幂数：\n");
//	printf("（输入q以退出程序）                 ");
//	while (scanf("%lf%d", &x,& exp) == 2)
//	{
//		printf("%f的%d次方是%f",x,exp, power(x, exp));
//		printf("输入下一对数字：");
//	}
//	printf("Done!");
//
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}


//复习题6.
#define ROWS 4
#define COLUMNS 8
int main(void)
{
	int i,j;
	for (i = 1; i <= ROWS; i++)
	{
		for (j = 1; j <= COLUMNS; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}