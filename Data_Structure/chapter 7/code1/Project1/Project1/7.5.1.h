#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_7_5_1_H
#define CODE_7_5_1_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int Boolean; /* Boolean�ǲ�������,��ֵ��TRUE��FALSE */

typedef char VertexType; /* ��������Ӧ���û����� */
typedef int EdgeType; /* ���ϵ�Ȩֵ����Ӧ���û����� */

#define MAXSIZE 9 /* �洢�ռ��ʼ������ */
#define MAXEDGE 15
#define MAXVEX 9

typedef struct
{
	VertexType vexs[MAXVEX]; /* ����� */
	EdgeType arc[MAXVEX][MAXVEX];/* �ڽӾ��󣬿ɿ����߱� */
	int numVertexes, numEdges; /* ͼ�е�ǰ�Ķ������ͱ��� */
}MGraph;

/**********************�õ��Ķ��нṹ*****************************/

/* ѭ�����е�˳��洢�ṹ */
typedef struct
{
	int data[MAXSIZE];
	int front;    	/* ͷָ�� */
	int rear;		/* βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ�� */
}Queue;

Status InitQueue(Queue* Q);
Status QueueEmpty(Queue Q);
Status EnQueue(Queue* Q, int e);
Status DeQueue(Queue* Q, int* e);
void CreateMGraph(MGraph* G);
void DFS(MGraph G, int i);
void DFSTraverse(MGraph G);
void BFSTraverse(MGraph G);

#endif
