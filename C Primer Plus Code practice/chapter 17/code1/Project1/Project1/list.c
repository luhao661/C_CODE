#define _CRT_SECURE_NO_WARNINGS 1

//*****提供函数代码实现接口*****
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void InitializeList(P_Node* plist)
{
	*plist = NULL;//即头指针head=NULL
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
	Node* head, * current;
	//或
	//P_Node head,current;

	head = *plist;

	current = (Node*)malloc(sizeof(Node));//首先为新节点分配空间
												//current指向新节点，存新节点的地址
	if (current == NULL)//若用户未调用ListIsFull()函数，那么此语句也能检查能否为新项分配空间
		return false;

	current->item = item;//若分配成功，则把项拷贝到新节点中(拷贝结构)

	current->next = NULL;//表明该节点是链表的最后一个节点

	if (head == NULL)//若传入参数是头指针
		*plist = current;//则把头指针设置为指向第一个节点
	else						   //否则代码继续在链表中前进，
	{
		while (head->next != NULL)//直到发现被设置成NULL的next成员
			head = head->next;

		head->next = current;//最后一个节点的next设置成新节点的地址
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
		//*****注*****
		//因为形参中有const存在，所以不允许出现*plist=(*plist)->next;
	}
	return count;
}

void EmptyTheList(P_Node* plist)
{
	Node* temp;

	while (*plist != NULL)
	{
		temp = (*plist)->next;//保存下一节点的地址
		free(*plist);
		*plist = temp;//前进至下一节点
	}
}