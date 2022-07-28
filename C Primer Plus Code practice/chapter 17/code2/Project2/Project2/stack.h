#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _STACK_H
#define _STACK_H

#include <stdbool.h>
#define MAX_STACK 10

typedef struct
{
	int data1;
	int data2;
}Item;

typedef struct node
{
	Item item;
	struct node* next;
}Node,*P_Node;//P_Node��ָ��node�ṹ���ֵ�ָ��



/*������ ��ʼ��ջ* /
/*ǰ�������� pstack ָ��һ��ջ */
/*���������� ջ����ʼ��Ϊ�� */
void InitializeStack(P_Node* pstack);//Ҫ�����β���Ӧ����ָ��node�ṹ���ֵ�ָ��ĵ�ַ

bool StackIsFull(const P_Node* pstack);

bool PushItem(Item item, P_Node* pstack);

bool PopItem(Item *item, P_Node* pstack);

bool StackIsEmpty(const P_Node* pstack);

void Traverse(const P_Node* pstack, void(*pfun)(Item item));

unsigned int StackItemCount(const P_Node* pstack);

void EmptyTheStack(P_Node* pstack);

#endif		/*_STACK_H*/