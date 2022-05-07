#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//输入验证
long yanzheng_zhengshu(void);
int yanzheng_limits(long num1,long num2,long num3,long num4);
long qiupinfanghe(long start,long end);

int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	long start;
	long end;
	long answer;

	printf("此程序计算特定范围内的所有整数的平方和。\n");
	printf("（在上下限均输入0以结束程序）");
	printf("请输入下限：\n");

	start = yanzheng_zhengshu();//第一次输入验证
	printf("请输入上限：\n");
	end = yanzheng_zhengshu();

	while(start != 0 || end != 0)
	{
		if (yanzheng_limits(start,end,MIN,MAX))//第二次输入验证
			printf("请重新输入！\n");
		else
		{
			answer = qiupinfanghe(start,end);
			printf("%ld到%ld的整数的平方和为%ld\n",start,end,answer);
		}

		printf("\n\n请输入下限：\n");
		start = yanzheng_zhengshu();//第一次输入验证
		printf("请输入上限：\n");
		end = yanzheng_zhengshu();
	}

	return 0;
}

long yanzheng_zhengshu(void)
{
	long input;
	char ch;

	while (scanf("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("不是一个整数，请重新输入！\n");
	}

	return input;
}

int yanzheng_limits(long num1, long num2, long num3, long num4)
{
	int biaoji = 0;

	if (num1 > num2)
	{
		printf("下限大于上限，有误！\n");
		biaoji = 1;
	}
	if (num1<num3 || num2<num3)
	{
		printf("值小于MIN，有误！\n");
		biaoji = 1;
	}
	if (num1 > num4 || num2 > num4)
	{
		printf("值大于MAX，有误！\n");
		biaoji = 1;
	}
	return biaoji;
}

long qiupinfanghe(long start, long end)
{
	long i;
	long sum=0;

	for (i = start; i <= end; i++)
		sum += i * i;

	return sum;
}
#endif


#if 1
//实现只把正确的响应传入switch函数
char shuruyanzheng(void);
char get_first(void);

int main(void)
{
	int choice;

	while ((choice = shuruyanzheng()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			printf("a");
			break;
		case 'b':
			printf("b");
			break;
		case 'c':
			printf("c");
			break;
		default:
			printf("error !\n");
		}
	}

	return 0;
}

char shuruyanzheng(void)
{
	int ch;
	printf("\n******************\n");
	printf("请输入你的选择：\n");
	printf("a	b	\n");
	printf("c	q\n");
	printf("******************\n");
	/*ch = getchar();                                 //法一
	while (getchar() != '\n')
				continue;*/
	ch = get_first();

	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("错误，请重新输入！\n");
		/*ch = getchar();
		while (getchar() != '\n')
			continue;*/
		ch = get_first();
	}

	return ch;
}

char get_first(void)//法二：调用读第一个字母功能的函数。
{
	char ch1;
	ch1 = getchar();
	while (getchar() != '\n')
		continue;

	return ch1;
}
#endif