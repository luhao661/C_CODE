#define _CRT_SECURE_NO_WARNINGS 1

//*****�ṩ��������ʵ�ֽӿ�*****
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(P_Node* plist)
{
	*plist = NULL;//��ͷָ��head=NULL
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
	Node* head, * current;
	//��
	//P_Node head,current;

	head = *plist;

	current = (Node*)malloc(sizeof(Node));//����Ϊ�½ڵ����ռ�
												//currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//���û�δ����ListIsFull()��������ô�����Ҳ�ܼ���ܷ�Ϊ�������ռ�
		return false;

	current->item = item;//������ɹ������������½ڵ���(�����ṹ)

	current->next = NULL;//�����ýڵ�����������һ���ڵ�

	if (head == NULL)//�����������ͷָ��
		*plist = current;//���ͷָ������Ϊָ���һ���ڵ�
	else						   //������������������ǰ����
	{
		while (head->next != NULL)//ֱ�����ֱ����ó�NULL��next��Ա
			head = head->next;

		head->next = current;//���һ���ڵ��next���ó��½ڵ�ĵ�ַ
	}

	return true;
}

bool ListIsEmpty(const P_Node* plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

void Traverse(const P_Node* plist, void(*pfun)(Item item))
{
	Node* head = *plist;

	while (head != NULL)
	{
		(*pfun)(head->item);
		head = head->next;
	}
}

unsigned int ListItemCount(const P_Node* plist)
{
	unsigned int count = 0;
	Node* head = *plist;

	while (head != NULL)
	{
		count++;
		head = head->next;
		//*****ע*****
		//��Ϊ�β�����const���ڣ����Բ��������*plist=(*plist)->next;
	}
	return count;
}

void EmptyTheList(P_Node* plist)
{
	Node* temp;

	while (*plist != NULL)
	{
		temp = (*plist)->next;//������һ�ڵ�ĵ�ַ
		free(*plist);
		*plist = temp;//ǰ������һ�ڵ�
	}
}