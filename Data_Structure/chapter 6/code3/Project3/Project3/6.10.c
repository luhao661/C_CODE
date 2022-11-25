#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "6.10.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

TElemType Nil = '#'; /* 字符型以空格符为空 */

static Status visit(TElemType e)
{
	printf("%c ", e);
	return OK;
}

/* 按前序遍历输入二叉线索树中结点的值,构造二叉线索树T */
/* 0(整型)/空格(字符型)表示空结点 */
Status CreateBiThrTree(BiThrTree* T)
{
	TElemType h;
	scanf("%c", &h);

	if (h == Nil)
		*T = NULL;
	else
	{
		*T = (BiThrTree)malloc(sizeof(BiThrNode));

		if (!*T)
			exit(OVERFLOW);
		
		(*T)->data = h; /* 生成根结点(前序) */

		//CreateBiThrTree(&(*T)->lchild); /* 递归构造左子树 */
		//***注***
		//不能写成CreateBiThrTree(T->lchild);(明显理解错了运算符优先级)
		//但可以写成
		CreateBiThrTree(    & (   (*T)->lchild   )   ); /* 递归构造左子树 */
																		//实参：左孩子的指针的地址
		if ((*T)->lchild) /* 有左孩子 */
			(*T)->LTag = Link;
		CreateBiThrTree(&(*T)->rchild); /* 递归构造右子树 */
		if ((*T)->rchild) /* 有右孩子 */
			(*T)->RTag = Link;
	}
	return OK;
}


BiThrTree pre; /* 全局变量,始终指向刚刚访问过的结点 */

/* 中序遍历进行中序线索化 */
static void InThreading(BiThrTree p)
{
	if (p)
	{
		InThreading(p->lchild); /* 递归左子树线索化 */
		if (!p->lchild) /* 没有左孩子 */
		{
			p->LTag = Thread; /* 前驱线索 */
			p->lchild = pre; /* 左孩子指针指向前驱 */
		}
		if (!pre->rchild) /* 前驱没有右孩子 */
		{
			pre->RTag = Thread; /* 后继线索 */
			pre->rchild = p; /* 前驱右孩子指针指向后继(当前结点p) */
		}
		pre = p; /* 保持pre指向p的前驱 */
		InThreading(p->rchild); /* 递归右子树线索化 */
	}
}

/* 中序遍历二叉树T,并将其中序线索化,Thrt指向头结点 */
Status InOrderThreading(BiThrTree* Thrt, BiThrTree T)
{
	*Thrt = (BiThrTree)malloc(sizeof(BiThrNode));

	if (!*Thrt)
		exit(OVERFLOW);
	
	(*Thrt)->LTag = Link; /* 建头结点 */
	(*Thrt)->RTag = Thread;
	(*Thrt)->rchild = (*Thrt); /* 右指针回指 */
	
	if (!T) /* 若二叉树空,则左指针回指 */
		(*Thrt)->lchild = *Thrt;
	else
	{
		(*Thrt)->lchild = T;
		pre = (*Thrt);
		InThreading(T); /* 中序遍历进行中序线索化 */
		pre->rchild = *Thrt;
		pre->RTag = Thread; /* 最后一个结点线索化 */
		(*Thrt)->rchild = pre;
	}
	return OK;
}


//T指向头结点，头结点左链lchild指向根借点，头结点右链rchild
//指向中序遍历的最后一个结点
/* 中序遍历二叉线索树T(头结点)的非递归算法 */
Status InOrderTraverse_Thr(BiThrTree T)
{
	BiThrTree p;

	p = T->lchild; /* p指向根结点 */
	
	while (p != T)
	{ /* 空树或遍历结束时,p==T */
		while (p->LTag == Link)
			p = p->lchild;

		if (!visit(p->data)) /* 访问其左子树为空的结点 */
			return ERROR;
		
		while (p->RTag == Thread && p->rchild != T)
		{
			p = p->rchild;
			visit(p->data); /* 访问后继结点 */
		}
		p = p->rchild;
	}

	return OK;
}
#endif