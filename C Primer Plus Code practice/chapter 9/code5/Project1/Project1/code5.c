#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0

#endif


//编程练习
//1.
#if 0
double min(double x, double y);
int main(void)
{
	double a, b;
	printf("此程序比较两个浮点值的较小值\n");
	printf("请输入两个浮点值：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf",&a,&b);
	printf("较小值是：%.3lf",min(a,b));

	return 0;
}
double min(double x, double y)
{
	if (x >= y)
		x = y;

		return x;
}
#endif


//2.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("此程序打印指定字符的列数与行数\n");
	printf("请输入要打印的字符：_________\b\b\b\b\b\b\b\b");
	scanf("%c",&ch);
	printf("请输入要打印的列数与行数：_________\b\b\b\b\b\b\b\b");
	scanf("%d%d",&i,&j);
	chline(ch,i,j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//3.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("此程序打印指定字符的列数与行数\n");
	printf("请输入要打印的字符：_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("请输入要打印的列数与行数：_________\b\b\b\b\b\b\b\b");
	scanf("%d%d", &i, &j);//i列   j行
	chline(ch, i, j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//4.
#if 0
double tiaohepinjunshu(double x, double y);
int main(void)
{
	double a, b;
	printf("此程序打印两个数的调和平均数\n");
	printf("请输入两个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf",&a,&b);
	printf(	"调和平均数是%.3lf\n",tiaohepinjunshu(a, b));

	return 0;
}
double tiaohepinjunshu(double x, double y)
{
	double jieguo1,jieguo2;
	double daoshu_x = 1 / x, daoshu_y = 1 / y;

	jieguo1 = (daoshu_x + daoshu_y) / 2;
	jieguo2 = 1 / jieguo1;

	return jieguo2;
}
#endif


//5.
#if 0
void larger_of(double *x, double *y);
int main(void)
{
	double a, b;
	printf("此程序把两个数的较大者赋值给两个数\n");
	printf("请输入两个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	larger_of(&a,&b);
	printf("现在，两个数为%.3lf和%.3f%\n",a,b);

	return 0;
}
void larger_of(double *x, double *y)
{
	if (*x >= *y)
		*y = *x;
	else
		*x = *y;

	return;
}
#endif


//6.
#if 0
void paidaxiao(double *x, double *y, double *z);//排大小
int main(void)
{
	double a, b,c;
	printf("此程序把三个数按照由小到大排序\n");
	printf("请输入三个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf%lf", &a, &b,&c);
	paidaxiao(&a,&b,&c);
	printf("现在，三个数字是%.3lf，%.3f，%.3f\n", a, b,c);

	return 0;
}
void paidaxiao(double* x, double* y, double* z)
{
	double min, middle, max;
	if (*x <= *y && *x <= *z)
		min = *x;
	else if (*y <= *x && *y <= *z)
		min = *y;
	else if (*z <= *x && *z <= *y)
		min = *z;

	if (*x >= *y && *x >= *z)
		max = *x;
	else if (*y >= *x && *y >= *z)
		max = *y;
	else if (*z >= *x && *z >= *y)
		max = *z;

	if (min < *x && *x < max)// (min <= *x && *x <= max)不行，如果输入是 1 2 3，则输出是 1 1 3
		middle = *x;
	else if (min < *y && *y < max)
		middle = *y;
	else if (min < *z && *z < max)
		middle = *z;


	*x = min;
	*y = middle;//瑕疵：当输入有两个值是相等的时，程序会崩溃
	*z = max;
}
#endif


//7.
#if 1
int panduanzimu(int ch);//判断字母
int main(void)
{
	int ch;
	printf("此程序能报告输入的每个字符是否是字母\n");
	printf("请输入字符：\n");
	while ((ch = getchar())!=EOF)//ch=getchar()外的小括号要加
	{
		if (panduanzimu(ch) == -1)//输入非字母时
			printf("否");

		else if (panduanzimu(ch) == -2)//输入回车时
		{
			printf("否(键入了\\n)");
			printf("\n请继续输入字符：\n");
		}

		else
			printf("%-3d",panduanzimu(ch));

	}

	return 0;
}
int panduanzimu(int ch)
{
	int weizhi;

	if (ch >= 65 && ch <= 90)
	{
		weizhi = ch - 64;
	}
	else if (ch >= 'a' && ch <= 'z')
		weizhi = ch - 96;
	else if (ch =='\n')
		weizhi = -2;
	else
		weizhi = -1;

	return weizhi;
}
#endif