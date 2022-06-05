#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
#if 1
#endif


//复习题
//5.
#if 0
char* ptr(char* str);
int main(void)
{
	char* p;
	p = ptr("Ho Ho Ho!");

	return 0;
}
char* ptr(char* str)
{
	char* pc;
	pc = str;
	while (*pc)
		putchar(*pc++);

	do
	{
		putchar(*--pc);
	} while (pc-str);

	return (pc);
}
#endif


//9.
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
		
	printf("%p\n", s_gets(flower, SIZE));																			//特殊情况：输入^Z则此句输出0000000000000000
	//printf("%d\n", s_gets(flower, SIZE));//地址类型用%d输出时，无法显示内容
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	if (fanhui)
	{
		while (*string != '\n' && *string != '\0')
			string++;

		if (*string == '\n')
			*string = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//10.
#if 0
#define SIZE 80
int strlen(char* p);
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	puts("请输入字符串：");

	printf("字符串首地址：%p\n内容为：", s_gets(flower, SIZE));
	//printf("%d\n", s_gets(flower, SIZE));//地址类型用%d输出时，无法显示内容
	puts(flower);

	printf("字符串长度为%d\n",strlen(flower));

	return 0;
}
int strlen(char* p)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
		;

	//若输入空行，则i为0时不进入for循环。若输入一个字符，则i为0时进入for循环，后来i为1时退出循环。
	return i;
}
//法二：
//int strlen(char* p)
//{
//	int i=0;
//	while (*p++ != '\0')
//		i++;
//
//	return i;
//}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	if (fanhui)
	{
		while (*string != '\n' && *string != '\0')
			string++;

		if (*string == '\n')
			*string = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//11.
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("s_gets()的返回的指针的地址值%p\n", s_gets(flower, SIZE));				
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	char* find;

	if (fanhui)//若输入不为^Z
	{
		find = strchr( string,'\n');
		
		if (find)
			*find = '\0';
		else//若未找到，则find=NULL，执行else
			while (getchar() != '\n')//吃掉缓冲区多余数据
				continue;
	}

	return fanhui;
}
#endif


//12.
#if 0
#include <string.h>
#define SIZE 80
char* find_space(char* string);
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	s_gets(flower, SIZE);
	printf("输入的内容是:");
	puts(flower);
	
	char* find;
	find = find_space(flower);
	
	if (find != NULL)
	{
		printf("空格及其后的字符是:");
		puts(find);
	}
	else
		puts("未找到空格！");//若没有else语句块，则输入没有空格的字符串时，程序会出错。

	return 0;
}
char* find_space(char* string)
{
	char* find;

	while (*string != ' '&&*string!='\0')
		string++;

	if (*string == ' ')
		find = string;//指向空格的后一个字符
	else//*string=='\0'时
		find = NULL;

	return find;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	char* find;

	if (fanhui)//若输入不为^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//若未找到，则find=NULL，执行else
			while (getchar() != '\n')//吃掉缓冲区多余数据
				continue;
	}

	return fanhui;
}
#endif


//13.
#if 0
#include <string.h>
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40
char* s_gets(char* string, int n);
void ToUpper(char*string);

int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb ?");
	s_gets(try, SIZE);
	ToUpper(try);

	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		ToUpper(try);
	}
	puts("That's right !\n");

	return 0;
}
void ToUpper(char* string)
{
	while (*string)
	{
		*string = toupper(*string);
		string++;
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif
