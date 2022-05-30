#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编程练习
//1.
#if 1
#define SIZE 20
char* s_gets(char* string, int n);
int main(void)
{
	char cunchu[SIZE];

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string,n,stdin);
	
	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
