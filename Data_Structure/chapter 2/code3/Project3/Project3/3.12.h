#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_3_12_H
#define CODE_3_12_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 1000 /* 存储空间初始分配量 */

typedef int Status;           /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char ElemType;        /* ElemType类型根据实际情况而定，这里假设为char */


/* 线性表的静态链表存储结构 */
typedef struct
{
    ElemType data;
    int cur;  /* 游标(Cursor) ，为0时表示无指向，表为空 */
} Component, StaticLinkList[MAXSIZE];//结构数组

Status InitList(StaticLinkList space);
int Malloc_SSL(StaticLinkList space);
void Free_SSL(StaticLinkList space, int k);
int ListLength(StaticLinkList L);
Status ListInsert(StaticLinkList L, int i, ElemType e);
Status ListDelete(StaticLinkList L, int i);
Status ListTraverse(StaticLinkList L);

#endif
