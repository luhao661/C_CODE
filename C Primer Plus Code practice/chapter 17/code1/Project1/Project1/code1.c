#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strchr()
//
#if 1
#endif


//ʹ�ýṹ�������洢����
#if 0
#define LENGTH	45   //�洢ӰƬƬ������󳤶�
#define MAX			500//�洢ӰƬ���������

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string,int num);

int main(void)
{
	struct film movies[MAX];
	int jishu=0;

	puts("�������Ӱ�ı��⣺");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d",&movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n",movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//ʹ�ýṹ��+��̬�ڴ���䣬��ʡ����ʱʹ�õ��ڴ�ռ�
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//�洢ӰƬƬ������󳤶�

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("��������Ҫд��ĵ�Ӱ����\n");
	scanf("%d",&max);

	while (getchar()!='\n')
	continue;

	struct film *movies = (struct film*)malloc(max*sizeof(struct film));

	int jishu = 0;

	puts("�������Ӱ�ı��⣺");
	while (jishu < max && s_gets((*(movies+jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//ʹ�ýṹ��������ʾ����
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char *string,int num);

int main(void)
{
	struct film* head=NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* previous=0x00, * current;							//3.����һ����film�ṹ���ֵĽṹ����previous��current������previous��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
			head = current;
		else
			previous->next = current;							  	    //6.������Ĳ��ǵ�һ���ṹ����ṹָ��previousָ���next��Ա(nextҲ�Ǹ��ṹָ��)����һ�η���Ľṹ�ĵ�ַ

		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ
		strcpy(current->title,input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		previous = current;												    //8.previousָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�previous->next���е�previous
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	/****************
	//��һ���ṹ��������head���һ���ṹ�ĵ�ַ��												   ��һ���ṹ��next��Ա����ΪNULL���������ݺ󣬵�һ���ṹ�ĵ�ַ����previous��
	//�ڶ����ṹ��������previous(����һ���ṹ)��next��Ա��ڶ����ṹ�ĵ�ַ���ڶ����ṹ��next��Ա����ΪNULL���������ݺ󣬵ڶ����ṹ�ĵ�ַ����previous��
	//�������ṹ��������previous(���ڶ����ṹ)��next��Ա��������ṹ�ĵ�ַ���������ṹ��next��Ա����ΪNULL���������ݺ󣬵������ṹ�ĵ�ַ����previous
																																																									   ****************/

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n",current->title,current->rating);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//���������͵ķ�������3����ɴӳ��󵽾���Ĺ���
//1.�ṩ�������Ժ���ز����ĳ�������
//2.����һ��ʵ��ADT�ı�̽ӿ�(ָ����δ洢���ݺ�ִ����������ĺ���)
//3.��д������ʹ�ýӿڣ���д������ʵ�ֽӿ�
#if 1
//*****�ѽӿ�Ӧ�����ض���������Դ�����ļ�*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char *string,int num);

int main(void)
{
	List movies;//����һ��ָ��note�ṹ���ֵ�ָ��movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr,"�������������Ѵﵽ���ֵ��");
		exit(1);
	}

	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr,"���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("���������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}																				

	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼");
		Traverse(&movies,showmovies);
	}
	printf("��������%d����Ӱ\n",ListItemCount(&movies));
	
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title,item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif