#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>
#include "pe12-2a.h"
static int mode;
static double distance;
static double consume;

void set_mode(int a)
{
	char xianshi1[7]= "US";
	char xianshi2[7] = "metric";

	if(a==0||a==1)
	mode = a;
	else
	{
		if (mode == 0)
			printf("Invalid mode specified. Mode %d(%s) used.\n", mode, xianshi2);
		if (mode == 1)
			printf("Invalid mode specified. Mode %d(%s) used.\n", mode, xianshi1);
	}
}
void get_info(void)
{
	if (mode == 0)
	{
		printf("Enter distance traveled in kilometers :");
		scanf("%lf",&distance);
		printf("Enter fuel consumed in liters :");
		scanf("%lf", &consume);
	}
	if (mode == 1)
	{
		printf("Enter distance traveled in miles :");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons :");
		scanf("%lf", &consume);
	}
}
void show_info(void)
{
	if (mode == 0)//升/100公里
	{
		printf("Fuel consumption is %.2lf liters per 100 km.\n", consume / distance*100);
	}
	if (mode == 1)//英里/加仑
	{
		printf("Fuel consumption is %.2lf miles per gallon.\n", distance / consume);
	}
}
#endif
