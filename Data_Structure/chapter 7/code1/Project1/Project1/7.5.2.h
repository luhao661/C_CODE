#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_5_2_H
#define CODE_7_5_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 9 /* �洢�ռ��ʼ������ */
#define MAXEDGE 15
#define MAXVEX 9

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬����,��OK�� */
typedef int Boolean; /* Boolean�ǲ�������,��ֵ��TRUE��FALSE */

typedef char VertexType; /* ��������Ӧ���û����� */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */

/* �ڽӾ���ṹ */
typedef struct
{
	VertexType vexs[MAXVEX]; /* ����� */
	EdgeType arc[MAXVEX][MAXVEX];/* �ڽӾ���,�ɿ����߱� */
	int numVertexes, numEdges; /* ͼ�е�ǰ�Ķ������ͱ��� */
}MGraph;

/* �ڽӱ�ṹ****************** */
typedef struct EdgeNode /* �߱��� */
{
	int adjvex;    /* �ڽӵ���,�洢�ö����Ӧ���±� */
	int weight;		/* ���ڴ洢Ȩֵ,���ڷ���ͼ���Բ���Ҫ */
	struct EdgeNode* next; /* ����,ָ����һ���ڽӵ� */
}EdgeNode;

typedef struct VertexNode /* ������� */
{
	int in;	/* ������� */
	char data; /* ������,�洢������Ϣ */
	EdgeNode* firstedge;/* �߱�ͷָ�� */
}VertexNode, AdjList[MAXVEX];

typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges; /* ͼ�е�ǰ�������ͱ��� */
}graphAdjList, * GraphAdjList;
/* **************************** */

/* �õ��Ķ��нṹ********************************** */
/* ѭ�����е�˳��洢�ṹ */
typedef struct
{
	int data[MAXSIZE];
	int front;    	/* ͷָ�� */
	int rear;		/* βָ��,�����в���,ָ�����βԪ�ص���һ��λ�� */
}Queue;

Status InitQueue(Queue* Q);
Status QueueEmpty(Queue Q);
Status EnQueue(Queue* Q, int e);
Status DeQueue(Queue* Q, int* e);
void CreateMGraph(MGraph* G);
void CreateALGraph(MGraph G, GraphAdjList* GL);
void DFS(GraphAdjList GL, int i);
void DFSTraverse(GraphAdjList GL);
void BFSTraverse(GraphAdjList GL);

#endif
