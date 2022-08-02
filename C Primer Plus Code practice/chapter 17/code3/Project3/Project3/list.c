#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(P_Node* plist)
{
	plist->head = NULL;//即头指针head=NULL
	plist->end = NULL;
}

bool ListIsFull(const P_Node* plist)
{
	bool full;
	Node* p;
	p = (Node*)malloc(sizeof(Node));//测试能否为新项分配空间
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

	current = (Node*)malloc(sizeof(Node));//首先为新节点分配空间
												//current指向新节点，存新节点的地址
	if (current == NULL)//若用户未调用ListIsFull()函数，那么此语句也能检查能否为新项分配空间
		return false;

	current->item = item;//若分配成功，则把项拷贝到新节点中(拷贝结构)

	current->next = NULL;//表明该节点是链表的最后一个节点

	if (begin == NULL)//若传入参数是头指针
		plist->head = current;//则把头指针设置为指向第一个节点
	else						 
	{
		plist->end->next = current;
	}

	plist->end = current;//更新end指针指向的节点

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
		temp = (plist->head)->next;//保存下一节点的地址
		free(plist->head);
		plist->head = temp;//前进至下一节点
	}
}

#endif