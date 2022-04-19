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
//		printf("%c",'\c');//不行，c不会递增
//	return 0;
//}


//编程练习
//1.
//#define HOUR 60
//int main(void)
//{
//	int min1, min2, xiaoshi;
//	printf("这个程序能把分钟转化成小时与分钟的形式\n");
//	printf("请输入分钟值：");
//	scanf("%d",&min1);
//	while (min1 > 0)
//	{
//		xiaoshi = min1 / HOUR;
//		min2 = min1 % HOUR;
//		printf("%d分钟相当于%d小时%d分钟\n",min1,xiaoshi,min2);
//		printf("请输入下一个分钟值：");
//		scanf("%d",&min1);
//	}
//	printf("你的输入无效！\n");
//	return 0;
//}


//2.
//int main(void)
//{
//	int n = 0;
//	int a;
//	printf("请输入一个整数：");
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
//	printf("请输入天数：____\b\b\b\b");
//	scanf("%d",&day);
//	while (day > 0)
//	{
//		week = day / 7;
//		day1 = day % 7;
//		printf("%d days are %d weeks, %d days.\n",day,week,day1);
//		printf("输入下一个天数：");
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
//	printf("请输入身高（单位：厘米）：___\b\b\b");
//	scanf("%f",&cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;
//		yushu = (int)cm % (int)FEET_TO_CM;//182%30等于6余2，而实际应为182/30.48，无法得余数。
//		inch = yushu / INCH_TO_CM;
//
//		printf("%.1f cm = %d feet, %.1f inches.\n",cm,(int)feet,inch);
//		printf("下一个数字是？（输入一个小于或等于0的数即可退出程序）");
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
//	printf("输入天数：____\b\b\b\b");
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
//	printf("输入天数：____\b\b\b\b");
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
//	printf("请输入一个double类型的数：_____\b\b\b\b\b");
//	scanf("%lf",&dou);
//	n = dou;
//	printf("立方值是：%lf",dou*dou*dou);
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
	printf("请输入一个华氏温度：");
	scanf("%lf",&huashi);
	
	       while (scanf("%lf", &huashi) == 1)
			{
			Temperatures(huashi);
			printf("华氏温度：%.2lf\n",huashi);
			printf("摄氏温度：%.2lf\n", sheshi);
			printf("开氏温度：%.2lf\n", kaishi);
			printf("输入下一个华氏温度值：（按q键退出）");
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