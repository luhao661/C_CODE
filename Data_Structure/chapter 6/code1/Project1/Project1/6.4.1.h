#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_4_1_H
#define CODE_6_4_1_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */
#define MAX_TREE_SIZE 100 /* ��������������� */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int TElemType;  /* �������������ͣ�Ŀǰ�ݶ�Ϊ���� */
typedef TElemType SqBiTree[MAX_TREE_SIZE]; /* 0�ŵ�Ԫ�洢�����  */

typedef struct
{
	int level, order; /* ���Ĳ�,�������(��������������) */
}Position;

//***ע***��Ӧд��.h�ļ�����Ϊ������code1.c��6.4.1.c�ļ�������
//������ض���
//TElemType Nil = 0; /*  ��������0Ϊ�� */

//***ע***Ӧ��д��.h�ļ���code1.c�ļ��У�
//������6.4.1.c�У���Ϊ�����Ļ�code1.c�в��ɼ�
#define ClearBiTree InitBiTree /* ��˳��洢�ṹ�У���������ȫһ�� */

Status InitBiTree(SqBiTree T);
Status CreateBiTree(SqBiTree T);
Status BiTreeEmpty(SqBiTree T);
int BiTreeDepth(SqBiTree T);
Status Root(SqBiTree T, TElemType* e);
TElemType Value(SqBiTree T, Position e);
Status Assign(SqBiTree T, Position e, TElemType value);
TElemType Parent(SqBiTree T, TElemType e);
TElemType LeftChild(SqBiTree T, TElemType e);
TElemType RightChild(SqBiTree T, TElemType e);
TElemType LeftSibling(SqBiTree T, TElemType e);
TElemType RightSibling(SqBiTree T, TElemType e);
void PreTraverse(SqBiTree T, int e);
Status PreOrderTraverse(SqBiTree T);
void InTraverse(SqBiTree T, int e);
Status InOrderTraverse(SqBiTree T);
void PostTraverse(SqBiTree T, int e);
Status PostOrderTraverse(SqBiTree T);
void LevelOrderTraverse(SqBiTree T);
void Print(SqBiTree T);

#endif