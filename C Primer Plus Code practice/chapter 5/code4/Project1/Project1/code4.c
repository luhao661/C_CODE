#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(void)
//{
//	int x;
//	x = (2 + 3) * 10.5;
//	printf("%d",x);
//
//	return 0;
//}


//6.
//#define FORMAT "%s C is cool!\n"
//int main(void)
//{
//	printf(FORMAT,FORMAT);
//	printf("%s C is cool!\n","%s C is cool!\n");
//	return 0;
//}


//9.
//int main(void)
//{
//	/*int n = 96;
//	while (n++ < 103)
//		printf("%c",n);*/
//	int c = 141;
//	while (c++ < 147)
//		printf("%c",'\c');//���У�c�������
//	return 0;
//}


//�����ϰ
//1.
//#define HOUR 60
//int main(void)
//{
//	int min1, min2, xiaoshi;
//	printf("��������ܰѷ���ת����Сʱ����ӵ���ʽ\n");
//	printf("���������ֵ��");
//	scanf("%d",&min1);
//	while (min1 > 0)
//	{
//		xiaoshi = min1 / HOUR;
//		min2 = min1 % HOUR;
//		printf("%d�����൱��%dСʱ%d����\n",min1,xiaoshi,min2);
//		printf("��������һ������ֵ��");
//		scanf("%d",&min1);
//	}
//	printf("���������Ч��\n");
//	return 0;
//}


//2.
//int main(void)
//{
//	int n = 0;
//	int a;
//	printf("������һ��������");
//	scanf("%d",&a);
//	while (n++ <11)
//	{
//		printf("%d\t",a);
//		a++;
//	}
//
//	return 0;
//}


//3.
//int main(void)
//{
//	int day, week, day1;
//	printf("������������____\b\b\b\b");
//	scanf("%d",&day);
//	while (day > 0)
//	{
//		week = day / 7;
//		day1 = day % 7;
//		printf("%d days are %d weeks, %d days.\n",day,week,day1);
//		printf("������һ��������");
//		scanf("%d",&day);
//	}
//	printf("Done!\n");
//	return 0;
//}


//4.
//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main(void)
//{
//	float cm, feet, inch;
//	int yushu;
//	printf("��������ߣ���λ�����ף���___\b\b\b");
//	scanf("%f",&cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;
//		yushu = (int)cm % (int)FEET_TO_CM;//182%30����6��2����ʵ��ӦΪ182/30.48���޷���������
//		inch = yushu / INCH_TO_CM;
//
//		printf("%.1f cm = %d feet, %.1f inches.\n",cm,(int)feet,inch);
//		printf("��һ�������ǣ�������һ��С�ڻ����0���������˳�����");
//		scanf("%f",&cm);
//	}
//	printf("Done!");
//
//	return 0;
//}


//5.
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	int day;
//	printf("����������____\b\b\b\b");
//	scanf("%d",&day);
//	while (count++ < day)
//	{
//		sum = sum + count;
//		printf("sum= %d \n",sum);
//	}
//	return 0;
//}


//6.
//int main(void)
//{
//	int count,sum;
//	count = sum = 0;
//	int count1=1;
//	int day;
//
//	printf("����������____\b\b\b\b");
//	scanf("%d",&day);
//	
//	while (count++ < day)
//	{
//		sum = sum + count1*count1;
//		printf("count = %-10d   sum = %-10d    \n",count1*count1, sum);
//		count1++;
//	}
//	return 0;
//}


//7.
//int main(double n)
//{
//	double dou;
//	printf("������һ��double���͵�����_____\b\b\b\b\b");
//	scanf("%lf",&dou);
//	n = dou;
//	printf("����ֵ�ǣ�%lf",dou*dou*dou);
//
//	return 0;
//}


//8.
//int main(void)
//{
//	int a, b;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand:");
//	scanf("%d",&b);
//	printf("Now enter the first operand:");
//	scanf("%d",&a);
//	while (a > 0 && b > 0)
//	{
//		printf("%d %% %d is %d\n",a,b,a%b);
//		printf("Enter next number for first operand ( <= 0 to quit ) :");
//		scanf("%d",&a);
//	}
//	printf("Done!\n");
//
//	return 0;
//}


//9.
void Temperatures(double t);
int main(void)
{
	double huashi, sheshi, kaishi;
	sheshi = kaishi = 1;
	printf("������һ�������¶ȣ�");
	scanf("%lf",&huashi);
	
	       while (scanf("%lf", &huashi) == 1)
			{
			Temperatures(huashi);
			printf("�����¶ȣ�%.2lf\n",huashi);
			printf("�����¶ȣ�%.2lf\n", sheshi);
			printf("�����¶ȣ�%.2lf\n", kaishi);
			printf("������һ�������¶�ֵ������q���˳���");
			scanf("%lf",&huashi);
			}
	printf("Done!\n");
	return 0;
}
void Temperatures(double t)
{
	const double sheshi = 5.0 / 9.0 * (t - 32.0);
	const double kaishi = sheshi + 237.16;
}