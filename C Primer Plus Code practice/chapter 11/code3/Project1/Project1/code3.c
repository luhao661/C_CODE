#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编程练习
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("请输入字符:(输入空行以结束)");

	int count=0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i=0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
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


//2.
#if 0
#include<string.h>
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("请输入字符:(输入^Z以结束)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL )
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0'&&*string!=' '&&*string!='\t')
			string++;
		if (*string == '\n' || *string != ' '|| *string != '\t')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//3.
#if 0
#include <string.h>
#define SIZE 20
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char * find;
	find=duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);
		
	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start=fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL&&fanhui<(string+strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start=fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：输入\n的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' &&*fanhui != '\t' && *fanhui != '\n'&&*fanhui!='\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
			fanhui++;

		if (*fanhui == ' ' || *fanhui == '\t'|| *fanhui == '\n')
		{
			*fanhui = '\0';
		}
		else //*fanhui=='\0时
			while (getchar() != '\n')
				continue;

	return start;
}
#endif


//4.
#if 0
#include <string.h>
#define SIZE 10
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start = fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：只输入\n的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0时
		while (getchar() != '\n')
			continue;

	return start;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//读取
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("请输入字符:(输入Enter结束)");

		duqv(cunchu, SIZE);

		puts("您输入的内容是:");
		puts(cunchu);

		char ch;
		puts("请输入要查找的字符:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("该字母及其后的内容为:");
			puts(Find);
		}
		else
			puts("未找到该字符！");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;
	
		if (find == string+strlen(string))//若输入两个字符，则strlen（）=2，string+2指向数组最后一个元素的后面第一个位置
		{
			find = NULL;
			break;
		}
	}

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

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


//6.
#if 1
int is_within(char ch,char *string);
int main(void)
{
	char cunchu[50];
	puts("请输入字符串:");
	duqv(cunchu,50);

	puts("请输入要寻找的字符:");


	return 0;
}
int is_within(char ch, char* string)
{

}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

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