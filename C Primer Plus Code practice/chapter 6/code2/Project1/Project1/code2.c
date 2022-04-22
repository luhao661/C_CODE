#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for循环
//int main (void)
//{
//	const int NUMBER = 10;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("123\n");
//
//	return 0;
//}


//使用for循环创建一个立方表
//int main(void)
//{
//	int num;
//
//	printf("   n    n的三次方\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %6d\n",num,num*num*num);
//
//	return 0;
//}


//用字符代替数字计数
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCII value for %c is %d.\n",ch,ch);

	return 0;
}



