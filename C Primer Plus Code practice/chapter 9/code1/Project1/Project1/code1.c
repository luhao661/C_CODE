#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建并使用简单函数
#if 0
#define WIDTH 40
void starbar(void);
int main(void)
{
	starbar();
	printf("123\n");
	printf("1234\n");
	starbar();

	return 0;
}
void starbar(void)
{
	int i;
	for (i = 1; i <= WIDTH; i++)
		printf("*");
	putchar('\n');
}
#endif


//使打印的文字居中。
#if 0
#define WIDTH 40
#define NAME "GIGATHINK, INC."
#define ADDRESS "Hangzhou, Xiaoshan"
#define PLACE "Beiganjiedao"
#define SPACE ' '                             //注意不能写成" "
#include<string.h>

void showzifu(char ch, int num);//可打印*号，也可打印空格的函数。
int main(void)
{
	showzifu('*',WIDTH);
//	putchar("\n");    错误
	putchar('\n');


	showzifu(SPACE,12);
	printf("%s",NAME);
	putchar('\n');

	int konggeshuliang = (WIDTH - strlen(ADDRESS)) / 2;
	showzifu (SPACE, konggeshuliang);//实际参数可以是常量、变量、表达式
	printf("%s",ADDRESS);
	putchar('\n');

	konggeshuliang = (WIDTH - strlen(PLACE)) / 2;
	showzifu(SPACE, konggeshuliang);
	printf("%s",PLACE);
	putchar('\n');

	showzifu('*', WIDTH);
	putchar('\n');

	return 0;
}
void showzifu(char ch, int num)
{
	int i;
	for (i = 1; i <= num; i++)
		printf("%c",ch);
	
}
#endif


//找出两个整数中较小的一个
#if 0
int bijiaodaxiao(int num5, int num6);//num5, num6 是假名，不必与函数定义的形参名一致！
int main(void)
{
	int num1, num2;

	begin:	printf("请输入两个整数：\n");
	while(scanf("%d%d", &num1, &num2) != 2)  //错误写法：scanf(" % d % d", &num1, &num2) 
	{
	while (getchar() != '\n')
		continue;
	printf("请输入有误，请重新输入！");
	}
	
	printf("%d,%d",num1,num2);
	printf("较小值是%d\n",bijiaodaxiao(num1,num2));
	goto begin;

	return 0;
}
int bijiaodaxiao(int num1, int num2)
{
	if (num1 > num2)
		num1 = num2;
	
	return num1;
}
#endif


//递归演示
#if 0
void up_and_down(int);
int main(void)
{
	up_and_down(1);

	return 0;
}
void up_and_down(int n)
{
	printf("Level %d: n location %p\n",n,&n);
	if (n < 4)
		up_and_down(n + 1);
	printf("LEVEL %d: n location %p\n", n, &n);

}
#endif


//使用循环和递归计算阶乘
#if 0
int xunhuan(int);
int digui(int);

int main(void)
{
	int num;
	printf("请输入一个整数，范围在0~12:\n(按q以退出)");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("输入错误！\n");
		else if (num > 12)
			printf("输入超过最大范围！\n");
		else
		{
			printf("%d的阶乘是%d\n",num,xunhuan(num));
			printf("%d的阶乘是%d\n", num, digui(num));
		}
	}

	return 0;
}
int xunhuan(int num)
{
	int i;
	for (i = 1;num>1;num--)
		i *=num;

	return i;
}
int digui(int num)
{
	int i;

	if (num > 0)
		i = num * digui(num - 1);
	else
		i = 1;

	return i;
}
#endif


//用递归，显示十进制对应的二进制数
#if 1
void huaweierjinzhi(int);

int main(void)
{
	unsigned long num;

	printf("请输入一个整数（按q以退出）：\n");

	while (scanf("%d", &num) == 1)
	{
		printf("转化为二进制是：");
		huaweierjinzhi(num);
		printf("\n请输入下一个整数：\n");
	}

	return 0;
}
void huaweierjinzhi(int num)
{
	int yushupanduan;//余数判断

	yushupanduan = num % 2;
	if (num >= 2)
		huaweierjinzhi(num/2);

	//putchar(yushupanduan ? '0' : '1');
	printf("%d", yushupanduan);//法二

	return;

}
#endif


//用递归显示斐波那契数列的项
#if 0
unsigned long fibonacci(unsigned);
int main(void)
{
	int num;

	printf("此程序将展示斐波那契数列的第n项的值\n");
	printf("请输入一个整数：\n");

	while (scanf("%d",&num) == 1)
	{
		printf("斐波那契数列的第%d项值为%d",num,fibonacci(num));

		printf("\n请继续输入：\n");
	}
	
	return 0;
}
unsigned long fibonacci(unsigned num)
{
	if (num > 2)
		return fibonacci(num - 1) + fibonacci(num - 2);
	else
		return 1;
}
#endif
