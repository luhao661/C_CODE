#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用链式存储结构实现二叉树，使用三种遍历方式
//链接6.7.2.c
#if 1
#include "6.7.2.h"

int main()
{
	int i;
	BiTree T;
	TElemType e1;
	InitBiTree(&T);


	StrAssign(str, "ABDH#K###E##CFI###G#J##");

	CreateBiTree(&T);

	printf("构造空二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	e1 = Root(T);
	printf("二叉树的根为: %c\n", e1);

	printf("\n前序遍历二叉树:");
	PreOrderTraverse(T);
	printf("\n中序遍历二叉树:");
	InOrderTraverse(T);
	printf("\n后序遍历二叉树:");
	PostOrderTraverse(T);
	ClearBiTree(&T);
	printf("\n清除二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T);
	if (!i)
		printf("树空，无根\n");

	return 0;
}
#endif