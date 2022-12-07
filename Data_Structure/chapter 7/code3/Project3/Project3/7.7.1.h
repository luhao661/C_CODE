#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_7_1_H
#define CODE_7_7_1_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXEDGE 20
#define MAXVEX 20
#define GRAPH_INFINITY 65535

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

typedef struct
{
	int vexs[MAXVEX];
	int arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;

typedef int Patharc[MAXVEX];    /* ���ڴ洢���·���±������ */
typedef int ShortPathTable[MAXVEX];/* ���ڴ洢���������·����Ȩֵ�� */

void CreateMGraph(MGraph* G);
void ShortestPath_Dijkstra(MGraph G, \
	int v0, Patharc* P, ShortPathTable* D);

#endif