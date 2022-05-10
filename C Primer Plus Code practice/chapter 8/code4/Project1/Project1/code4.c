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
			printf("����Ƿ������������룡\n");
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

		printf("��������һ�ܹ�����Сʱ����\n");
		scanf("%f", &hours);                                      //ע�⣺scanf()��ȡ����ʱ������'\n'������'\n'���ڻ�����

		if (hours >= 40)//�Ƿ��мӰ�ʱ��
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("�����ܶ%.2f		˰��%.2f		�����룺%.2f\n", zonge, shui, jinshouru);

		printf("��������\n");
		showmenu();

	}

tuichu:printf("�ټ���\n");
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
			//putchar("������������������!\n"); ��������д
			printf("������������������!\n");
			continue;
		}

		//putchar("Enter first number:");
		printf("Enter first number:");

		float first_number;
		int a;
		while (1)
		{			
			a = scanf("%f", &first_number);
			//if (first_number_input_yanzheng(  scanf("%f", &first_number)  )      ����д������
			if (first_number_input_yanzheng(a))
			{
				while (getchar() != '\n')//����scanf�Ĵ������룬scanf����\n�������뻺����
				//putchar(first_number);   putchar�����������������
					continue;

				printf("������������������!\n");
				printf("�����������˵2.5, -1.7E8 ��:");
				continue;
			}
			else
				break;
		}
		//������
		//while (scanf("%f", &first_number) != 1)
		//{
		//	while ((a = getchar()) != '\n')
		//		continue;
		//	printf("������������������!\n");
		//	printf("�����������˵2.5, -1.7E8 ��:");
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

				printf("������������������!\n");
				continue;
			}
			else if (ch == 'd' && second_number == 0)
			{
				printf("�����������㣬������һ������ֵ��\n");
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

	if (b == 0)//��sanf()��û�м�⵽��
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
