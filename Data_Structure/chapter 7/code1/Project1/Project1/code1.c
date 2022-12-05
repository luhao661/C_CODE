#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用邻接矩阵存储结构来表示图
//建立无向网图(即每条边上带有权值)
//缺陷：对于稀疏有向图，会造成存储空间的极大浪费
//链接无
#if 0
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* 最大顶点数，应由用户定义 */
#define GRAPH_INFINITY 65535 /* 用65535来代表∞ */

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char VertexType; /* 顶点类型应由用户定义  */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */

typedef struct
{
	VertexType vexs[MAXVEX]; /* 顶点表 */
	EdgeType arc[MAXVEX][MAXVEX];/* 邻接矩阵，可看作边表 */
	int numNodes, numEdges; /* 图中当前的顶点数和边数  */
}MGraph;

/* 建立无向网图的邻接矩阵表示 */
void CreateMGraph(MGraph* G)
{
	int i, j, k, w;

	printf("输入顶点数和边数:\n");
	//***注***
	//必须输入一个整型数字，一个逗号，再输入一个整型数字
	scanf("%d,%d", &G->numNodes, &G->numEdges); /* 输入顶点数和边数 */
	
	/* 读入顶点信息,建立顶点表 */
	for (i = 0; i < G->numNodes; i++) 
		scanf("%c", & G->vexs[i]);

	/* 邻接矩阵初始化 */
	//二维数组除对角线外，所有元素均赋值为GRAPH_INFINITY
	for (i = 0; i < G->numNodes; i++)
	{
		for (j = 0; j < G->numNodes; j++)
			G->arc[i][j] = GRAPH_INFINITY;
		G->arc[i][i] = 0;
	}

	/* 读入numEdges条边，建立邻接矩阵 */
	for (k = 0; k < G->numEdges; k++) 
	{
		printf("输入边(vi,vj)的下标i，下标j和权w:\n");
		scanf("%d,%d,%d", &i, &j, &w); /* 输入边(vi,vj)上的权w */
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j]; /* 因为是无向图，矩阵对称 */
	}
}

int main(void)
{
	MGraph G;
	CreateMGraph(&G);

	return 0;
}
#endif


//使用邻接表存储结构来表示图
//建立无向网图(即每条边上带有权值)
//缺陷：邻接表要了解入度，必须遍历全图；逆邻接表要了解出度，必须遍历全图
//链接无
#if 0
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* 最大顶点数,应由用户定义 */

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码,如OK等 */
typedef char VertexType; /* 顶点类型应由用户定义 */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */

/* 顶点表结点 */
typedef struct VertexNode 
{
	VertexType data; /* 顶点域,存储顶点信息 */
	EdgeNode* firstedge;/* 边表头指针 */
}VertexNode, AdjList[MAXVEX];//创建顶点数组类型的别名

/* 边表结点  */
typedef struct EdgeNode 
{
	int adjvex;    /* 邻接点域,存储该顶点对应的下标 */
	EdgeType weight_info;		/* 用于存储权值,对于非网图可以不需要 */
	struct EdgeNode* next; /* 链域,指向下一个邻接点 */
}EdgeNode;

typedef struct
{
	AdjList adjList;//建立顶点数组
	int numNodes, numEdges; /* 图中当前顶点数和边数 */
}GraphAdjList;

/* 建立图的邻接表结构 */
void  CreateALGraph(GraphAdjList* G)
{
	int i, j, k;
	EdgeNode* e;

	printf("输入顶点数和边数:\n");
	scanf("%d,%d", &G->numNodes, &G->numEdges); /* 输入顶点数和边数 */

	/* 读入顶点信息,建立顶点表 */
	for (i = 0; i < G->numNodes; i++) 
	{
		scanf("%c", & G->adjList[i].data); 	/* 输入顶点信息 */
		G->adjList[i].firstedge = NULL; 	/* 将边表置为空表 */
	}

	/* 建立边表 */
	for (k = 0; k < G->numEdges; k++)
	{
		printf("输入边(vi,vj)上的顶点序号:\n");
		scanf("%d,%d", &i, &j); /* 输入边(vi,vj)上的顶点序号 */

		//***注***
		//对于无向网图，若一条边和此边上的两个顶点确定
		//则对于邻接表来说，类似于孩子表示法
		//若V0和V1是之间有一条边来连通，则
		//顶点表的V0的firstedge必存有V1节点的下标
		//顶点表的V1的firstedge必存有V0节点的下标
		e = (EdgeNode*)malloc(sizeof(EdgeNode)); /* 向内存申请空间,生成边表结点 */
		e->adjvex = j;					/* 邻接序号为j */
		e->next = G->adjList[i].firstedge;	/* 将e的指针指向当前顶点上指向的结点 */
		G->adjList[i].firstedge = e;		/* 将当前顶点的指针指向e */

		e = (EdgeNode*)malloc(sizeof(EdgeNode)); /* 向内存申请空间,生成边表结点 */
		e->adjvex = i;					/* 邻接序号为i */
		e->next = G->adjList[j].firstedge;	/* 将e的指针指向当前顶点上指向的结点 */
		G->adjList[j].firstedge = e;		/* 将当前顶点的指针指向e */
	}
}

int main(void)
{
	GraphAdjList G;
	CreateALGraph(&G);

	return 0;
}
#endif
//要执行删除一条边的操作，可以使用邻接多重表来优化无向图的存储结构


//图邻接矩阵深度优先遍历(DFS)、广度优先遍历(BFS)
//链接7.5.1.c
#if 0
#include "7.5.1.h"

int main(void)
{
	MGraph G;
	CreateMGraph(&G);
	printf("\n深度遍历：");
	DFSTraverse(G);
	printf("\n广度遍历：");
	BFSTraverse(G);
	return 0;
}
#endif


//图表邻接结构深度优先遍历(DFS)、广度优先遍历(BFS)
//链接7.5.2.c
#if 1
#include "7.5.2.h"

int main(void)
{
	MGraph G;
	GraphAdjList GL;
	CreateMGraph(&G);
	CreateALGraph(G, &GL);

	printf("\n深度遍历:");
	DFSTraverse(GL);
	printf("\n广度遍历:");
	BFSTraverse(GL);
	return 0;
}
#endif