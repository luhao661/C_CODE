#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Floyd(��������)�㷨�����·��
//����7.7.2.c
#if 0
#include "7.7.2.h"

int main(void)
{
	int v, w, k;
	MGraph G;

	Patharc P;
	ShortPathTable D; /* ��ĳ�㵽�����������·�� */

	CreateMGraph(&G);

	ShortestPath_Floyd(G, &P, &D);

	printf("����������·������:\n");
	for (v = 0; v < G.numVertexes; ++v)
	{
		for (w = v + 1; w < G.numVertexes; w++)
		{
			printf("v%d-v%d weight: %d ", v, w, D[v][w]);
			k = P[v][w];				/* ��õ�һ��·�������±� */
			printf(" path: %d", v);	/* ��ӡԴ�� */

			while (k != w)				/* ���·�������±겻���յ� */
			{
				printf(" -> %d", k);	/* ��ӡ·������ */
				k = P[k][w];			/* �����һ��·�������±� */
			}

			printf(" -> %d\n", w);	/* ��ӡ�յ� */
		}
		printf("\n");
	}

	printf("���·��D\n");
	for (v = 0; v < G.numVertexes; ++v)
	{
		for (w = 0; w < G.numVertexes; ++w)
		{
			printf("%d\t", D[v][w]);
		}
		printf("\n");
	}
	printf("���·��P\n");
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
