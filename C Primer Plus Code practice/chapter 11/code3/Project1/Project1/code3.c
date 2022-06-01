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
#if 0
#include<string.h>
int is_within(char ch,char *string);
char* duqv(char* string, int n);

int main(void)
{
	while (1)
	{
		char cunchu[50];
		puts("请输入字符串:");
		duqv(cunchu, 50);

		puts("请输入要寻找的字符:");
		char ch;
		scanf("%c", &ch);

		int find;
		find = is_within(ch, cunchu);

		printf("find=%d", find);
	}
	return 0;
}
int is_within(char ch, char* string)
{
	int find;

	char* xunzhao;
	xunzhao = string;

	while (*xunzhao != ch)
	{
		xunzhao++;

		if (xunzhao == string + strlen(string))//若指针xunzhao 指向了数组后的第一个位置，则弹出。
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

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


//7.
#if 0
char* mystrncpy(char *string1,char *string2,int n);
char* duqv(char* string, int n);
#define SIZE 10
int main(void)
{
	char cunchu[80];
	char temp[80];
	char* fanhui;

	puts("请输入待拷贝的字符串:");
	
	while (duqv(temp, 80) && temp[0] != '\0')
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE-1);
	 cunchu[SIZE - 1] = '\0';//第10个元素赋为\0

	 puts("您输入的内容是:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("请输入待拷贝的字符串:");
	}
	puts("再见！");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=9
{
	char* fanhui=string1;

	for (int i = 0; i <= n; i++)
	{
		*(string1+i) = *(string2+i);//拷贝到第10个元素为止
	}

	return fanhui;
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


//8.
#if 1
#include<string.h>
char* string_in (char* string1, char* string2);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu1[80];
	char cunchu2[80];
	char* fanhui;

	puts("请输入待查找的字符串:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("请输入要查找的字符串:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);
			
		if (fanhui)
		{
			puts("待查找的字符串含有:");
			puts(fanhui);
		}
		else
			puts("未找到！");

		puts("请输入待查找的字符串:");
	}
	puts("再见！");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //瑕疵：只支持找两个字符
{
	char* fanhui=NULL;//必须先初始化

	int biaoji1=0,biaoji2=0;
	char* xunzhao = string1;
	char* temp=NULL;//必须先初始化

	for (          ; xunzhao < string1 + strlen(string1); xunzhao++)
	{
		if (*xunzhao == *string2)
		{
			biaoji1 = 1;
			temp = xunzhao;
			break;
		}
	}

	if (biaoji1 == 1)
	{
		xunzhao += 1;
			if (*xunzhao == *(string2 + 1))
			{
				biaoji2 = 1;
			}
	}

	if (biaoji1 == 1&&biaoji2 == 1)
	{
		fanhui = temp;
	}
	else
		fanhui = NULL;

	return fanhui;
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