#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_3_4_H
#define CODE_3_4_H

#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20          /* �洢�ռ��ʼ������ */

typedef int ElemType;       /* ElemType���͸���ʵ������������������Ϊint */

typedef int Status;         /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

//����һ��˳��洢��
typedef struct
{
    ElemType data[MAXSIZE]; /* ���飬�洢����Ԫ�� *///���鳤����MAXSIZE*����������ռ�ڴ�Ĵ�С
    int length;             /* ���Ա�ǰ���� */
}SqList;

/* ��ʼ��˳�����Ա� */
Status InitList(SqList* L);

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
Status ListIsEmpty(SqList L);

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(SqList* L);

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(SqList L);

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* �����������e����L�е�i������Ԫ�ص�ֵ,ע��i��ָλ�ã���1��λ�õ������Ǵ�0��ʼ */
Status GetElem(SqList L, int i, ElemType* e);

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
int LocateElem(SqList L, ElemType e);

/* ��ʼ������˳�����Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(SqList* L, int i, ElemType e);

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(SqList* L, int i, ElemType* e);

Status visit(ElemType c);

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(SqList L);

/*�����е������Ա�Lb�е�����La�е�����Ԫ�ز��뵽La��*/
void unionL(SqList* La, SqList Lb);

#endif