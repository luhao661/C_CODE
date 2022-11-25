#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "6.10.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

TElemType Nil = '#'; /* �ַ����Կո��Ϊ�� */

static Status visit(TElemType e)
{
	printf("%c ", e);
	return OK;
}

/* ��ǰ�������������������н���ֵ,�������������T */
/* 0(����)/�ո�(�ַ���)��ʾ�ս�� */
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
		
		(*T)->data = h; /* ���ɸ����(ǰ��) */

		//CreateBiThrTree(&(*T)->lchild); /* �ݹ鹹�������� */
		//***ע***
		//����д��CreateBiThrTree(T->lchild);(������������������ȼ�)
		//������д��
		CreateBiThrTree(    & (   (*T)->lchild   )   ); /* �ݹ鹹�������� */
																		//ʵ�Σ����ӵ�ָ��ĵ�ַ
		if ((*T)->lchild) /* ������ */
			(*T)->LTag = Link;
		CreateBiThrTree(&(*T)->rchild); /* �ݹ鹹�������� */
		if ((*T)->rchild) /* ���Һ��� */
			(*T)->RTag = Link;
	}
	return OK;
}


BiThrTree pre; /* ȫ�ֱ���,ʼ��ָ��ոշ��ʹ��Ľ�� */

/* ��������������������� */
static void InThreading(BiThrTree p)
{
	if (p)
	{
		InThreading(p->lchild); /* �ݹ������������� */
		if (!p->lchild) /* û������ */
		{
			p->LTag = Thread; /* ǰ������ */
			p->lchild = pre; /* ����ָ��ָ��ǰ�� */
		}
		if (!pre->rchild) /* ǰ��û���Һ��� */
		{
			pre->RTag = Thread; /* ������� */
			pre->rchild = p; /* ǰ���Һ���ָ��ָ����(��ǰ���p) */
		}
		pre = p; /* ����preָ��p��ǰ�� */
		InThreading(p->rchild); /* �ݹ������������� */
	}
}

/* �������������T,����������������,Thrtָ��ͷ��� */
Status InOrderThreading(BiThrTree* Thrt, BiThrTree T)
{
	*Thrt = (BiThrTree)malloc(sizeof(BiThrNode));

	if (!*Thrt)
		exit(OVERFLOW);
	
	(*Thrt)->LTag = Link; /* ��ͷ��� */
	(*Thrt)->RTag = Thread;
	(*Thrt)->rchild = (*Thrt); /* ��ָ���ָ */
	
	if (!T) /* ����������,����ָ���ָ */
		(*Thrt)->lchild = *Thrt;
	else
	{
		(*Thrt)->lchild = T;
		pre = (*Thrt);
		InThreading(T); /* ��������������������� */
		pre->rchild = *Thrt;
		pre->RTag = Thread; /* ���һ����������� */
		(*Thrt)->rchild = pre;
	}
	return OK;
}


//Tָ��ͷ��㣬ͷ�������lchildָ�����㣬ͷ�������rchild
//ָ��������������һ�����
/* �����������������T(ͷ���)�ķǵݹ��㷨 */
Status InOrderTraverse_Thr(BiThrTree T)
{
	BiThrTree p;

	p = T->lchild; /* pָ������ */
	
	while (p != T)
	{ /* �������������ʱ,p==T */
		while (p->LTag == Link)
			p = p->lchild;

		if (!visit(p->data)) /* ������������Ϊ�յĽ�� */
			return ERROR;
		
		while (p->RTag == Thread && p->rchild != T)
		{
			p = p->rchild;
			visit(p->data); /* ���ʺ�̽�� */
		}
		p = p->rchild;
	}

	return OK;
}
#endif