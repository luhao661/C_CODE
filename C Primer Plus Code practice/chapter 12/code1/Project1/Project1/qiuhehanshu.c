#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 0
extern int count;//引用式声明
static int total = 0;//定义式声明：文件作用域内部链接静态存储期-->内部链接的静态变量

//void qiuhe(int k);//再次声明（也可以不写，因为code1.c处已经声明过了）

void qiuhe(int k)
{
	static int subtotal = 0;//块作用域无链接静态存储期-->块作用域的静态变量
	if (k <= 0)
	{
		printf("执行程序%d次\n",count);
		printf("subtotal=%d  total=%d\n",subtotal,total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}
#endif