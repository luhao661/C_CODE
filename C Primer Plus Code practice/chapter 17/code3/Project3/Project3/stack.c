#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
#include <stdlib.h>//exit()
#include "stack.h"

void InitializeStack(LinkStack* pstack)//要传入形参是应该是指向node结构布局的指针的地址
{
	pstack->top =NULL;
	pstack->length = 0;
}

bool StackIsFull(const LinkStack* pstack)
{
	return (pstack->length == MAX_STACK) ? true : false;
}

bool PushItem(Item item, LinkStack* pstack)
{
	Node* current;

	if (StackIsFull(pstack))
		return false;

	current = (Node*)malloc(sizeof(Node));//首先为新节点分配空间
											//current指向新节点，存新节点的地址
	if (current == NULL)//判断能否为新节点动态分配内存
	{
		fprintf(stderr, "错误，未能分配到内存！");
		exit(1);
	}

	current->item = item;

	//错误写法：current->next = NULL;
	current->next = pstack->top;//把栈顶的地址(一开始是NULL)赋给新的节点(栈底节点)的next成员

	pstack->top = current;//把新节点的地址赋给栈顶指针(使栈顶指针不断向栈顶移动)

	pstack->length++;

	return true;
}

bool PopItem(Item* item, LinkStack* pstack)
{
	Node* temp;

	if (StackIsEmpty(pstack))
	{
		fprintf(stderr,"空栈，出栈失败！");
		return false;
	}

	*item = pstack->top->item;

	temp = pstack->top;
	pstack->top = pstack->top->next;//栈顶指针向下移1个节点
	free(temp);

	pstack->length--;

	return true;
}

bool StackIsEmpty(const LinkStack* pstack)
{
	if (pstack->top == NULL)
		return true;
	else
		return false;
}

void Traverse(const LinkStack* pstack, void(*pfun)(Item item))
{
	Node* temp = pstack->top;

	while (temp != NULL)
	{
		pfun(temp->item);
		temp = temp->next;
	}
}

unsigned int StackItemCount(const LinkStack* pstack)
{
	return pstack->length;
}

void EmptyTheStack(LinkStack* pstack)
{
	Node* temp;

	while (pstack->top != NULL)
	{
		temp = pstack->top;	//保存当前节点的地址
		pstack->top = (pstack)->top->next;//前进至下一节点
		free(temp);
		pstack->length--;
	}
}

#endif