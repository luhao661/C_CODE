#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Floyd(弗洛伊德)算法求最短路径
//链接7.7.2.c
#if 0
#include "7.7.2.h"

int main(void)
{
	int v, w, k;
	MGraph G;

	Patharc P;
	ShortPathTable D; /* 求某点到其余各点的最短路径 */

	CreateMGraph(&G);

	ShortestPath_Floyd(G, &P, &D);

	printf("各顶点间最短路径如下:\n");
	for (v = 0; v < G.numVertexes; ++v)
	{
		for (w = v + 1; w < G.numVertexes; w++)
		{
			printf("v%d-v%d weight: %d ", v, w, D[v][w]);
			k = P[v][w];				/* 获得第一个路径顶点下标 */
			printf(" path: %d", v);	/* 打印源点 */

			while (k != w)				/* 如果路径顶点下标不是终点 */
			{
				printf(" -> %d", k);	/* 打印路径顶点 */
				k = P[k][w];			/* 获得下一个路径顶点下标 */
			}

			printf(" -> %d\n", w);	/* 打印终点 */
		}
		printf("\n");
	}

	printf("最短路径D\n");
	for (v = 0; v < G.numVertexes; ++v)
	{
		for (w = 0; w < G.numVertexes; ++w)
		{
			printf("%d\t", D[v][w]);
		}
		printf("\n");
	}
	printf("最短路径P\n");
	for (v = 0; v < G.numVertexes; ++v)
	{
		for (w = 0; w < G.numVertexes; ++w)
		{
			printf("%d ", P[v][w]);
		}
		printf("\n");
	}

	return 0;
}
#endif
