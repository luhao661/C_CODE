#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//AOV������������
//����7.8.c
#if 0
#include "7.8.h"

int main(void)
{
	MGraph G;
	GraphAdjList GL;
	int result;

	CreateMGraph(&G);
	CreateALGraph(G, &GL);
	result = TopologicalSort(GL);
	
	printf("result:%d", result);

	return 0;
}
#endif


//AOE����ؼ�·��
//����7.9.c
#if 1
#include "7.9.h"

int main(void)
{
	MGraph G;
	GraphAdjList GL;
	CreateMGraph(&G);
	CreateALGraph(G, &GL);
	CriticalPath(GL);
	return 0;
}
#endif