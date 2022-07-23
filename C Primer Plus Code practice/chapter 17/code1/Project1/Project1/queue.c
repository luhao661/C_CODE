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
	
	if (QueueIsFull(pq))//判断是否达到设置的最大的队列节点数
		return false;

	current = (Node*)malloc(sizeof(Node));//首先为新节点分配空间
												//current指向新节点，存新节点的地址
	if (current == NULL)//判断能否为新节点动态分配内存
	{
		fprintf(stderr,"错误，未能分配到内存！");
		exit(1);
	}

	CopyToNode(item,current);//若分配成功，则把项拷贝到新节点中(拷贝结构)

	current->next = NULL; //表明该节点是链表的最后一个节点

	if (QueueIsEmpty(pq))//若队列为空，则新节点既是首节点也是尾节点
		pq->P_Node_front = current;//则把P_Node_front指针指向新节点
	else//若队列不为空，
		pq->P_Node_rear->next = current;//则把P_Node_rear指向的next成员设置成新节点的地址
																	//把倒数第二个节点的next设置成新节点的地址(新节点是最后一个节点)
	pq->P_Node_rear = current;//P_Node_rear指针记录队列尾端(最后一个节点)的地址，以此找到最后一个节点
													//所以下次运行pq->P_Node_rear->next 时仍能操作倒数第二个节点
	
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

	if (QueueIsEmpty(pq))//先判断队列是否为空
		return false;

	CopyToItem(pq->P_Node_front,pitem);//把节点中的项拷贝到给定的变量

	temp = pq->P_Node_front;//第一个节点的地址赋给temp
	pq->P_Node_front = pq->P_Node_front->next;//第二个节点的地址或NULL，会赋给第一个节点的指针(即front指针)
	free(temp);//释放第一个节点的内存空间

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
		DeQueue(&temp,pq);//循环调用DeQueue()直到队列为空
}
