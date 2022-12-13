#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_7_2_H
#define CODE_7_7_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXEDGE 20
#define MAXVEX 20
#define GRAPH_INFINITY 65535

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */

typedef struct
{
	int vexs[MAXVEX];
	int arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;

//二维数组类型的别名
typedef int Patharc[MAXVEX][MAXVEX];
typedef int ShortPathTable[MAXVEX][MAXVEX];

void CreateMGraph(MGraph* G);
void ShortestPath_Floyd(MGraph G, Patharc* P,
	ShortPathTable* D);

#endif
