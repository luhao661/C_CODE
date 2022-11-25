#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_7_2_H
#define CODE_6_7_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码,如OK等 */
typedef char TElemType;
typedef enum { Link, Thread } PointerTag;	
					/* Link=0表示指向左右孩子指针, */
					/* Thread=1表示指向前驱或后继的线索 */
typedef  struct BiThrNode	/* 二叉线索存储结点结构 */
{
	TElemType data;	/* 结点数据 */
	struct BiThrNode* lchild, * rchild;	/* 左右孩子指针，或前驱后继的指针 */
	PointerTag LTag;
	PointerTag RTag;		/* 左右标志 */
} BiThrNode, * BiThrTree;//节点的别名，指向节点的指针的别名

									//节点的指针的指针
Status CreateBiThrTree(BiThrTree* T);
Status InOrderThreading(BiThrTree* Thrt, BiThrTree T);
Status InOrderTraverse_Thr(BiThrTree T);
#endif