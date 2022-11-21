#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "6.4.1.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//powl()

TElemType Nil = 0; /*  设整型以0为空 */

static Status visit(TElemType c)
{
	printf("%d ", c);
	return OK;
}

/* 构造空二叉树T。因为T是固定数组，不会改变，故不需要& */
Status InitBiTree(SqBiTree T)
{
	int i;
	for (i = 0; i < MAX_TREE_SIZE; i++)
		T[i] = Nil; /* 初值为空 */
	return OK;
}

/* 按层序次序输入二叉树中结点的值(字符型或整型), 构造顺序存储的二叉树T */
Status CreateBiTree(SqBiTree T)
{
	int i = 0;
	printf("请按层序输入结点的值(整型)，0表示空结点，输999结束。结点数≤%d:\n", MAX_TREE_SIZE);
	while (i < 10)
	{
		T[i] = i + 1;

		if (i != 0 && T[(i + 1) / 2 - 1] == Nil && T[i] != Nil) /* 此结点(不空)无双亲且不是根 */
		{
			printf("出现无双亲的非根结点%d\n", T[i]);
			exit(ERROR);
		}
		i++;
	}
	while (i < MAX_TREE_SIZE)
	{
		T[i] = Nil; /* 将空赋值给T的后面的结点 */
		i++;
	}

	return OK;
}

//***注***不能放在此.c文件中，因为预处理指令是内部链接的，code1.c文件(翻译单元)中不可见
//#define ClearBiTree InitBiTree /* 在顺序存储结构中，两函数完全一样 */

/* 初始条件: 二叉树T存在 */
/* 操作结果: 若T为空二叉树,则返回TRUE,否则FALSE */
Status BiTreeEmpty(SqBiTree T)
{
	if (T[0] == Nil) /* 根结点为空,则树空 */
		return TRUE;
	else
		return FALSE;
}

/* 初始条件: 二叉树T存在。操作结果: 返回T的深度 */
int BiTreeDepth(SqBiTree T)
{
	int i, j = -1;
	for (i = MAX_TREE_SIZE - 1; i >= 0; i--) /* 找到最后一个结点 */
		if (T[i] != Nil)
			break;
	i++;
	do
		j++;
	while (i >= powl(2, j));/* 计算2的j次幂。 */
	return j;
}

/* 初始条件: 二叉树T存在 */
/* 操作结果:  当T不空,用e返回T的根,返回OK;否则返回ERROR,e无定义 */
Status Root(SqBiTree T, TElemType* e)
{
	if (BiTreeEmpty(T)) /* T空 */
		return ERROR;
	else
	{
		*e = T[0];
		return OK;
	}
}

/* 初始条件: 二叉树T存在,e是T中某个结点(的位置) */
/* 操作结果: 返回处于位置e(层,本层序号)的结点的值 */
TElemType Value(SqBiTree T, Position e)
{
	return T[(int)powl(2, e.level - 1) + e.order - 2];
}

/* 初始条件: 二叉树T存在,e是T中某个结点(的位置) */
/* 操作结果: 给处于位置e(层,本层序号)的结点赋新值value */
Status Assign(SqBiTree T, Position e, TElemType value)
{
	int i = (int)powl(2, e.level - 1) + e.order - 2; /* 将层、本层序号转为矩阵的序号 */
	if (value != Nil && T[(i + 1) / 2 - 1] == Nil) /* 给叶子赋非空值但双亲为空 */
		return ERROR;
	else if (value == Nil && (T[i * 2 + 1] != Nil || T[i * 2 + 2] != Nil)) /*  给双亲赋空值但有叶子（不空） */
		return ERROR;
	T[i] = value;
	return OK;
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 若e是T的非根结点,则返回它的双亲,否则返回＂空＂ */
TElemType Parent(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* 空树 */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* 找到e */
			return T[(i + 1) / 2 - 1];
	return Nil; /* 没找到e */
}


/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的左孩子。若e无左孩子,则返回＂空＂ */
TElemType LeftChild(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* 空树 */
		return Nil;
	for (i = 0; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* 找到e */
			return T[i * 2 + 1];
	return Nil; /* 没找到e */
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的右孩子。若e无右孩子,则返回＂空＂ */
TElemType RightChild(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* 空树 */
		return Nil;
	for (i = 0; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* 找到e */
			return T[i * 2 + 2];
	return Nil; /* 没找到e */
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的左兄弟。若e是T的左孩子或无左兄弟,则返回＂空＂ */
TElemType LeftSibling(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* 空树 */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e && i % 2 == 0) /* 找到e且其序号为偶数(是右孩子) */
			return T[i - 1];
	return Nil; /* 没找到e */
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的右兄弟。若e是T的右孩子或无右兄弟,则返回＂空＂ */
TElemType RightSibling(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* 空树 */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e && i % 2) /* 找到e且其序号为奇数(是左孩子) */
			return T[i + 1];
	return Nil; /* 没找到e */
}

/* PreOrderTraverse()调用 */
void PreTraverse(SqBiTree T, int e)
{
	visit(T[e]);
	if (T[2 * e + 1] != Nil) /* 左子树不空 */
		PreTraverse(T, 2 * e + 1);
	if (T[2 * e + 2] != Nil) /* 右子树不空 */
		PreTraverse(T, 2 * e + 2);
}

/* 初始条件: 二叉树存在 */
/* 操作结果: 先序遍历T。 */
Status PreOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* 树不空 */
		PreTraverse(T, 0);
	printf("\n");
	return OK;
}

/* InOrderTraverse()调用 */
void InTraverse(SqBiTree T, int e)
{
	if (T[2 * e + 1] != Nil) /* 左子树不空 */
		InTraverse(T, 2 * e + 1);
	visit(T[e]);
	if (T[2 * e + 2] != Nil) /* 右子树不空 */
		InTraverse(T, 2 * e + 2);
}

/* 初始条件: 二叉树存在 */
/* 操作结果: 中序遍历T。 */
Status InOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* 树不空 */
		InTraverse(T, 0);
	printf("\n");
	return OK;
}

/* PostOrderTraverse()调用 */
void PostTraverse(SqBiTree T, int e)
{
	if (T[2 * e + 1] != Nil) /* 左子树不空 */
		PostTraverse(T, 2 * e + 1);
	if (T[2 * e + 2] != Nil) /* 右子树不空 */
		PostTraverse(T, 2 * e + 2);
	visit(T[e]);
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 后序遍历T。 */
Status PostOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* 树不空 */
		PostTraverse(T, 0);
	printf("\n");
	return OK;
}

/* 层序遍历二叉树 */
void LevelOrderTraverse(SqBiTree T)
{
	int i = MAX_TREE_SIZE - 1, j;
	while (T[i] == Nil)
		i--; /* 找到最后一个非空结点的序号 */
	for (j = 0; j <= i; j++)  /* 从根结点起,按层序遍历二叉树 */
		if (T[j] != Nil)
			visit(T[j]); /* 只遍历非空的结点 */
	printf("\n");
}

/* 逐层、按本层序号输出二叉树 */
void Print(SqBiTree T)
{
	int j, k;
	Position p;
	TElemType e;
	for (j = 1; j <= BiTreeDepth(T); j++)
	{
		printf("第%d层: ", j);
		for (k = 1; k <= powl(2, j - 1); k++)
		{
			p.level = j;
			p.order = k;
			e = Value(T, p);
			if (e != Nil)
				printf("%d:%d ", k, e);
		}
		printf("\n");
	}
}
#endif