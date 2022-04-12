#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define praise "你真棒"
//int main(void)
//{
//	char name[60];
//
//	printf("你的名字是什么？");
//	scanf("%s",name);
//	printf("Hello,%s.       %s\n\n",name,praise);
//
//	return 0;
//}


//sizeof 和 strlen 的区别
//#include <string.h>
//#define praise "你真棒"
//int main(void)
//{
//	char name[40];
//
//	printf("你的名字是？");
//	scanf("%s",name);
//	printf("哈哈，%s，%s",name,praise);
//	printf("你的名字有%zd个字符长度，数组占%zd个字节大小",strlen(name),sizeof (name));
//
//	return 0;
//}	


//使用已定义的常量（符号常量，明示常量）
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	printf("你的披萨饼的半径是？\n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("你的披萨的周长是%8.2f,面积是%8.2f",circum,area);
	return 0;
}