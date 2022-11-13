#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_3_6_H
#define CODE_3_6_H

#include <stdio.h>//NULL

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

//结点的结构模板声明
typedef struct Node
{
    ElemType data;
    struct Node* next;
}Node;

typedef struct Node* LinkList; /* 定义LinkList */ 
                                             //指向节点的指针的别名为LinkList

Status InitList(LinkList* L);//L是指针的指针

Status ListEmpty(LinkList L);

Status ClearList(LinkList* L);

int ListLength(LinkList L);

Status GetElem(LinkList L, int i, ElemType* e);

int LocateElem(LinkList L, ElemType e);

Status ListInsert(LinkList* L, int i, ElemType e);

Status ListDelete(LinkList* L, int i, ElemType* e);

Status ListTraverse(LinkList L);

void CreateListHead(LinkList* L, int n);

void CreateListTail(LinkList* L, int n);

#endif