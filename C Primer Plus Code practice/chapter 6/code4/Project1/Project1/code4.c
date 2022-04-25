#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编程练习
//1.
//int main(void)
//{
//	int i;
//	char ch[26];
//	for (i = 0; i <26; i++)
//		ch[i] = 'a' + i;
//	for (i = 0; i < 26; i++)
//	     printf("%c\n",ch[i]);
//	return 0;
//}


//2.
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("$");
//	
//		printf("\n");
//	}
//
//	return 0;
//}


//3.
//int main(void)
//{
//	int i,j;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 'F'; j >= 'F' - i; j--)
//			printf("%c",j);
//		printf("\n");
//	}
//
//	return 0;
//}


//4.
//int main(void)
//{
//	int i, j,k;
//	for (i = 0; i <=5;i++)
//	{
//		for (j =k= 'A'; j <= k+ i; k=j, j++)
//			printf("%c",j);
//		printf("\n");
//	}
//
//	return 0;
//}
//int main(void)
//{
//	int i;
//	char ch[6];
//	for (i = 0; i < 6; i++)
//		ch[i] = i;
//
//	int j, k;
//	int l=0;
//	for (j = 'A'; j <= 'U'; j++)
//	{
//		printf("%c", j);
//		l++;
//		k = 1;
//		if (k++ <= ch[l])
//			;
//		else
//			printf("\n");
//	}
//
//	return 0;
//}
//难点：嵌套循环，如何在循环中嵌入一个每隔1个2个3个。。。字母，输出\n的循环。


//5.
//int main(void)
//{
//	char ch;
//	printf("请输入E以开始程序");
//	scanf("%c",&ch);
//
//	int i,j,k,l;
//
//	while (ch == 'E')
//	{
//		for (i = 1; i <= 5; i++)
//		{
//			for (j = 1; j <= 5 - i; j++)
//			{
//				printf(" ");
//				for (k = 'A'; k <= 'A' + i - 1; k++)
//				{
//					printf("%c", k);
//					for (l = 'A' + i - 1; l >= 'A'; l--)
//						printf("%c", l);
//				}
//			}
//			printf("\n");
//		}
//		scanf("%c",&ch);
//	}
//	printf("Done !\n");
//
//	return 0;
//}


//6.
//int main(void)
//{
//	int a, b;
//	printf("请输入表格的下限：");
//	scanf("%d", &a);
//	printf("请输入表格的上限：");
//	scanf("%d",&b);
//	printf("\n\n");
//
//	int c;
//	printf("整数  平方  立方\n");
//	for(c=a;c<=b;c++)
//	printf("%5d%5d%5d\n",c,c*c,c*c*c);
//
//	return 0;
//}


//7.
//int main(void)
//{
//	char ch[20];
//	printf("请输入一个单词：_____\b\b\b\b\b");
//	scanf("%s",ch);
//	int i;
//		
//	for (i = strlen(ch); i >= 0; i--)
//		printf("%c",ch[i]);
//	printf("\n\n\n");
//	return 0;
//}


//8.
//int main(void)
//{
//	float a, b;
//	int c;
//
//	printf("请输入两个浮点数：");
//	c=scanf("%f%f",&a,&b);
//
//	while (c == 2)
//	{
//		printf("%lf\n",(a-b)/(a*b));
//		printf("请继续输入两个浮点数（输入q以退出）：");
//		c = scanf("%f%f", &a, &b);
//	}
//
//	printf("Done ！\n");
//	
//	return 0;
//}


//9.
//double jisuan(float a, float b);
//int main(void)
//{
//	float a, b;
//	int c;
//
//	printf("请输入两个浮点数：");
//	c=scanf("%f%f",&a,&b);
//
//	while (c == 2)
//	{
//		
//		printf(" (a - b) / (a * b)结果是：%lf", jisuan(a, b));
//		printf("请继续输入两个浮点数（输入q以退出）：");
//		c = scanf("%f%f", &a, &b);
//	}
//
//	printf("Done ！\n");
//	
//	return 0;
//}
//double jisuan(float a, float b)
//{
//	double d;
//	d = (a - b) / (a * b);
//	return d;
//}


