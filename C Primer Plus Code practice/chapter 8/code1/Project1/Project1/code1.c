#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
		putchar(ch);//��д��putchar();    ��ᱨ��putchar()�������١�

	return 0;
}