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

bool QueueIsEmpty(const Queue* pq)
{
	return (pq->count==0);
}

int QueueItemCount(const Queue* pq)
{
	return (pq->count);
}

bool AddQueue(Item item, Queue* pq)
{

}

bool DeQueue(Item* pitem, Queue* pq);

void EmptyTheQueue(Queue* pq);
