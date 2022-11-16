#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_4_4_H
#define CODE_4_4_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */
typedef int Status;

/* 顺序栈结构 */
typedef struct
{
    SElemType data[MAXSIZE];
    int top; /* 用于栈顶指针 */  //top的值相当于是数组的索引值
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