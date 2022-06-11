#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include  "pe12-3a.h"//必须包含头文件，否则编译会报错：某函数重定义。
int set_mode(int a)
{
	int mode;

	if (a == 0 || a == 1)
		mode = a;
	
	return mode;
}
void get_info(int b)
{
	double distance, consume;

	if (b == 0)
	{
		printf("Enter distance traveled in kilometers :");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters :");
		scanf("%lf", &consume);
	}
	if (b == 1)
	{
		printf("Enter distance traveled in miles :");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons :");
		scanf("%lf", &consume);
	}
	show_info(b,distance,consume);//注：此处distance,consume变量对show_info()不可见，但把值赋给了show_info()的两个形参。
}
void show_info(int mode, double distance,double consume)
{
	if (mode == 0)//升/100公里
	{
		printf("Fuel consumption is %.2lf liters per 100 km.\n", consume / distance * 100);
	}
	if (mode == 1)//英里/加仑
	{
		printf("Fuel consumption is %.2lf miles per gallon.\n", distance / consume);
	}
}
#endif