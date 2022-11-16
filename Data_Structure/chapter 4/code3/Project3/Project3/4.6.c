#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "4.6.h"
#include <stdio.h>
#include <stdlib.h>

static Status visit(SElemType c)
{
    printf("%d ", c);
    return OK;
}

/*  构造一个空栈S */
Status InitStack(LinkStack* S)
{
    S->top = (LinkStackPtr)malloc(sizeof(StackNode));

    if (!S->top)
        return ERROR;
    
    S->top->next = NULL;
    S->count = 0;
    
    return OK;
}

/* 把S置为空栈 */
Status ClearStack(LinkStack* S)
{
    LinkStackPtr p, q;
    p = S->top;
    while (p)
    {
        q = p;
        p = p->next;
        free(q);
    }
    S->count = 0;
    return OK;
}

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
Status StackEmpty(LinkStack S)
{
    if (S.count == 0)
        return TRUE;
    else
        return FALSE;
}

/* 返回S的元素个数，即栈的长度 */
int StackLength(LinkStack S)
{
    return S.count;
}

/* 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR */
Status GetTop(LinkStack S, SElemType* e)
{
    if (S.top == NULL)
        return ERROR;
    else
        *e = S.top->data;
    return OK;
}

/* 插入元素e为新的栈顶元素 */
Status Push(LinkStack* S, SElemType e)
{
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top;	/* 把当前的栈顶元素赋值给新结点的直接后继，见图中① */
    S->top = s;         /* 将新的结点s赋值给栈顶指针，见图中② */
    S->count++;
    return OK;
}

/* 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR */
Status Pop(LinkStack* S, SElemType* e)
{
    LinkStackPtr p;
    if (StackEmpty(*S))
        return ERROR;
    *e = S->top->data;
    p = S->top;					/* 将栈顶结点赋值给p，见图中③ */
    S->top = S->top->next;    /* 使得栈顶指针下移一位，指向后一结点，见图中④ */
    free(p);                    /* 释放结点p */
    S->count--;
    return OK;
}

Status StackTraverse(LinkStack S)
{
    LinkStackPtr p;
    p = S.top;
    while (p)
    {
        visit(p->data);
        p = p->next;
    }
    printf("\n");
    return OK;
}

#endif