#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("�������ַ�:(��������Խ���)");

	int count=0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("�������������:");
	for (int i=0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string,n,stdin);
	
	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
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
	puts("�������ַ�:(����^Z�Խ���)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL )
	{
		count++;
	}

	puts("�������������:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0'&&*string!=' '&&*string!='\t')
			string++;
		if (*string == '\n' || *string != ' '|| *string != '\t')
			*string = '\0';
		else//*string == '\0'ʱ
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
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char * find;
	find=duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);
		
	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start=fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL&&fanhui<(string+strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start=fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�����\n�������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' &&*fanhui != '\t' && *fanhui != '\n'&&*fanhui!='\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
			fanhui++;

		if (*fanhui == ' ' || *fanhui == '\t'|| *fanhui == '\n')
		{
			*fanhui = '\0';
		}
		else //*fanhui=='\0ʱ
			while (getchar() != '\n')
				continue;

	return start;
}
#endif


//4.
#if 0
#include <string.h>
#define SIZE 10
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start = fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�ֻ����\n�������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0ʱ
		while (getchar() != '\n')
			continue;

	return start;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//��ȡ
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("�������ַ�:(����Enter����)");

		duqv(cunchu, SIZE);

		puts("�������������:");
		puts(cunchu);

		char ch;
		puts("������Ҫ���ҵ��ַ�:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("����ĸ����������Ϊ:");
			puts(Find);
		}
		else
			puts("δ�ҵ����ַ���");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;
	
		if (find == string+strlen(string))//�����������ַ�����strlen����=2��string+2ָ���������һ��Ԫ�صĺ����һ��λ��
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

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
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
		puts("�������ַ���:");
		duqv(cunchu, 50);

		puts("������ҪѰ�ҵ��ַ�:");
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

		if (xunzhao == string + strlen(string))//��ָ��xunzhao ָ���������ĵ�һ��λ�ã��򵯳���
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
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

	puts("��������������ַ���:");
	
	while (duqv(temp, 80) && temp[0] != '\0')
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE-1);
	 cunchu[SIZE - 1] = '\0';//��10��Ԫ�ظ�Ϊ\0

	 puts("�������������:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("��������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=9
{
	char* fanhui=string1;

	for (int i = 0; i <= n; i++)
	{
		*(string1+i) = *(string2+i);//��������10��Ԫ��Ϊֹ
	}

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
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

	puts("����������ҵ��ַ���:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("������Ҫ���ҵ��ַ���:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);
			
		if (fanhui)
		{
			puts("�����ҵ��ַ�������:");
			puts(fanhui);
		}
		else
			puts("δ�ҵ���");

		puts("����������ҵ��ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //覴ã�ֻ֧���������ַ�
{
	char* fanhui=NULL;//�����ȳ�ʼ��

	int biaoji1=0,biaoji2=0;
	char* xunzhao = string1;
	char* temp=NULL;//�����ȳ�ʼ��

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

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif