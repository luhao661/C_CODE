#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdbool.h>
#define MAX_QUEUE 10

typedef int Item;
//���ݴ洢������Ҳ������
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
	Node* P_Node_front;//ָ����������ָ��
	Node* P_Node_rear; //ָ�����β���ָ��
	int count;				   //�����е���������
}Queue;



/*������ ��ʼ������* /
/*ǰ�������� pq ָ��һ������ */
/*���������� ���б���ʼ��Ϊ�� */
void InitializeQueue(Queue * pq);


/* ������ �������Ƿ����� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ��� */
/* ���������� ������������򷵻�true�����򷵻� false */
bool QueueIsFull(const Queue* pq);


/* ������ �������Ƿ�Ϊ�� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ��� */
/* ���������� �������Ϊ���򷵻�true�����򷵻�false */
bool QueueIsEmpty(const Queue* pq);


/* ������ ȷ�������е����� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ��� */
/* ���������� ���ض����е����� */
int QueueItemCount(const Queue* pq);


/* ������ �ڶ���ĩβ����� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ��� */
/* item ��Ҫ������ڶ���ĩβ���� */
/* ���������� ������в�Ϊ�գ�item��������ڶ��е�ĩβ�� */
/* �ú�������true;���򣬶��в��ı䣬�ú�������false*/
bool AddQueue(Item item, Queue* pq);


/* ������ �Ӷ��еĿ�ͷɾ���� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ���
/* ���������� ������в�Ϊ�գ������׶˵�item����������*pitem��*/
/* ����ɾ�����Һ������� true; */
/* ����ò���ʹ�ö���Ϊ�գ������ö���Ϊ�� */
/* ��������ڲ���ǰΪ�գ��ú�������false */
bool DeQueue(Item* pitem, Queue* pq);


/* ������ ��ն��� */
/* ǰ�������� pq ָ��֮ǰ����ʼ���Ķ��� */
/* ���������� ���б���� */
void EmptyTheQueue(Queue* pq);


extern void CopyToNode(Item item, Node* pq);
extern void CopyToItem(Node* pq, Item* pitem);


#endif		/*_QUEUE_H*/