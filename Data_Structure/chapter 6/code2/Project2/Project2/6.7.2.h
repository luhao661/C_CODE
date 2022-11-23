#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_7_2_H
#define CODE_6_7_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

typedef char TElemType;

typedef struct BiTNode  /* ���ṹ */
{
	TElemType data;		/* ������� */
	struct BiTNode* lchild, * rchild; /* ���Һ���ָ�� */
}BiTNode, * BiTree;

/* ���ڹ��������********************************** */
typedef char String[24]; /*  0�ŵ�Ԫ��Ŵ��ĳ��� */
String str;

Status StrAssign(String T, char* chars);
//***ע***
//����д������+�������ʽ
//�����ᵼ���ض���
/* ************************************************ */


#define ClearBiTree DestroyBiTree

Status InitBiTree(BiTree* T);
void DestroyBiTree(BiTree* T);
void CreateBiTree(BiTree* T);
Status BiTreeEmpty(BiTree T);
int BiTreeDepth(BiTree T);
TElemType Root(BiTree T);
TElemType Value(BiTree p);
void Assign(BiTree p, TElemType value);
void PreOrderTraverse(BiTree T);
void InOrderTraverse(BiTree T);
void PostOrderTraverse(BiTree T);

#endif