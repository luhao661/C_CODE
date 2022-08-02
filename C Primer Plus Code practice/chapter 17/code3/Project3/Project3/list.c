#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(P_Node* plist)
{
	plist->head = NULL;//��ͷָ��head=NULL
	plist->end = NULL;
}

bool ListIsFull(const P_Node* plist)
{
	bool full;
	Node* p;
	p = (Node*)malloc(sizeof(Node));//�����ܷ�Ϊ�������ռ�
	if (p == NULL)
		full = true;
	else
		full = false;
	free(p);

	return full;
}

bool AddItem(Item item, P_Node* plist)
{
	Node* begin, * current;

	begin = plist->head;

	current = (Node*)malloc(sizeof(Node));//����Ϊ�½ڵ����ռ�
												//currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//���û�δ����ListIsFull()��������ô�����Ҳ�ܼ���ܷ�Ϊ�������ռ�
		return false;

	current->item = item;//������ɹ������������½ڵ���(�����ṹ)

	current->next = NULL;//�����ýڵ�����������һ���ڵ�

	if (begin == NULL)//�����������ͷָ��
		plist->head = current;//���ͷָ������Ϊָ���һ���ڵ�
	else						 
	{
		plist->end->next = current;
	}

	plist->end = current;//����endָ��ָ��Ľڵ�

	return true;
}

bool ListIsEmpty(const P_Node* plist)
{
	if (plist->head == NULL)
		return true;
	else
		return false;
}

void Traverse(const P_Node* plist, void(*pfun)(Item item))
{
	Node* begin = plist->head;

	while (begin != NULL)
	{
		(*pfun)(begin->item);
		begin = begin->next;
	}
}

unsigned int ListItemCount(const P_Node* plist)
{
	unsigned int count = 0;
	Node* begin = plist->head;

	while (begin != NULL)
	{
		count++;
		begin = begin->next;
	}
	return count;
}

void EmptyTheList(P_Node* plist)
{
	Node* temp=0x01;

	while (plist->head != NULL)
	{
		temp = (plist->head)->next;//������һ�ڵ�ĵ�ַ
		free(plist->head);
		plist->head = temp;//ǰ������һ�ڵ�
	}
}

#endif