#define _CRT_SECURE_NO_WARNINGS 1

#if 1

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void InitializeStack(P_Node* pstack);//Ҫ�����β���Ӧ����ָ��node�ṹ���ֵ�ָ��ĵ�ַ

bool StackIsFull(const P_Node* pstack);

bool PushItem(Item item, P_Node* pstack);

bool PopItem(Item* item, P_Node* pstack);

bool StackIsEmpty(const P_Node* pstack);

void Traverse(const P_Node* pstack, void(*pfun)(Item item));

unsigned int StackItemCount(const P_Node* pstack);

void EmptyTheStack(P_Node* pstack);

#endif