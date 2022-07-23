#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void InitializeQueue(Queue* pq)
{
	pq->P_Node_front = pq->P_Node_rear = NULL;
	pq->count = 0;
}

bool QueueIsFull(const Queue* pq)
{
	return (pq->count==MAX_QUEUE);
}

static void CopyToNode(Item item, Node* pq)
{
	pq->item = item;
}

bool AddQueue(Item item, Queue* pq)
{
	Node* current;
	
	if (QueueIsFull(pq))//�ж��Ƿ�ﵽ���õ����Ķ��нڵ���
		return false;

	current = (Node*)malloc(sizeof(Node));//����Ϊ�½ڵ����ռ�
												//currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//�ж��ܷ�Ϊ�½ڵ㶯̬�����ڴ�
	{
		fprintf(stderr,"����δ�ܷ��䵽�ڴ棡");
		exit(1);
	}

	CopyToNode(item,current);//������ɹ������������½ڵ���(�����ṹ)

	current->next = NULL; //�����ýڵ�����������һ���ڵ�

	if (QueueIsEmpty(pq))//������Ϊ�գ����½ڵ�����׽ڵ�Ҳ��β�ڵ�
		pq->P_Node_front = current;//���P_Node_frontָ��ָ���½ڵ�
	else//�����в�Ϊ�գ�
		pq->P_Node_rear->next = current;//���P_Node_rearָ���next��Ա���ó��½ڵ�ĵ�ַ
																	//�ѵ����ڶ����ڵ��next���ó��½ڵ�ĵ�ַ(�½ڵ������һ���ڵ�)
	pq->P_Node_rear = current;//P_Node_rearָ���¼����β��(���һ���ڵ�)�ĵ�ַ���Դ��ҵ����һ���ڵ�
													//�����´�����pq->P_Node_rear->next ʱ���ܲ��������ڶ����ڵ�
	
	pq->count++;

	return true;
}

bool QueueIsEmpty(const Queue* pq)
{
	return (pq->count==0);
}

static void CopyToItem(Node *pq, Item *pitem)
{
	*pitem=pq->item;
}

bool DeQueue(Item* pitem, Queue* pq)
{
	Node* temp;

	if (QueueIsEmpty(pq))//���ж϶����Ƿ�Ϊ��
		return false;

	CopyToItem(pq->P_Node_front,pitem);//�ѽڵ��е�����������ı���

	temp = pq->P_Node_front;//��һ���ڵ�ĵ�ַ����temp
	pq->P_Node_front = pq->P_Node_front->next;//�ڶ����ڵ�ĵ�ַ��NULL���ḳ����һ���ڵ��ָ��(��frontָ��)
	free(temp);//�ͷŵ�һ���ڵ���ڴ�ռ�

	pq->count--;
	if (pq->count == 0)
		pq->P_Node_rear = NULL;

	return true;
}

int QueueItemCount(const Queue* pq)
{
	return (pq->count);
}

void EmptyTheQueue(Queue* pq)
{
	Item temp;

	while (!QueueIsEmpty(pq))
		DeQueue(&temp,pq);//ѭ������DeQueue()ֱ������Ϊ��
}
