#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//������֤
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

	printf("�˳�������ض���Χ�ڵ�����������ƽ���͡�\n");
	printf("���������޾�����0�Խ�������");
	printf("���������ޣ�\n");

	start = yanzheng_zhengshu();//��һ��������֤
	printf("���������ޣ�\n");
	end = yanzheng_zhengshu();

	while(start != 0 || end != 0)
	{
		if (yanzheng_limits(start,end,MIN,MAX))//�ڶ���������֤
			printf("���������룡\n");
		else
		{
			answer = qiupinfanghe(start,end);
			printf("%ld��%ld��������ƽ����Ϊ%ld\n",start,end,answer);
		}

		printf("\n\n���������ޣ�\n");
		start = yanzheng_zhengshu();//��һ��������֤
		printf("���������ޣ�\n");
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
		printf("����һ�����������������룡\n");
	}

	return input;
}

int yanzheng_limits(long num1, long num2, long num3, long num4)
{
	int biaoji = 0;

	if (num1 > num2)
	{
		printf("���޴������ޣ�����\n");
		biaoji = 1;
	}
	if (num1<num3 || num2<num3)
	{
		printf("ֵС��MIN������\n");
		biaoji = 1;
	}
	if (num1 > num4 || num2 > num4)
	{
		printf("ֵ����MAX������\n");
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
//ʵ��ֻ����ȷ����Ӧ����switch����
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
	printf("���������ѡ��\n");
	printf("a	b	\n");
	printf("c	q\n");
	printf("******************\n");
	/*ch = getchar();                                 //��һ
	while (getchar() != '\n')
				continue;*/
	ch = get_first();

	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("�������������룡\n");
		/*ch = getchar();
		while (getchar() != '\n')
			continue;*/
		ch = get_first();
	}

	return ch;
}

char get_first(void)//���������ö���һ����ĸ���ܵĺ�����
{
	char ch1;
	ch1 = getchar();
	while (getchar() != '\n')
		continue;

	return ch1;
}
#endif