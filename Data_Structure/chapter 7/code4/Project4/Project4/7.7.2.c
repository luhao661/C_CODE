#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include "7.7.2.h"

/* ����ͼ */
void CreateMGraph(MGraph* G)
{
	int i, j;

	/* printf("����������Ͷ�����:"); */
	G->numEdges = 16;
	G->numVertexes = 9;

	for (i = 0; i < G->numVertexes; i++)/* ��ʼ��ͼ */
	{
		G->vexs[i] = i;
	}

	for (i = 0; i < G->numVertexes; i++)/* ��ʼ��ͼ */
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

/* Floyd�㷨������ͼG�и�����v�����ඥ��w�����·��P[v][w]
����Ȩ����D[v][w]�� */
void ShortestPath_Floyd(MGraph G, Patharc* P, 
	ShortPathTable* D)
{
	int v, w, k;
	for (v = 0; v < G.numVertexes; ++v) /* ��ʼ��D��P */
	{
		for (w = 0; w < G.numVertexes; ++w)
		{
			(*D)[v][w] = G.arc[v][w];	/* D[v][w]ֵ��Ϊ��Ӧ����Ȩֵ */
			(*P)[v][w] = w;				/* ��ʼ��P */
		}
	}

	//k����ת������±�
	for (k = 0; k < G.numVertexes; ++k)
	{//v����ʼ������±�
		for (v = 0; v < G.numVertexes; ++v)
		{//w����ֹ������±�
			for (w = 0; w < G.numVertexes; ++w)
			{
				/* ��������±�Ϊk���·����ԭ�����·������ */
				if ((*D)[v][w] > (*D)[v][k] + (*D)[k][w])
				{   
					/* ����ǰ�����Ȩֵ��Ϊ��С��һ�� */
					(*D)[v][w] = (*D)[v][k] + (*D)[k][w];
					/* ·������Ϊ�����±�Ϊk�Ķ��� */
					(*P)[v][w] = (*P)[v][k];
				}
			}
		}
	}
}

#endif