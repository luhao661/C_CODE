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
	Node* top;//栈顶指针 用于寻找栈，是指向node结构布局的指针
	int length;//栈的长度
} LinkStack;



/*操作∶ 初始化栈* /
/*前提条件∶ pstack 指向一个栈 */
/*后置条件∶ 栈被初始化为空 */
void InitializeStack(LinkStack* pstack);//要传入形参是应该是LinkStack结构布局的结构的地址

bool StackIsFull(const LinkStack* pstack);

bool PushItem(Item item, LinkStack* pstack);

bool PopItem(Item* item, LinkStack* pstack);

bool StackIsEmpty(const LinkStack* pstack);

void Traverse(const LinkStack* pstack, void(*pfun)(Item item));

unsigned int StackItemCount(const LinkStack* pstack);

void EmptyTheStack(LinkStack* pstack);

#endif		/*_STACK_H*/