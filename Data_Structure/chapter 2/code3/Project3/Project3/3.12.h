#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_3_12_H
#define CODE_3_12_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 1000 /* �洢�ռ��ʼ������ */

typedef int Status;           /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef char ElemType;        /* ElemType���͸���ʵ������������������Ϊchar */


/* ���Ա�ľ�̬����洢�ṹ */
typedef struct
{
    ElemType data;
    int cur;  /* �α�(Cursor) ��Ϊ0ʱ��ʾ��ָ�򣬱�Ϊ�� */
} Component, StaticLinkList[MAXSIZE];//�ṹ����

Status InitList(StaticLinkList space);
int Malloc_SSL(StaticLinkList space);
void Free_SSL(StaticLinkList space, int k);
int ListLength(StaticLinkList L);
Status ListInsert(StaticLinkList L, int i, ElemType e);
Status ListDelete(StaticLinkList L, int i);
Status ListTraverse(StaticLinkList L);

#endif
