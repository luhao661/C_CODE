#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_7_2_H
#define CODE_6_7_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */

typedef char TElemType;

typedef struct BiTNode  /* 结点结构 */
{
	TElemType data;		/* 结点数据 */
	struct BiTNode* lchild, * rchild; /* 左右孩子指针 */
}BiTNode, * BiTree;

/* 用于构造二叉树********************************** */
typedef char String[24]; /*  0号单元存放串的长度 */
String str;

Status StrAssign(String T, char* chars);
//***注***
//不能写成声明+定义的形式
//这样会导致重定义
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