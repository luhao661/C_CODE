#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
#if 1
#endif


//���ýṹ������һ�����ͼ��Ŀ¼
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//��library����Ϊһ��ʹ��book�ṹ���ֵĽṹ��������library����Ϊһ��book���͵ı�����
	printf("������������\n");
	s_gets(library.shuming,MAX_SHUMING);//����shuming����

	puts("����������������");
	s_gets(library.zuozhe, MAX_ZUOZHE);//����zuozhe����

	puts("�������ۼۣ�");
	scanf("%f",&library.value);

	printf("%s:��%s������%.2f��",library.zuozhe,library.shuming,library.value);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string,n,stdin);
	if (fanhui)
	{
		find = strchr(string,'\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//���ýṹ�������౾���ͼ��Ŀ¼
#if 1
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//��library[100]����Ϊһ��ʹ��book�ṹ���ֵĽṹ��������
	int count = 0;
	int index;

	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);		
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	printf("������ͼ��Ŀ¼��\n");
	for (index = 0; index < count; index++)
	{
	printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif

