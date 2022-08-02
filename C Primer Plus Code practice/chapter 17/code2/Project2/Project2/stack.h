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
}Node;

typedef struct
{
	Node* top;//ջ��ָ�� ����Ѱ��ջ����ָ��node�ṹ���ֵ�ָ��
	int length;//ջ�ĳ���
} LinkStack;



/*������ ��ʼ��ջ* /
/*ǰ�������� pstack ָ��һ��ջ */
/*���������� ջ����ʼ��Ϊ�� */
void InitializeStack(LinkStack* pstack);//Ҫ�����β���Ӧ����LinkStack�ṹ���ֵĽṹ�ĵ�ַ

bool StackIsFull(const LinkStack* pstack);

bool PushItem(Item item, LinkStack* pstack);

bool PopItem(Item* item, LinkStack* pstack);

bool StackIsEmpty(const LinkStack* pstack);

void Traverse(const LinkStack* pstack, void(*pfun)(Item item));

unsigned int StackItemCount(const LinkStack* pstack);

void EmptyTheStack(LinkStack* pstack);

#endif		/*_STACK_H*/