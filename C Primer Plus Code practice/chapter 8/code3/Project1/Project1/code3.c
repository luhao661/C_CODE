#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//复习题
//2.
#if 0
int main(void)
{
	//putchar('H');
	//putchar('\007');
	putchar('\b');
	return 0;
}
#endif


//3.
#if 0
int main(void)
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			;			
		else
			count++;
	}

	printf("有%d个字符(不含换行符)",count);

	return 0;
}
#endif


//编程练习
//1.
#if 1
int main(void)
{
	printf("请输入字符：\n");

	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
			count++;
		else
			;
	}

	printf("读取到%d个字符\n",count);

	return 0;
}
#endif
