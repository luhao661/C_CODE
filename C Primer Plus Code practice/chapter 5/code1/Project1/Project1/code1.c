#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//shoes 程序
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("shoe size (men's)     foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5)
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n",shoe,foot );
//		shoe += 1;
//	}
//
//	return 0;
//}


//三重赋值
//int main(void)
//{
//	int a, b, c;
//	a = b = c = 10;
//	printf("%5d%5d%5d",a,b,c);
//	return 0;
//}


//计算1~20的平方
//int main(void)
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d%6d\n",num,num*num);
//		num++;
//	
//
//	return 0;
//}


//指数增长
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("square         grains            total               ");
//	printf("fraction of   \n");
//	printf("                added           grains               ");
//	printf("world total\n");
//	total = current = 1.0;
//
//	printf("%4d %17.2E %16.2E %28.16f%%\n", count, current, total, total / CROP*100);
//
//	while (count < 64)
//	{
//		count++;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %17.2E %16.2E %28.16f%%\n",count,current,total,total/CROP*100);
//	}
//
//	return 0;
//}


//除法
//int main(void)
//{
//	printf("整数除法：5/4  6/3  7/4\n");
//	printf("结果是  ：  %d   %d    %d\n",5/4,6/3,7/4);
//	printf("浮点数除法：5/4    6/3   7/4\n");
//	printf("结果是  ：  %.2f  %.2f  %.2f", 5./4., 6. / 3., 7./ 4.);
//
//	return 0;
//}


//优先级测试
//int main(void)
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top=%d, score=%d\n",top,score);
//
//	return 0;
//}


//sizeof size_t
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//	printf("n=%d, n has %zd bytes; all ints have %zd bytes;\n",n,sizeof n,intsize);
//	return 0;
//}


//用求模运算符%把秒数转换成分和秒
//int main(void)
//{
//	int sec, min, left;
//
//	printf("把秒数转换成分钟和秒！\n");
//	scanf("%d",&sec);
//	while (sec > 0)
//	{
//		min = sec / 60;
//		left = sec % 60;
//		printf("%d seconds is %d minutes, %d seconds.\n",sec,min,left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d",&sec);
//	}
//	printf("Done!");
//	return 0;
//}


//++的前缀和后缀的区别
int main(void)
{


	return 0;
}