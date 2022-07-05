#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>//提供明示常量(也叫符号常量)CHAR_BIT 即char类型的位数
#include <stdlib.h>//exit()
#include <string.h>
//
#if 1
#endif

//编程练习
//1.
#if 1
int b_to_i(const char *string);
int main(void)
{
	char* pbin = "01001001";

	int num=b_to_i(pbin);

	printf("%d",num);

	return 0;
}
int b_to_i(const char* string)
{
	int num=0;
	int length = strlen(string);
	int weiquan = 1;

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //得到每位是0还是1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
#endif