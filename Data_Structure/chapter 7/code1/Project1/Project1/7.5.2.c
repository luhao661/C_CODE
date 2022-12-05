#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "7.5.2.h"
#include <stdio.h>
#include <stdlib.h>

/* 用到的队列函数********************************** */

/* 初始化一个空队列Q */
Status InitQueue(Queue* Q)
{
	Q->front = 0;
	Q->rear = 0;
	return  OK;
}

/* 若队列Q为空队列,则返回TRUE,否则返回FALSE */
Status QueueEmpty(Queue Q)
{
	if (Q.front == Q.rear) /* 队列空的标志 */
		return TRUE;
	else
		return FALSE;
}

/* 若队列未满,则插入元素e为Q新的队尾元素 */
Status EnQueue(Queue* Q, int e)
{
	if ((Q->rear + 1) % MAXSIZE == Q->front)	/* 队列满的判断 */
		return ERROR;
	Q->data[Q->rear] = e;			/* 将元素e赋值给队尾 */
	Q->rear = (Q->rear + 1) % MAXSIZE;/* rear指针向后移一位置, */
								/* 若到最后则转到数组头部 */
	return  OK;
}

/* 若队列不空,则删除Q中队头元素,用e返回其值 */
Status DeQueue(Queue* Q, int* e)
{
	if (Q->front == Q->rear)			/* 队列空的判断 */
		return ERROR;
	*e = Q->data[Q->front];				/* 将队头元素赋值给e */
	Q->front = (Q->front + 1) % MAXSIZE;	/* front指针向后移一位置, */
									/* 若到最后则转到数组头部 */
	return  OK;
}
/* ****************************************************** */


void CreateMGraph(MGraph* G)
{
	int i, j;

	G->numEdges = 15;
	G->numVertexes = 9;

	/* 读入顶点信息,建立顶点表 */
	G->vexs[0] = 'A';
	G->vexs[1] = 'B';
	G->vexs[2] = 'C';
	G->vexs[3] = 'D';
	G->vexs[4] = 'E';
	G->vexs[5] = 'F';
	G->vexs[6] = 'G';
	G->vexs[7] = 'H';
	G->vexs[8] = 'I';


	for (i = 0; i < G->numVertexes; i++)/* 初始化图 */
	{
		for (j = 0; j < G->numVertexes; j++)
		{
			G->arc[i][j] = 0;
		}
	}

	G->arc[0][1] = 1;
	G->arc[0][5] = 1;

	G->arc[1][2] = 1;
	G->arc[1][8] = 1;
	G->arc[1][6] = 1;

	G->arc[2][3] = 1;
	G->arc[2][8] = 1;

	G->arc[3][4] = 1;
	G->arc[3][7] = 1;
	G->arc[3][6] = 1;
	G->arc[3][8] = 1;

	G->arc[4][5] = 1;
	G->arc[4][7] = 1;

	G->arc[5][6] = 1;

	G->arc[6][7] = 1;


	for (i = 0; i < G->numVertexes; i++)
	{
		for (j = i; j < G->numVertexes; j++)
		{
			G->arc[j][i] = G->arc[i][j];
		}
	}

}

/* 利用邻接矩阵构建邻接表 */
void CreateALGraph(MGraph G, GraphAdjList* GL)
{
	int i, j;
	EdgeNode* e;

	*GL = (GraphAdjList)malloc(sizeof(graphAdjList));

	(*GL)->numVertexes = G.numVertexes;
	(*GL)->numEdges = G.numEdges;
	for (i = 0; i < G.numVertexes; i++) /* 读入顶点信息,建立顶点表 */
	{
		(*GL)->adjList[i].in = 0;
		(*GL)->adjList[i].data = G.vexs[i];
		(*GL)->adjList[i].firstedge = NULL; 	/* 将边表置为空表 */
	}

	for (i = 0; i < G.numVertexes; i++) /* 建立边表 */
	{
		for (j = G.numVertexes - 1; j >= 0; j--)
		{
			if (G.arc[i][j] == 1)
			{
				e = (EdgeNode*)malloc(sizeof(EdgeNode));

				e->adjvex = j;					/* 邻接序号为j */

				//正常代码下如下
				//e->adjvex=j;					/* 邻接序号为j */   

				e->next = (*GL)->adjList[i].firstedge;	/* 将当前顶点上的指向的结点指针赋值给e */
				(*GL)->adjList[i].firstedge = e;		/* 将当前顶点的指针指向e */
				(*GL)->adjList[j].in++;

			}
		}
	}
}

Boolean visited[MAXSIZE]; /* 访问标志的数组 */

/* 邻接表的深度优先递归算法 */
void DFS(GraphAdjList GL, int i)
{
	EdgeNode* p;
	visited[i] = TRUE;
	printf("%c ", GL->adjList[i].data);/* 打印顶点,也可以其它操作 */
	p = GL->adjList[i].firstedge;
	while (p)
	{
		if (!visited[p->adjvex])
			DFS(GL, p->adjvex);/* 对为访问的邻接顶点递归调用 */
		p = p->next;
	}
}

/* 邻接表的深度遍历操作 */
void DFSTraverse(GraphAdjList GL)
{
	int i;
	for (i = 0; i < GL->numVertexes; i++)
		visited[i] = FALSE; /* 初始所有顶点状态都是未访问过状态 */
	for (i = 0; i < GL->numVertexes; i++)
		if (!visited[i]) /* 对未访问过的顶点调用DFS,若是连通图,只会执行一次 */
			DFS(GL, i);
}

/* 邻接表的广度遍历算法 */
void BFSTraverse(GraphAdjList GL)
{
	int i;
	EdgeNode* p;
	Queue Q;
	for (i = 0; i < GL->numVertexes; i++)
		visited[i] = FALSE;
	InitQueue(&Q);
	for (i = 0; i < GL->numVertexes; i++)
	{
		if (!visited[i])
		{
			visited[i] = TRUE;
			printf("%c ", GL->adjList[i].data);/* 打印顶点,也可以其它操作 */
			EnQueue(&Q, i);
			while (!QueueEmpty(Q))
			{
				DeQueue(&Q, &i);
				p = GL->adjList[i].firstedge;	/* 找到当前顶点的边表链表头指针 */
				while (p)
				{
					if (!visited[p->adjvex])	/* 若此顶点未被访问 */
					{
						visited[p->adjvex] = TRUE;
						printf("%c ", GL->adjList[p->adjvex].data);
						EnQueue(&Q, p->adjvex);	/* 将此顶点入队列 */
					}
					p = p->next;	/* 指针指向下一个邻接点 */
				}
			}
		}
	}
}
#endif
