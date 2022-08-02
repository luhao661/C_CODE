#define _CRT_SECURE_NO_WARNINGS 1

#if 1

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void InitializeStack(LinkStack* pstack);//要传入形参是应该是LinkStack结构布局的结构的地址

bool StackIsFull(const LinkStack* pstack);

bool PushItem(Item item, LinkStack* pstack);

bool PopItem(Item* item, LinkStack* pstack);

bool StackIsEmpty(const LinkStack* pstack);

void Traverse(const LinkStack* pstack, void(*pfun)(Item item));

unsigned int StackItemCount(const LinkStack* pstack);

void EmptyTheStack(LinkStack* pstack);

#endif