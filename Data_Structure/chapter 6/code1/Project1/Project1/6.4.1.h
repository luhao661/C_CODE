#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_4_1_H
#define CODE_6_4_1_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MAX_TREE_SIZE 100 /* 二叉树的最大结点数 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int TElemType;  /* 树结点的数据类型，目前暂定为整型 */
typedef TElemType SqBiTree[MAX_TREE_SIZE]; /* 0号单元存储根结点  */

typedef struct
{
	int level, order; /* 结点的层,本层序号(按满二叉树计算) */
}Position;

//***注***不应写在.h文件，因为这样被code1.c和6.4.1.c文件包含后
//会造成重定义
//TElemType Nil = 0; /*  设整型以0为空 */

//***注***应该写在.h文件或code1.c文件中，
//而不是6.4.1.c中，因为这样的话code1.c中不可见
#define ClearBiTree InitBiTree /* 在顺序存储结构中，两函数完全一样 */

Status InitBiTree(SqBiTree T);
Status CreateBiTree(SqBiTree T);
Status BiTreeEmpty(SqBiTree T);
int BiTreeDepth(SqBiTree T);
Status Root(SqBiTree T, TElemType* e);
TElemType Value(SqBiTree T, Position e);
Status Assign(SqBiTree T, Position e, TElemType value);
TElemType Parent(SqBiTree T, TElemType e);
TElemType LeftChild(SqBiTree T, TElemType e);
TElemType RightChild(SqBiTree T, TElemType e);
TElemType LeftSibling(SqBiTree T, TElemType e);
TElemType RightSibling(SqBiTree T, TElemType e);
void PreTraverse(SqBiTree T, int e);
Status PreOrderTraverse(SqBiTree T);
void InTraverse(SqBiTree T, int e);
Status InOrderTraverse(SqBiTree T);
void PostTraverse(SqBiTree T, int e);
Status PostOrderTraverse(SqBiTree T);
void LevelOrderTraverse(SqBiTree T);
void Print(SqBiTree T);

#endif