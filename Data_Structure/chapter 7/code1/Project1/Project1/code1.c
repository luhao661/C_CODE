#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ���ڽӾ���洢�ṹ����ʾͼ
//����������ͼ(��ÿ�����ϴ���Ȩֵ)
//ȱ�ݣ�����ϡ������ͼ������ɴ洢�ռ�ļ����˷�
//������
#if 0
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* ��󶥵�����Ӧ���û����� */
#define GRAPH_INFINITY 65535 /* ��65535������� */

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef char VertexType; /* ��������Ӧ���û�����  */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */

typedef struct
{
	VertexType vexs[MAXVEX]; /* ����� */
	EdgeType arc[MAXVEX][MAXVEX];/* �ڽӾ��󣬿ɿ����߱� */
	int numNodes, numEdges; /* ͼ�е�ǰ�Ķ������ͱ���  */
}MGraph;

/* ����������ͼ���ڽӾ����ʾ */
void CreateMGraph(MGraph* G)
{
	int i, j, k, w;

	printf("���붥�����ͱ���:\n");
	//***ע***
	//��������һ���������֣�һ�����ţ�������һ����������
	scanf("%d,%d", &G->numNodes, &G->numEdges); /* ���붥�����ͱ��� */
	
	/* ���붥����Ϣ,��������� */
	for (i = 0; i < G->numNodes; i++) 
		scanf("%c", & G->vexs[i]);

	/* �ڽӾ����ʼ�� */
	//��ά������Խ����⣬����Ԫ�ؾ���ֵΪGRAPH_INFINITY
	for (i = 0; i < G->numNodes; i++)
	{
		for (j = 0; j < G->numNodes; j++)
			G->arc[i][j] = GRAPH_INFINITY;
		G->arc[i][i] = 0;
	}

	/* ����numEdges���ߣ������ڽӾ��� */
	for (k = 0; k < G->numEdges; k++) 
	{
		printf("�����(vi,vj)���±�i���±�j��Ȩw:\n");
		scanf("%d,%d,%d", &i, &j, &w); /* �����(vi,vj)�ϵ�Ȩw */
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j]; /* ��Ϊ������ͼ������Գ� */
	}
}

int main(void)
{
	MGraph G;
	CreateMGraph(&G);

	return 0;
}
#endif


//ʹ���ڽӱ�洢�ṹ����ʾͼ
//����������ͼ(��ÿ�����ϴ���Ȩֵ)
//ȱ�ݣ��ڽӱ�Ҫ�˽���ȣ��������ȫͼ�����ڽӱ�Ҫ�˽���ȣ��������ȫͼ
//������
#if 0
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* ��󶥵���,Ӧ���û����� */

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬����,��OK�� */
typedef char VertexType; /* ��������Ӧ���û����� */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */

/* ������� */
typedef struct VertexNode 
{
	VertexType data; /* ������,�洢������Ϣ */
	EdgeNode* firstedge;/* �߱�ͷָ�� */
}VertexNode, AdjList[MAXVEX];//���������������͵ı���

/* �߱���  */
typedef struct EdgeNode 
{
	int adjvex;    /* �ڽӵ���,�洢�ö����Ӧ���±� */
	EdgeType weight_info;		/* ���ڴ洢Ȩֵ,���ڷ���ͼ���Բ���Ҫ */
	struct EdgeNode* next; /* ����,ָ����һ���ڽӵ� */
}EdgeNode;

typedef struct
{
	AdjList adjList;//������������
	int numNodes, numEdges; /* ͼ�е�ǰ�������ͱ��� */
}GraphAdjList;

/* ����ͼ���ڽӱ�ṹ */
void  CreateALGraph(GraphAdjList* G)
{
	int i, j, k;
	EdgeNode* e;

	printf("���붥�����ͱ���:\n");
	scanf("%d,%d", &G->numNodes, &G->numEdges); /* ���붥�����ͱ��� */

	/* ���붥����Ϣ,��������� */
	for (i = 0; i < G->numNodes; i++) 
	{
		scanf("%c", & G->adjList[i].data); 	/* ���붥����Ϣ */
		G->adjList[i].firstedge = NULL; 	/* ���߱���Ϊ�ձ� */
	}

	/* �����߱� */
	for (k = 0; k < G->numEdges; k++)
	{
		printf("�����(vi,vj)�ϵĶ������:\n");
		scanf("%d,%d", &i, &j); /* �����(vi,vj)�ϵĶ������ */

		//***ע***
		//����������ͼ����һ���ߺʹ˱��ϵ���������ȷ��
		//������ڽӱ���˵�������ں��ӱ�ʾ��
		//��V0��V1��֮����һ��������ͨ����
		//������V0��firstedge�ش���V1�ڵ���±�
		//������V1��firstedge�ش���V0�ڵ���±�
		e = (EdgeNode*)malloc(sizeof(EdgeNode)); /* ���ڴ�����ռ�,���ɱ߱��� */
		e->adjvex = j;					/* �ڽ����Ϊj */
		e->next = G->adjList[i].firstedge;	/* ��e��ָ��ָ��ǰ������ָ��Ľ�� */
		G->adjList[i].firstedge = e;		/* ����ǰ�����ָ��ָ��e */

		e = (EdgeNode*)malloc(sizeof(EdgeNode)); /* ���ڴ�����ռ�,���ɱ߱��� */
		e->adjvex = i;					/* �ڽ����Ϊi */
		e->next = G->adjList[j].firstedge;	/* ��e��ָ��ָ��ǰ������ָ��Ľ�� */
		G->adjList[j].firstedge = e;		/* ����ǰ�����ָ��ָ��e */
	}
}

int main(void)
{
	GraphAdjList G;
	CreateALGraph(&G);

	return 0;
}
#endif
//Ҫִ��ɾ��һ���ߵĲ���������ʹ���ڽӶ��ر����Ż�����ͼ�Ĵ洢�ṹ


//ͼ�ڽӾ���������ȱ���(DFS)��������ȱ���(BFS)
//����7.5.1.c
#if 0
#include "7.5.1.h"

int main(void)
{
	MGraph G;
	CreateMGraph(&G);
	printf("\n��ȱ�����");
	DFSTraverse(G);
	printf("\n��ȱ�����");
	BFSTraverse(G);
	return 0;
}
#endif


//ͼ���ڽӽṹ������ȱ���(DFS)��������ȱ���(BFS)
//����7.5.2.c
#if 1
#include "7.5.2.h"

int main(void)
{
	MGraph G;
	GraphAdjList GL;
	CreateMGraph(&G);
	CreateALGraph(G, &GL);

	printf("\n��ȱ���:");
	DFSTraverse(GL);
	printf("\n��ȱ���:");
	BFSTraverse(GL);
	return 0;
}
#endif