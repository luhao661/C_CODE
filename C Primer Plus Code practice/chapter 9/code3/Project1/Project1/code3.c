#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//查看变量被存储在何处
#if 0
void beidiaohanshu(void);
int main(void)
{
	int a, b;
	a = 1, b = 2;

	printf("在main函数中，a地址为%p，b地址为%p\n",&a,&b);
	beidiaohanshu();

	return 0;
}
void beidiaohanshu(void)
{
	int a, b;
	a = 1, b = 2;

	printf("在被调函数中，a地址为%p，b地址为%p\n", &a, &b);
}

#endif


//使用return只能传递一个变量的值，无法做到两个变量的值交换。
//使用指针解决交换两个变量的值的问题
#if 1
void jiaohuan(int *, int *);  //若写成void jiaohuan(int, int);    则被调函数功能无效！
int main(void)
{
	int x = 5, y = 10;
	printf("原来：x=%d，y=%d\n",x,y);
	jiaohuan(&x,&y);
	printf("现在：x=%d，y=%d\n",x,y);

	return 0;
}
void jiaohuan(int * x, int * y)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}
#endif
