#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_4_4_H
#define CODE_4_4_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int SElemType; /* SElemType���͸���ʵ������������������Ϊint */
typedef int Status;

/* ˳��ջ�ṹ */
typedef struct
{
    SElemType data[MAXSIZE];
    int top; /* ����ջ��ָ�� */  //top��ֵ�൱�������������ֵ
}SqStack;

Status InitStack(SqStack* S);
Status ClearStack(SqStack* S);
Status StackEmpty(SqStack S);
int StackLength(SqStack S);
Status GetTop(SqStack S, SElemType* e);
Status Push(SqStack* S, SElemType e);
Status Pop(SqStack* S, SElemType* e);
Status StackTraverse(SqStack S);

#endif