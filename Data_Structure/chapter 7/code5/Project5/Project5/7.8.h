#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_8_H
#define CODE_7_8_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXEDGE 20
#define MAXVEX 14

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */

/* 邻接矩阵结构 */
typedef struct
{
	int vexs[MAXVEX];
	int arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;

/* 邻接表结构****************** */
typedef struct EdgeNode /* 边表结点  */
{
	int adjvex;    /* 邻接点域，存储该顶点对应的下标 */
	int weight;		/* 用于存储权值，对于非网图可以不需要 */
	struct EdgeNode* next; /* 链域，指向下一个邻接点 */
}EdgeNode;

typedef struct VertexNode /* 顶点表结点 */
{
	int in;	/* 顶点入度 */
	int data; /* 顶点域，存储顶点信息 */
	EdgeNode* firstedge;/* 边表头指针 */
}VertexNode, AdjList[MAXVEX];

typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges; /* 图中当前顶点数和边数 */
}graphAdjList, * GraphAdjList;

void CreateMGraph(MGraph* G);
void CreateALGraph(MGraph G, GraphAdjList* GL);
Status TopologicalSort(GraphAdjList GL);

#endif

