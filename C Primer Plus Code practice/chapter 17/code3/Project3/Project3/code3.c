#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//17.12�����ϰ
//1.����һ���޸�����Ķ���
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current=0x01;					//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
			current->previous = NULL;//��һ���ڵ�֮ǰ�Ľڵ�ΪNULL
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
			current->previous = prev;//�ڶ����ڵ��previousָ����һ���ڵ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ
	
		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

//struct film* temp = prev;//�ݴ�current�����ݴ����һ���ڵ�ĵ�ַ
/*Ҳ����д��*/struct film* temp = current;//ǰ��������current��Ҫ��ʼ��

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");

	while (temp != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


//�ͷ��ѷ�����ڴ�
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
//1.���������õݹ�
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current ;								//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ

		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	
	struct film* temp = current;//�ݴ�current�����ݴ��һ���ڵ�ĵ�ַ

	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");
	show_reversed_order(temp);


	//�ͷ��ѷ�����ڴ�
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
/*
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		p = p->next;									//***����***��pֵ���ı���ٵݹ飬���µ�һ���ڵ�������޷���ӡ����
		show_reversed_order(p);				//���������һ���ڵ�����ݻᱻ��ӡ����
	}	

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);		
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);
}
#endif


//2.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//����һ��P_Node�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "�������������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("���������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
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


//3.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list_1.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	List movies;//����һ��List�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "����Ԫ�������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("Ԫ�������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
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


//4.
#if 1
//������������
//�˿��������
#endif