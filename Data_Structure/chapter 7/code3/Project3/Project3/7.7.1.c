#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include "7.7.1.h"

/* 构件图 */
void CreateMGraph(MGraph* G)
{
	int i, j;

	/* printf("请输入边数和顶点数:"); */
	G->numEdges = 16;
	G->numVertexes = 9;

	for (i = 0; i < G->numVertexes; i++)/* 初始化图 */
	{
		G->vexs[i] = i;
	}

	for (i = 0; i < G->numVertexes; i++)/* 初始化图 */
	{
		for (j = 0; j < G->numVertexes; j++)
		{
			if (i == j)
				G->arc[i][j] = 0;
			else
				G->arc[i][j] = G->arc[j][i] = GRAPH_INFINITY;
		}
	}

	G->arc[0][1] = 1;
	G->arc[0][2] = 5;
	G->arc[1][2] = 3;
	G->arc[1][3] = 7;
	G->arc[1][4] = 5;

	G->arc[2][4] = 1;
	G->arc[2][5] = 7;
	G->arc[3][4] = 2;
	G->arc[3][6] = 3;
	G->arc[4][5] = 3;

	G->arc[4][6] = 6;
	G->arc[4][7] = 9;
	G->arc[5][7] = 5;
	G->arc[6][7] = 2;
	G->arc[6][8] = 7;

	G->arc[7][8] = 4;


	for (i = 0; i < G->numVertexes; i++)
	{
		for (j = i; j < G->numVertexes; j++)
		{
			G->arc[j][i] = G->arc[i][j];
		}
	}

}

/*  Dijkstra算法，求有向网G的v0顶点到其余顶点v的
     最短路径P[v]及带权长度D[v] */
/*  P[v]的值为前驱顶点下标,D[v]表示v0到v的最短路径长度和 */
void ShortestPath_Dijkstra(MGraph G, int v0, Patharc* P,
	ShortPathTable* D)
{
	int v, w, k, min;
	/* final[w]=1表示求得顶点v0至vw的最短路径 */
	int final[MAXVEX];

	for (v = 0; v < G.numVertexes; v++)    /* 初始化数据 */
	{
		//所有的点都未找到最短路径
		final[v] = 0;			/* 全部顶点初始化为未知最短路径状态 */
		(*D)[v] = G.arc[v0][v];/* 将与v0点有连线的顶点加上权值 */
		//目前没有路径
		(*P)[v] = -1;				/* 初始化路径数组P为-1  */
	}

	(*D)[v0] = 0;  /* v0至v0路径为0 */
	final[v0] = 1;    /* v0至v0不需要求路径 */ //final数组此时为[1 0 0 0 0 0 0 0 0]

	/* 开始主循环，每次求得v0到某个v顶点的最短路径 */
	//因此循环从1开始
	for (v = 1; v < G.numVertexes; v++)
	{
		min = GRAPH_INFINITY;    /* 当前所知离v0顶点的最近距离 */

		for (w = 0; w < G.numVertexes; w++) /* 寻找离v0最近的顶点 */
		{
			if (!final[w] && (*D)[w] < min)
			{
				k = w;
				min = (*D)[w];    /* w顶点离v0顶点更近 */
			}
		}

		/* final[w]=1表示求得顶点v0至vw的最短路径 */
		final[k] = 1;    /* 将目前找到的最近的顶点置为1 */
		for (w = 0; w < G.numVertexes; w++) /* 修正当前最短路径及距离 */
		{
			/* 如果经过v顶点的路径比现在这条路径的长度短的话 */
			if (!final[w] && (min + G.arc[k][w] < (*D)[w]))
			{ /*  说明找到了更短的路径，修改D[w]和P[w] */
				(*D)[w] = min + G.arc[k][w];  /* 修改当前路径长度 */
				(*P)[w] = k;
			}
		}
	}
}
#endif