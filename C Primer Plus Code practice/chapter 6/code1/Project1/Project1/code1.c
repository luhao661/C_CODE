#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数字求和
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("请输入一个整数：");
//	status = scanf("%ld",&num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("继续输入下一个整数（输入q来退出程序）：");
//		status = scanf("%ld", &num);
//	}
//	printf("这些整数的和为%ld",sum);
//	return 0;
//}


//注意while()分号的位置
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d",n);
//
//	return 0;
//}


//浮点数比较
//#include <math.h>
//int main(void)
//{
//	const double PI = 3.1415927;
//	double response;
//
//	printf("What is the value of pi ?\n");
//	scanf("%lf",&response);
//
//	while (fabs(response - PI) > 0.0001)
//	{
//		printf("Try it again !\n");
//		scanf("%lf",&response);
//	}
//	printf("Close enough !\n");
//
//	return 0;
//}


//哪些值为真
//int main(void)
//{
//	int n = 3;
//
//	while (n)
//	{
//		printf("%2d is ture\n", n--);
//	}
//	printf("%2d is false\n",n);
//
//	n = -3;
//	while (n)
//	{
//		printf("%2d is true\n",n++);
//	}
//	printf("%2d is false\n",n);
//
//	return 0;
//}


//误用=，会导致无限循环
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("请输入一个整数：");
//	status = scanf("%ld",&num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("继续输入下一个整数（输入q来退出程序）：");
//		status = scanf("%ld", &num);
//	}
//	printf("这些整数的和为%ld",sum);
//	return 0;
//}


//使用_Bool
int main(void)
{
	long num;
	long sum=0L;
	_Bool input;

	printf("请输入一个整数：");
	input = scanf("%ld",&num);
	while (input)
	{
		sum = sum + num;
		printf("继续输入下一个整数（输入q来退出程序）：");
		input = scanf("%ld", &num);
	}
	printf("这些整数的和为%ld",sum);
	return 0;
}