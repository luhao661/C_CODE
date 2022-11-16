#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_4_6_H
#define CODE_4_6_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;
typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */


/* 链栈结构 */
typedef struct StackNode //栈的节点
{
    SElemType data;             //数据域
    struct StackNode* next;//指针域
}StackNode, * LinkStackPtr;

//***注***
//对指向结构的指针再次进行封装
typedef struct
{
    LinkStackPtr top;
    int count;
}LinkStack;

#endif