#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_4_5_H
#define CODE_4_5_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;

typedef int SElemType; /* SElemType���͸���ʵ������������������Ϊint */

/* ��ջ����ռ�ṹ */
typedef struct
{
    SElemType data[MAXSIZE];
    int top1;	/* ջ1ջ��ָ�� */
    int top2;	/* ջ2ջ��ָ�� */
}SqDoubleStack;

Status InitStack(SqDoubleStack* S);
Status ClearStack(SqDoubleStack* S);
Status StackEmpty(SqDoubleStack S);
int StackLength(SqDoubleStack S);
Status Push(SqDoubleStack* S, SElemType e, int stackNumber);
Status Pop(SqDoubleStack* S, SElemType* e, int stackNumber);
Status StackTraverse(SqDoubleStack S);


#endif