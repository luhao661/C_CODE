#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
#if 1
#endif


//��ϰ��
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
		
	printf("%p\n", s_gets(flower, SIZE));																			//�������������^Z��˾����0000000000000000
	//printf("%d\n", s_gets(flower, SIZE));//��ַ������%d���ʱ���޷���ʾ����
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

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

	puts("�������ַ�����");

	printf("�ַ����׵�ַ��%p\n����Ϊ��", s_gets(flower, SIZE));
	//printf("%d\n", s_gets(flower, SIZE));//��ַ������%d���ʱ���޷���ʾ����
	puts(flower);

	printf("�ַ�������Ϊ%d\n",strlen(flower));

	return 0;
}
int strlen(char* p)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
		;

	//��������У���iΪ0ʱ������forѭ����������һ���ַ�����iΪ0ʱ����forѭ��������iΪ1ʱ�˳�ѭ����
	return i;
}
//������
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
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

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

	printf("s_gets()�ķ��ص�ָ��ĵ�ֵַ%p\n", s_gets(flower, SIZE));				
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	char* find;

	if (fanhui)//�����벻Ϊ^Z
	{
		find = strchr( string,'\n');
		
		if (find)
			*find = '\0';
		else//��δ�ҵ�����find=NULL��ִ��else
			while (getchar() != '\n')//�Ե���������������
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
	printf("�����������:");
	puts(flower);
	
	char* find;
	find = find_space(flower);
	
	if (find != NULL)
	{
		printf("�ո������ַ���:");
		puts(find);
	}
	else
		puts("δ�ҵ��ո�");//��û��else���飬������û�пո���ַ���ʱ����������

	return 0;
}
char* find_space(char* string)
{
	char* find;

	while (*string != ' '&&*string!='\0')
		string++;

	if (*string == ' ')
		find = string;//ָ��ո�ĺ�һ���ַ�
	else//*string=='\0'ʱ
		find = NULL;

	return find;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	char* find;

	if (fanhui)//�����벻Ϊ^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//��δ�ҵ�����find=NULL��ִ��else
			while (getchar() != '\n')//�Ե���������������
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
