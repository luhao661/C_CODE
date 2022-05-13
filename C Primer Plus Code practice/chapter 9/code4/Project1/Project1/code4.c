#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0

#endif


//复习题
//4.
#if 0
int sum(void);
int main(void)
{
		printf("该程序输出两个整数之和\n");
	while (sum())
	{
		;
	}
	return 0;
}
int sum(void)
{
	int a, b;
	printf("请输入两个整数：\n");
	while ((scanf("%d%d", &a, &b)) != 2)
	{
		scanf("%*s");
		printf("请重新输入！\n");
	}
	printf("%d+%d=%d\n\n", a, b, a + b);
	
		return (a+b);//输入两个0则退出程序
}
#endif


//3.
#if 0
double sum(void);
int main(void)
{
	printf("该程序输出两个小数之和\n");
	while (sum())
	{
		;
	}
	return 0;
}

double sum(void)
{
	double a, b;
	printf("请输入两个小数：\n");
	while ((scanf("%lf%lf", &a, &b)) != 2)
	{
		scanf("%*s");
		printf("请重新输入！\n");
	}
	printf("%lf+%lf=%.3lf\n\n", a, b, a + b);

		return (a+b);//输入两个0则退出程序
}
#endif


//6.
#if 0
void alter(int*, int*);
int main(void)
{
	int x,y;
	printf("请输入两个整数：\n");
	scanf("%d%d",&x,&y);
	printf("您输入的是：x=%d和y=%d\n",x,y);
	alter(&x,&y);
	printf("现在x=%d，y=%d\n", x, y);

	return 0;
}
void alter(int*x, int*y)
{
	int temp1, temp2;
	temp1 = *x;
	temp2 = *y;
	*x = *x + *y;
	*y = temp1 - temp2;
}
#endif


//8.
#if 0
int bijiao(int, int, int);
int main(void)
{
	int a, b, c;
	printf("比较3个整数中的最大值：\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("最大值是：%d\n\n", bijiao(a, b, c));

	return 0;
}
int bijiao(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else if (c >= a && c >= b)
		return c;
	else
		return -6666;//表示出错
}
#endif


//9.
#if 1
#define MIN 1
#define MAX 4
void showmenu(void);
int get_choice(int a, int b);
int main(void)
{
	showmenu();

	while (get_choice(MIN, MAX) !=4)
	{
		printf("正在执行程序\n");
		printf("执行完毕！\n");
		showmenu();
	}
	printf("再见！\n");

	return 0;
}
void showmenu(void)
{
	printf("Please choose one of the following :\n");
	printf("1)copy files		2)move files\n");
	printf("3)remove files		4)quit\n");
	printf("Enter the number of your choice:");
}
int get_choice(int a, int b)
{
	int choice;
	int biaoji;
	while ((biaoji=scanf("%d", &choice)) && (choice<a || choice>b))//输入的数字不在范围内时执行，若输入字母则执行return 4
	{
		while (getchar(choice) != '\n')
			continue;
		//scanf("%*s");    //若输入5，则还要输入一个数字才执行后面语句。此语句不能满足要求。
		showmenu();
		printf("\n请重新输入！_______\b\b\b\b");
	}

	if (biaoji)
		return choice;
	else
		return 4;
}
#endif