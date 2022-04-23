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