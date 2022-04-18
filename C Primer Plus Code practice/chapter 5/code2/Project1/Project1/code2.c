#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//++的前缀和后缀的区别
//int main(void)
//{
//	int a, b;
//	a = b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a   a_post   b    pre_b\n");
//	printf("%1d%5d%8d%5d\n",a,a_post,b,pre_b);
//
//	return 0;
//}


//递减运算符
//int main(void)
//{
//	int count = 101;
//	while (--count > 0)
//	{
//		printf("现在有%d个\n",count);
//		printf("拿走1个,\n");
//		printf("还剩%d个\n\n",count-1);
//			
//	}
//
//		return 0;
//}


//自作聪明
//int main(void)
//{
//	int n,y;
//	n = 3;
//	y = n+++n++;
//	printf("y=%d, n=%d",y,n);
//
//	return 0;
//}


//计算前20个整数的和
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//	{
//		sum = sum + count;
//		printf("sum=%d\n",sum);
//
//	}
//
//	return 0;
//}


//简单语句和复合语句
//int main(void)
//{
//	int index, sam;
//	index = 0;
//	//while (index++ < 10)
//	//	sam = 10 * index + 2;
//	//printf("sam=%d\n",sam);
//	while (index++ < 10)
//	{
//		sam = 10 * index + 2;
//		printf("sam=%d\n",sam);
//	}
//	return 0;
//}


//自动类型转换
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch = %c, i = % d, fl = %2.2f\n ",ch,i,fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n",ch,i,fl);
//	ch = 1107;
//	printf("Now ch = %c\n",ch);
//	ch = 80.89;
//	printf("Now ch = %c\n",ch);
//
//	return 0;
//}


//强制类型转换
//int main(void)
//{
//	int mice1, mice2;
//	mice1 = 1.6 + 1.7;
//	printf("%d\n",mice1);
//	mice2 = (int)1.6  + (int)1.7;
//	printf("%d\n", mice2);
//
//	return 0;
//}


//定义一个带一个参数的函数
//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//}
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//	}
//	printf("\n");
//}