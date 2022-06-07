#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//外层块中的变量与内层块中的变量同名的情况
#if 0
int main(void)
{
	int x = 30;
	printf("x在外层块：值为%d地址为%p\n",x,&x);
	
	{
		int x = 77;
		printf("x在内层块：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	while (x++ < 33)//外层块的x为30时进入，x变为31，。。。。。。x为33时判断为假不进入，x变为34。
	{
		int x = 100;
		x++;
		printf("x在while循环中：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	return 0;
}
#endif


//新的C99块规则
#if 0
int main(void)
{
	int n = 8;
	printf("最初：n=%d，地址：p=%p\n",n,&n);

	for (int n = 1; n < 3; n++)
		printf("第一个for循环：索引n=%d，地址：p=%p\n",n,&n);

	printf("第一个for循环结束后：n=%d，地址：p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("第二个for循环：索引n=%d，地址：p=%p\n", n, &n);
		int n = 6;
		printf("第二个for循环：新变量n=%d，地址：p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("第二个for循环结束后：n=%d，地址：p=%p\n", n, &n);


	return 0;
}
#endif


//使用局部静态变量（块作用域的静态变量）（块作用域无链接静态存储期）
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("迭代次数%d:\n",count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay ;//若未初始化静态变量则默认值为0
	printf("fade=%d     stay=%d\n",fade++,stay++);
}
#endif


//使用外部变量（外部链接的静态变量）
#if 1
int shuzi;
void ceshi(void);
int main(void)
{
	puts("请输入数字:");
	scanf("%d",&shuzi);

	while (shuzi != 66)
	{		
		ceshi();
	}
	puts("答对了！");

	return 0;
}
void ceshi(void)
{
	printf("输入的数字不对，请重新输入！\n");
	scanf("%d", &shuzi);
}
#endif

