#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Dijkstra(迪杰斯特拉)算法求最短路径
//链接7.7.1.c
#if 0
#include "7.7.1.h"

int main(void)
{
	int i, j, v0;

	//创建网的邻接矩阵G
	MGraph G;
	//创建用于存储最短路径下标的数组
	Patharc P;
	//创建用于存储到各点最短路径的权值和
	ShortPathTable D; /* 求某点到其余各点的最短路径 */
	
	//求顶点v0到其余顶点的最短路径
	v0 = 0;

	CreateMGraph(&G);

	ShortestPath_Dijkstra(G, v0, &P, &D);

	printf("最短路径倒序如下:\n");
	for (i = 1; i < G.numVertexes; ++i)
	{
		printf("v%d - v%d : ", v0, i);
		j = i;
		while (P[j] != -1)
		{
			printf("%d ", P[j]);
			j = P[j];
		}
		printf("\n");
	}
	printf("\n源点到各顶点的最短路径长度为:\n");
	for (i = 1; i < G.numVertexes; ++i)
		printf("v%d - v%d : %d \n", G.vexs[0], G.vexs[i], D[i]);
	return 0;
}
#endif