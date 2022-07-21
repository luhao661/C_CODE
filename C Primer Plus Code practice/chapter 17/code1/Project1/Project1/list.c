#define _CRT_SECURE_NO_WARNINGS 1

//*****提供函数代码实现接口*****
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(List* plist)
{
	*plist = NULL;//即头指针head==NULL
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

	current = (Node*)malloc(sizeof(Node));//首先为新节点分配空间

	if (current == NULL)
		return false;

	current->item = item;//若分配成功，则把项拷贝到新节点中(拷贝结构)
	current->next = NULL;//表明该节点是链表的最后一个节点

	if (previous == NULL)//若传入参数是头指针
		*plist = current;//则把头指针设置为指向第一项
	else						   //否则代码继续在链表中前进，
	{
		while (previous->next != NULL)//直到发现被设置成NULL的next成员
			previous = previous->next;

		previous->next = current;//最后一个节点的next设置成新节点的地址
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