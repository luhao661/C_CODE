#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_8_7_H
#define CODE_8_7_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */


/* �������Ķ���������ṹ���� */
typedef  struct BiTNode	/* ���ṹ */
{
	int data;	/* ������� */
	int bf; /*  ����ƽ������ */
	struct BiTNode* lchild, * rchild;	/* ���Һ���ָ�� */
} BiTNode, * BiTree;

Status InsertAVL(BiTree* T, int e, Status* taller);

#endif

