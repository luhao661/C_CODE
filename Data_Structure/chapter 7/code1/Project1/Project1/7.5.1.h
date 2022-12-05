#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_5_1_H
#define CODE_7_5_1_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int Boolean; /* Boolean是布尔类型,其值是TRUE或FALSE */

typedef char VertexType; /* 顶点类型应由用户定义 */
typedef int EdgeType; /* 边上的权值类型应由用户定义 */

#define MAXSIZE 9 /* 存储空间初始分配量 */
#define MAXEDGE 15
#define MAXVEX 9

typedef struct
{
	VertexType vexs[MAXVEX]; /* 顶点表 */
	EdgeType arc[MAXVEX][MAXVEX];/* 邻接矩阵，可看作边表 */
	int numVertexes, numEdges; /* 图中当前的顶点数和边数 */
}MGraph;

/**********************用到的队列结构*****************************/

/* 循环队列的顺序存储结构 */
typedef struct
{
	int data[MAXSIZE];
	int front;    	/* 头指针 */
	int rear;		/* 尾指针，若队列不空，指向队列尾元素的下一个位置 */
}Queue;

Status InitQueue(Queue* Q);
Status QueueEmpty(Queue Q);
Status EnQueue(Queue* Q, int e);
Status DeQueue(Queue* Q, int* e);
void CreateMGraph(MGraph* G);
void DFS(MGraph G, int i);
void DFSTraverse(MGraph G);
void BFSTraverse(MGraph G);

#endif
