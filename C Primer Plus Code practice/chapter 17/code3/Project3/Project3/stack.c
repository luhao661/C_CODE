#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
#include <stdlib.h>//exit()
#include "stack.h"

void InitializeStack(LinkStack* pstack)//Ҫ�����β���Ӧ����ָ��node�ṹ���ֵ�ָ��ĵ�ַ
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

	current = (Node*)malloc(sizeof(Node));//����Ϊ�½ڵ����ռ�
											//currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//�ж��ܷ�Ϊ�½ڵ㶯̬�����ڴ�
	{
		fprintf(stderr, "����δ�ܷ��䵽�ڴ棡");
		exit(1);
	}

	current->item = item;

	//����д����current->next = NULL;
	current->next = pstack->top;//��ջ���ĵ�ַ(һ��ʼ��NULL)�����µĽڵ�(ջ�׽ڵ�)��next��Ա

	pstack->top = current;//���½ڵ�ĵ�ַ����ջ��ָ��(ʹջ��ָ�벻����ջ���ƶ�)

	pstack->length++;

	return true;
}

bool PopItem(Item* item, LinkStack* pstack)
{
	Node* temp;

	if (StackIsEmpty(pstack))
	{
		fprintf(stderr,"��ջ����ջʧ�ܣ�");
		return false;
	}

	*item = pstack->top->item;

	temp = pstack->top;
	pstack->top = pstack->top->next;//ջ��ָ��������1���ڵ�
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
		temp = pstack->top;	//���浱ǰ�ڵ�ĵ�ַ
		pstack->top = (pstack)->top->next;//ǰ������һ�ڵ�
		free(temp);
		pstack->length--;
	}
}

#endif