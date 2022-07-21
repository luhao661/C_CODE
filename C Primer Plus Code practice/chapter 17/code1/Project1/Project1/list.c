#define _CRT_SECURE_NO_WARNINGS 1

//*****�ṩ��������ʵ�ֽӿ�*****
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(List* plist)
{
	*plist = NULL;//��ͷָ��head==NULL
}

bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
		return true;
	else
		false;
}

bool ListIsFull(const List* plist)
{
	Node* p;
	bool full;
	p = (Node*)malloc(sizeof(Node));
	if (p == NULL)
		full = true;
	else
		full = false;
	free(p);

	return full;
}

unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* temp = *plist;

	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

bool AddItem(Item item, List* plist)
{
	Node* previous, * current;

	previous = *plist;

	current = (Node*)malloc(sizeof(Node));//����Ϊ�½ڵ����ռ�

	if (current == NULL)
		return false;

	current->item = item;//������ɹ������������½ڵ���(�����ṹ)
	current->next = NULL;//�����ýڵ�����������һ���ڵ�

	if (previous == NULL)//�����������ͷָ��
		*plist = current;//���ͷָ������Ϊָ���һ��
	else						   //������������������ǰ����
	{
		while (previous->next != NULL)//ֱ�����ֱ����ó�NULL��next��Ա
			previous = previous->next;

		previous->next = current;//���һ���ڵ��next���ó��½ڵ�ĵ�ַ
	}

	return true;
}

void Traverse(const List* plist, void(*pfun)(Item item))
{
	Node* start = *plist;

	while (start != NULL)
	{
		(*pfun)(start->item);
		start = start->next;
	}
}

void EmptyTheList(List* plist)
{
	Node* temp;

	while (*plist != NULL)
	{
		temp = (*plist)->next;
		free(*plist);
		*plist = temp;
	}
}