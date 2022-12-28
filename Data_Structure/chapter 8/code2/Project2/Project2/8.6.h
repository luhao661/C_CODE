#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_8_6_H
#define CODE_8_6_H

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
	struct BiTNode* lchild, * rchild;	/* ���Һ���ָ�� */
} BiTNode, * BiTree;

Status SearchBST(BiTree T, int key, BiTree f, BiTree* p);
Status InsertBST(BiTree* T, int key);
Status DeleteBST(BiTree* T, int key);

#endif