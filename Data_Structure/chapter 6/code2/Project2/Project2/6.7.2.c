#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "6.7.2.h"
#include <stdio.h>
#include <stdlib.h>//NULL
#include <math.h>//OVERFLOW
#include <string.h>//strlen()

TElemType Nil = ' '; /* 字符型以空格符为空 */
int treeIndex = 1;

Status StrAssign(String T, char* chars)
{
	int i;
	if (strlen(chars) > MAXSIZE)
		return ERROR;
	else
	{
		T[0] = strlen(chars);
		for (i = 1; i <= T[0]; i++)
			T[i] = *(chars + i - 1);
		return OK;
	}
}

static Status visit(TElemType e)
{
	printf("%c ", e);
	return OK;
}

/* 构造空二叉树T */
Status InitBiTree(BiTree* T)
{
	*T = NULL;
	return OK;
}

/* 初始条件: 二叉树T存在。操作结果: 销毁二叉树T */
void DestroyBiTree(BiTree* T)
{
	if (*T)
	{
		if ((*T)->lchild) /* 有左孩子 */
			DestroyBiTree(&(*T)->lchild); /* 销毁左孩子子树 */
		if ((*T)->rchild) /* 有右孩子 */
			DestroyBiTree(&(*T)->rchild); /* 销毁右孩子子树 */
		free(*T); /* 释放根结点 */
		*T = NULL; /* 空指针赋0 */
	}
}

/* 按前序输入二叉树中结点的值（一个字符） */
/* #表示空树，构造二叉链表表示二叉树T。 */
void CreateBiTree(BiTree* T)
{
	TElemType ch;

	/* scanf("%c",&ch); */
	ch = str[treeIndex++];

	if (ch == '#')
		*T = NULL;
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (!*T)
			exit(OVERFLOW);
		(*T)->data = ch; /* 生成根结点 */
		CreateBiTree(&(*T)->lchild); /* 构造左子树 */
		CreateBiTree(&(*T)->rchild); /* 构造右子树 */
	}
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 若T为空二叉树,则返回TRUE,否则FALSE */
Status BiTreeEmpty(BiTree T)
{
	if (T)
		return FALSE;
	else
		return TRUE;
}

/* 初始条件: 二叉树T存在。操作结果: 返回T的深度 */
int BiTreeDepth(BiTree T)
{
	int i, j;
	if (!T)
		return 0;
	if (T->lchild)
		i = BiTreeDepth(T->lchild);
	else
		i = 0;
	if (T->rchild)
		j = BiTreeDepth(T->rchild);
	else
		j = 0;
	return i > j ? i + 1 : j + 1;
}

/* 初始条件: 二叉树T存在。操作结果: 返回T的根 */
TElemType Root(BiTree T)
{
	if (BiTreeEmpty(T))
		return Nil;
	else
		return T->data;
}

/* 初始条件: 二叉树T存在，p指向T中某个结点 */
/* 操作结果: 返回p所指结点的值 */
TElemType Value(BiTree p)
{
	return p->data;
}

/* 给p所指结点赋值为value */
void Assign(BiTree p, TElemType value)
{
	p->data = value;
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 前序递归遍历T */
void PreOrderTraverse(BiTree T)
{
	if (T == NULL)
		return;
	printf("%c", T->data);/* 显示结点数据，可以更改为其它对结点操作 */
	PreOrderTraverse(T->lchild); /* 再先序遍历左子树 */
	PreOrderTraverse(T->rchild); /* 最后先序遍历右子树 */
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 中序递归遍历T */
void InOrderTraverse(BiTree T)
{
	if (T == NULL)
		return;
	InOrderTraverse(T->lchild); /* 中序遍历左子树 */
	printf("%c", T->data);/* 显示结点数据，可以更改为其它对结点操作 */
	InOrderTraverse(T->rchild); /* 最后中序遍历右子树 */
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 后序递归遍历T */
void PostOrderTraverse(BiTree T)
{
	if (T == NULL)
		return;
	PostOrderTraverse(T->lchild); /* 先后序遍历左子树  */
	PostOrderTraverse(T->rchild); /* 再后序遍历右子树  */
	printf("%c", T->data);/* 显示结点数据，可以更改为其它对结点操作 */
}


#endif