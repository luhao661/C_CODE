#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用顺序存储结构实现二叉树(一般只用于完全二叉树)
//链接6.7.1.c
#if 1
#include "6.7.1.h"

int main()
{
	Status i;
	Position p;
	TElemType e;
	SqBiTree T;

	InitBiTree(T);
	CreateBiTree(T);
	printf("建立二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T, &e);

	if (i)
		printf("二叉树的根为：%d\n", e);
	else
		printf("树空，无根\n");

	printf("层序遍历二叉树:\n");
	LevelOrderTraverse(T);
	printf("前序遍历二叉树:\n");
	PreOrderTraverse(T);
	printf("中序遍历二叉树:\n");
	InOrderTraverse(T);
	printf("后序遍历二叉树:\n");
	PostOrderTraverse(T);
	printf("修改结点的层号3本层序号2。");
	p.level = 3;
	p.order = 2;
	e = Value(T, p);
	printf("待修改结点的原值为%d请输入新值:50 ", e);
	e = 50;
	Assign(T, p, e);
	printf("前序遍历二叉树:\n");
	PreOrderTraverse(T);
	printf("结点%d的双亲为%d,左右孩子分别为", e, Parent(T, e));
	printf("%d,%d,左右兄弟分别为", LeftChild(T, e), RightChild(T, e));
	printf("%d,%d\n", LeftSibling(T, e), RightSibling(T, e));
	ClearBiTree(T);
	printf("清除二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T, &e);
	if (i)
		printf("二叉树的根为：%d\n", e);
	else
		printf("树空，无根\n");

	return 0;
}
#endif