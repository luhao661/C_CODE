#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Dijkstra(�Ͻ�˹����)�㷨�����·��
//����7.7.1.c
#if 0
#include "7.7.1.h"

int main(void)
{
	int i, j, v0;

	//���������ڽӾ���G
	MGraph G;
	//�������ڴ洢���·���±������
	Patharc P;
	//�������ڴ洢���������·����Ȩֵ��
	ShortPathTable D; /* ��ĳ�㵽�����������·�� */
	
	//�󶥵�v0�����ඥ������·��
	v0 = 0;

	CreateMGraph(&G);

	ShortestPath_Dijkstra(G, v0, &P, &D);

	printf("���·����������:\n");
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
	printf("\nԴ�㵽����������·������Ϊ:\n");
	for (i = 1; i < G.numVertexes; ++i)
		printf("v%d - v%d : %d \n", G.vexs[0], G.vexs[i], D[i]);
	return 0;
}
#endif