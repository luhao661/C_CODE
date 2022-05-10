#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//7.
#if 0
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
void showmenu(void);
int get_first(void);
int yanzhengshuru(int a);

int main(void)
{
	float hours;
	float zonge;
	float shui;
	float jinshouru;
	int ch;
	float meixiaoshi;

	showmenu(0);
	while ((ch=get_first())!='q')
	{
		if (yanzhengshuru(ch))
		{
			printf("输入非法！请重新输入！\n");
			continue;
		}
		switch (ch)
		{
		case 'a':
			meixiaoshi = 8.75;
			break;
		case 'b':
			meixiaoshi = 9.33;
			break;
		case 'c':
			meixiaoshi = 10.0;
			break;
		case 'd':
			meixiaoshi = 11.20;
			break;
		default:
			goto tuichu;
		}

		printf("请输入您一周工作的小时数：\n");
		scanf("%f", &hours);                                      //注意：scanf()读取数字时，忽略'\n'，但有'\n'留在缓冲区

		if (hours >= 40)//是否有加班时间
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n", zonge, shui, jinshouru);

		printf("继续——\n");
		showmenu();

	}

tuichu:printf("再见！\n");
	return 0;
}

void showmenu(void)
{
	printf("********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr				b)$9.33/hr\n");
	printf("c) $10.00/hr				d)$11.20/hr\n");
	printf("q) quit\n");
	printf("********************************************************************\n");

}
int get_first(void)
{
	int ch;
	while ((ch = getchar()) == '\n' || ch == '\t' || ch == ' ')
		continue;
	while (getchar() != '\n')
		continue;

	return ch;
}
int yanzhengshuru(int a)
{
	int biaoji = 0;
	if (a < 'a' || a > 'd')
		biaoji = 1;

	return biaoji;
}
#endif


//8.
#if 1
int showmenu(void);
int get_first(void);
int xuanzegongnengyanzheng(int a);
int first_number_input_yanzheng(int b );
int second_number_input_yanzheng(int c);

int main(void)
{
	showmenu();
	int ch;
	while ((ch = get_first()) != 'q')
	{
		if (xuanzegongnengyanzheng(ch))
		{
			//putchar("输入有误，请重新输入!\n"); 不能这样写
			printf("输入有误，请重新输入!\n");
			continue;
		}

		//putchar("Enter first number:");
		printf("Enter first number:");

		float first_number;
		int a;
		while (1)
		{			
			a = scanf("%f", &first_number);
			//if (first_number_input_yanzheng(  scanf("%f", &first_number)  )      这样写不可以
			if (first_number_input_yanzheng(a))
			{
				while (getchar() != '\n')//处理scanf的错误输入，scanf会有\n留在输入缓冲区
				//putchar(first_number);   putchar不能输出浮点型数据
					continue;

				printf("输入有误，请重新输入!\n");
				printf("可以输入比如说2.5, -1.7E8 等:");
				continue;
			}
			else
				break;
		}
		//法二：
		//while (scanf("%f", &first_number) != 1)
		//{
		//	while ((a = getchar()) != '\n')
		//		continue;
		//	printf("输入有误，请重新输入!\n");
		//	printf("可以输入比如说2.5, -1.7E8 等:");
		//}

		printf("Enter second number:");

		float second_number;
		int b;
		while (1)
		{
			b = scanf("%f", &second_number);			
			if (second_number_input_yanzheng(b))
			{
				while (getchar() != '\n')
					continue;

				printf("输入有误，请重新输入!\n");
				continue;
			}
			else if (ch == 'd' && second_number == 0)
			{
				printf("除数不能是零，请输入一个非零值！\n");
				continue;
			}

			else
			break;
		}


		switch (ch)
		{
		case 'a':
			printf("%.2f+%.2f=%.2f\n",first_number,second_number,first_number+second_number);
			break;
		case 's':
			printf("%.2f-%.2f=%.2f\n", first_number, second_number, first_number - second_number);
			break;
		case 'm':
			printf("%.2f*%.2f=%.2f\n", first_number, second_number, first_number * second_number);
			break;
		case 'd':
			printf("%.2f/%.2f=%.2f\n", first_number, second_number, first_number / second_number);
			break;
		}
	showmenu();
	}

	printf("Bye.\n");

	return 0;
}

int showmenu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add		s. subtract\n");
	printf("m. multiply	d. divide\n");
	printf("q. quit\n");
}
int get_first(void)
{
	int ch;
	while ((ch = getchar()) == '\n' || ch == '\t' || ch == ' ')
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}
int xuanzegongnengyanzheng(int a)
{
	int biaoji = 0;

	if (a > 'd' || a < 'a')
		biaoji = 1;

	return biaoji;
}
int first_number_input_yanzheng (int b)
{
	int biaoji = 0;

	if (b == 0)//当sanf()，没有检测到项
		biaoji = 1;

	return biaoji;
}
int second_number_input_yanzheng(int c)
{
	int biaoji = 0;

	if (c == 0)
		biaoji = 1;

	return biaoji;
}
#endif
