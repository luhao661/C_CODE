#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_4_6_H
#define CODE_4_6_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;
typedef int SElemType; /* SElemType���͸���ʵ������������������Ϊint */


/* ��ջ�ṹ */
typedef struct StackNode //ջ�Ľڵ�
{
    SElemType data;             //������
    struct StackNode* next;//ָ����
}StackNode, * LinkStackPtr;

//***ע***
//��ָ��ṹ��ָ���ٴν��з�װ
typedef struct
{
    LinkStackPtr top;
    int count;
}LinkStack;

#endif