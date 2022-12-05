#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_5_2_H
#define CODE_7_5_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 9 /* 存储空间初始分配量 */
#define MAXEDGE 15
#define MAXVEX 9

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码,如OK等 */
typedef int Boolean; /* Boolean是布尔类型,其值是TRUE或FALSE */

typedef char VertexType; /* 顶点类型应由用户定义 */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */

/* 邻接矩阵结构 */
typedef struct
{
	VertexType vexs[MAXVEX]; /* 顶点表 */
	EdgeType arc[MAXVEX][MAXVEX];/* 邻接矩阵,可看作边表 */
	int numVertexes, numEdges; /* 图中当前的顶点数和边数 */
}MGraph;

/* 邻接表结构****************** */
typedef struct EdgeNode /* 边表结点 */
{
	int adjvex;    /* 邻接点域,存储该顶点对应的下标 */
	int weight;		/* 用于存储权值,对于非网图可以不需要 */
	struct EdgeNode* next; /* 链域,指向下一个邻接点 */
}EdgeNode;

typedef struct VertexNode /* 顶点表结点 */
{
	int in;	/* 顶点入度 */
	char data; /* 顶点域,存储顶点信息 */
	EdgeNode* firstedge;/* 边表头指针 */
}VertexNode, AdjList[MAXVEX];

typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges; /* 图中当前顶点数和边数 */
}graphAdjList, * GraphAdjList;
/* **************************** */

/* 用到的队列结构********************************** */
/* 循环队列的顺序存储结构 */
typedef struct
{
	int data[MAXSIZE];
	int front;    	/* 头指针 */
	int rear;		/* 尾指针,若队列不空,指向队列尾元素的下一个位置 */
}Queue;

Status InitQueue(Queue* Q);
Status QueueEmpty(Queue Q);
Status EnQueue(Queue* Q, int e);
Status DeQueue(Queue* Q, int* e);
void CreateMGraph(MGraph* G);
void CreateALGraph(MGraph G, GraphAdjList* GL);
void DFS(GraphAdjList GL, int i);
void DFSTraverse(GraphAdjList GL);
void BFSTraverse(GraphAdjList GL);

#endif
