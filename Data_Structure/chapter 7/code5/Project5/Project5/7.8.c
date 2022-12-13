#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <stdio.h>
#include <stdlib.h>
#include "7.8.h"

void CreateMGraph(MGraph* G)/* 构件图 */
{
	int i, j;

	/* printf("请输入边数和顶点数:"); */
	G->numEdges = MAXEDGE;
	G->numVertexes = MAXVEX;

	for (i = 0; i < G->numVertexes; i++)/* 初始化图 */
	{
		G->vexs[i] = i;
	}

	for (i = 0; i < G->numVertexes; i++)/* 初始化图 */
	{
		for (j = 0; j < G->numVertexes; j++)
		{
			G->arc[i][j] = 0;
		}
	}

	G->arc[0][4] = 1;
	G->arc[0][5] = 1;
	G->arc[0][11] = 1;
	G->arc[1][2] = 1;
	G->arc[1][4] = 1;
	G->arc[1][8] = 1;
	G->arc[2][5] = 1;
	G->arc[2][6] = 1;
	G->arc[2][9] = 1;
	G->arc[3][2] = 1;
	G->arc[3][13] = 1;
	G->arc[4][7] = 1;
	G->arc[5][8] = 1;
	G->arc[5][12] = 1;
	G->arc[6][5] = 1;
	G->arc[8][7] = 1;
	G->arc[9][10] = 1;
	G->arc[9][11] = 1;
	G->arc[10][13] = 1;
	G->arc[12][9] = 1;

}

/* 利用邻接矩阵构建邻接表 */
void CreateALGraph(MGraph G, GraphAdjList* GL)
{
	int i, j;
	EdgeNode* e;

	*GL = (GraphAdjList)malloc(sizeof(graphAdjList));

	(*GL)->numVertexes = G.numVertexes;
	(*GL)->numEdges = G.numEdges;

	for (i = 0; i < G.numVertexes; i++) /* 读入顶点信息，建立顶点表 */
	{
		(*GL)->adjList[i].in = 0;
		(*GL)->adjList[i].data = G.vexs[i];
		(*GL)->adjList[i].firstedge = NULL; 	/* 将边表置为空表 */
	}

	for (i = 0; i < G.numVertexes; i++) /* 建立边表 */
	{
		for (j = 0; j < G.numVertexes; j++)
		{
			if (G.arc[i][j] == 1)
			{
				e = (EdgeNode*)malloc(sizeof(EdgeNode));
				e->adjvex = j;					/* 邻接序号为j  */
				e->next = (*GL)->adjList[i].firstedge;	/* 将当前顶点上的指向的结点指针赋值给e */

				(*GL)->adjList[i].firstedge = e;		/* 将当前顶点的指针指向e  */
				(*GL)->adjList[j].in++;
			}
		}
	}
}

/* 拓扑排序，若GL无回路，则输出拓扑排序序列并返回1，若有回路返回0。 */
Status TopologicalSort(GraphAdjList GL)
{
	EdgeNode* e;

	int i, k, gettop;
	int top = 0;  /* 用于栈指针下标  */
	int count = 0;/* 用于统计输出顶点的个数  */
	int* stack;	/* 建栈将入度为0的顶点入栈  */

	stack = (int*)malloc(GL->numVertexes * sizeof(int));

	for (i = 0; i < GL->numVertexes; i++)
		if (0 == GL->adjList[i].in) /* 将入度为0的顶点入栈 */
			stack[++top] = i;

	while (top != 0)
	{
		gettop = stack[top--];
		printf("%d -> ", GL->adjList[gettop].data);
		count++;        /* 输出i号顶点，并计数 */
		for (e = GL->adjList[gettop].firstedge;        e;     e = e->next)
		{
			k = e->adjvex;
			/* 将i号顶点的邻接点的入度减1，如果减1后为0，则入栈 */
			if (!(--GL->adjList[k].in)) 
				stack[++top] = k;
		}
	}

	printf("\n");
	if (count < GL->numVertexes)//若count小于顶点数，则说明存在环
		return ERROR;
	else
		return OK;
}
#endif
