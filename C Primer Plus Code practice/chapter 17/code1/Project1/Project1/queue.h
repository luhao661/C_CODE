#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdbool.h>
#define MAX_QUEUE 10

typedef int Item;
//数据存储的类型也可以是
//typedef struct
//{
//	int data1;
//	int data2;
//}Item;

typedef struct node
{
	Item item;
	struct node* next;
}Node;

typedef struct 
{
	Node* P_Node_front;//指向队列首项的指针
	Node* P_Node_rear; //指向队列尾项的指针
	int count;				   //队列中的项数计数
}Queue;



/*操作∶ 初始化队列* /
/*前提条件∶ pq 指向一个队列 */
/*后置条件∶ 队列被初始化为空 */
void InitializeQueue(Queue * pq);


/* 操作∶ 检查队列是否已满 */
/* 前提条件∶ pq 指向之前被初始化的队列 */
/* 后置条件∶ 如果队列已满则返回true，否则返回 false */
bool QueueIsFull(const Queue* pq);


/* 操作∶ 检查队列是否为空 */
/* 前提条件∶ pq 指向之前被初始化的队列 */
/* 后置条件∶ 如果队列为空则返回true，否则返回false */
bool QueueIsEmpty(const Queue* pq);


/* 操作∶ 确定队列中的项数 */
/* 前提条件∶ pq 指向之前被初始化的队列 */
/* 后置条件∶ 返回队列中的项数 */
int QueueItemCount(const Queue* pq);


/* 操作∶ 在队列末尾添加项 */
/* 前提条件∶ pq 指向之前被初始化的队列 */
/* item 是要被添加在队列末尾的项 */
/* 后置条件∶ 如果队列不为空，item将被添加在队列的末尾， */
/* 该函数返回true;否则，队列不改变，该函数返回false*/
bool AddQueue(Item item, Queue* pq);


/* 操作∶ 从队列的开头删除项 */
/* 前提条件∶ pq 指向之前被初始化的队列
/* 后置条件∶ 如果队列不为空，队列首端的item将被拷贝到*pitem中*/
/* 并被删除，且函数返回 true; */
/* 如果该操作使得队列为空，则重置队列为空 */
/* 如果队列在操作前为空，该函数返回false */
bool DeQueue(Item* pitem, Queue* pq);


/* 操作∶ 清空队列 */
/* 前提条件∶ pq 指向之前被初始化的队列 */
/* 后置条件∶ 队列被清空 */
void EmptyTheQueue(Queue* pq);


extern void CopyToNode(Item item, Node* pq);
extern void CopyToItem(Node* pq, Item* pitem);


#endif		/*_QUEUE_H*/