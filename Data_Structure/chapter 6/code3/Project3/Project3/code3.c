#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用线索二叉树
//链接6.10.c
#if 1
#include "6.10.h"

int main()
{
	BiThrTree H, T;//创建指向节点的指针H和T

	printf("请按前序输入二叉树(如:'ABDH##I##EJ###CF##G##')\n");

	CreateBiThrTree(&T); /* 按前序产生二叉树 */
	InOrderThreading(&H, T); /* 中序遍历,并中序线索化二叉树 */
	printf("中序遍历(输出)二叉线索树:\n");
	InOrderTraverse_Thr(H); /* 中序遍历(输出)二叉线索树 */
	printf("\n");

	return 0;
}
#endif
