#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//#include <stdio.h>
#include "zhitouzi.h"
//#include <stdlib.h>//提供库函数rand()的原型					可以不写

int zhitouzicishu = 0;//定义式声明外部链接的静态变量

static int touzishuzi(int mianshu)//单个规定了骰子面数的骰子掷出的数
{
	int touzishuzi;

	touzishuzi = rand() % mianshu + 1;
	zhitouzicishu++;

	return touzishuzi;
}
int touzishuzizongshu(int geshu, int mianshu)//函数名：骰子数字的总数		形参：骰子个数，骰子面数
{
	int i;
	int total = 0;

	if (mianshu < 2)
	{
		puts("至少需要二面的骰子！");
		return -2;
	}
	if (geshu < 1)
	{
		puts("至少需要一个骰子！");
		return -1;
	}
	for (i = 0; i < geshu; i++)
		total += touzishuzi(mianshu);

	return total;
}
#endif