#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
		putchar(ch);//若写成putchar();    则会报错：putchar()参数过少。

	return 0;
}