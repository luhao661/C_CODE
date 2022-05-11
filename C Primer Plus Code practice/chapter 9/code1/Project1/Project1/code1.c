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
#if 1
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
