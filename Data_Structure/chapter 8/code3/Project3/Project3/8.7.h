#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_8_7_H
#define CODE_8_7_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */


/* 二叉树的二叉链表结点结构定义 */
typedef  struct BiTNode	/* 结点结构 */
{
	int data;	/* 结点数据 */
	int bf; /*  结点的平衡因子 */
	struct BiTNode* lchild, * rchild;	/* 左右孩子指针 */
} BiTNode, * BiTree;

Status InsertAVL(BiTree* T, int e, Status* taller);

#endif

