#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_3_4_H
#define CODE_3_4_H

#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20          /* 存储空间初始分配量 */

typedef int ElemType;       /* ElemType类型根据实际情况而定，这里假设为int */

typedef int Status;         /* Status是函数的类型,其值是函数结果状态代码，如OK等 */

//声明一个顺序存储表
typedef struct
{
    ElemType data[MAXSIZE]; /* 数组，存储数据元素 *///数组长度是MAXSIZE*数据类型所占内存的大小
    int length;             /* 线性表当前长度 */
}SqList;

/* 初始化顺序线性表 */
Status InitList(SqList* L);

/* 初始条件：顺序线性表L已存在。操作结果：若L为空表，则返回TRUE，否则返回FALSE */
Status ListIsEmpty(SqList L);

/* 初始条件：顺序线性表L已存在。操作结果：将L重置为空表 */
Status ClearList(SqList* L);

/* 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数 */
int ListLength(SqList L);

/* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值,注意i是指位置，第1个位置的数组是从0开始 */
Status GetElem(SqList L, int i, ElemType* e);

/* 初始条件：顺序线性表L已存在 */
/* 操作结果：返回L中第1个与e满足关系的数据元素的位序。 */
/* 若这样的数据元素不存在，则返回值为0 */
int LocateElem(SqList L, ElemType e);

/* 初始条件：顺序线性表L已存在,1≤i≤ListLength(L)， */
/* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
Status ListInsert(SqList* L, int i, ElemType e);

/* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
/* 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1 */
Status ListDelete(SqList* L, int i, ElemType* e);

Status visit(ElemType c);

/* 初始条件：顺序线性表L已存在 */
/* 操作结果：依次对L的每个数据元素输出 */
Status ListTraverse(SqList L);

/*将所有的在线性表Lb中但不在La中的数据元素插入到La中*/
void unionL(SqList* La, SqList Lb);

#endif