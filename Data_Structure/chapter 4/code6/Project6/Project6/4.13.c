#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "4.13.h"
#include <stdio.h>
#include <stdlib.h>//exit()
#include <math.h>//OVERFLOW

static Status visit(QElemType c)
{
	printf("%d ", c);
	return OK;
}

/* ����һ���ն���Q */
Status InitQueue(LinkQueue* Q)
{
	Q->front = Q->rear = (QueuePtr)malloc(sizeof(QNode));

	if (!Q->front)
		exit(OVERFLOW);

	Q->front->next = NULL;//ͷ����ָ����ֵΪNULL
	return OK;
}

/* ���ٶ���Q(��ͷ�����ڴ�Ҳ���ͷ�) */
Status DestroyQueue(LinkQueue* Q)
{
	while (Q->front)
	{
		Q->rear = Q->front->next;//�ѵ�һ���ڵ�ĵ�ַ����βָ��
		free(Q->front);//�ͷ�ͷ�����ڴ�
		Q->front = Q->rear;//ͷָ����һ���ڵ�ĵ�ַ
	}
	return OK;
}

/* ��Q��Ϊ�ն���(��ͷ�����ڴ汻����) */
Status ClearQueue(LinkQueue* Q)
{
	QueuePtr temp, q;

	Q->rear = Q->front;//ͷ���ĵ�ַ����βָ��
	temp = Q->front->next;//tempָ���һ���ڵ�
	Q->front->next = NULL;//ͷ�ڵ��ָ������ΪNULL

	while (temp)
	{
		q = temp;
		temp = temp->next;
		free(q);
	}
	return OK;
}

/* ��QΪ�ն���,�򷵻�TRUE,���򷵻�FALSE */
Status QueueEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return TRUE;
	else
		return FALSE;
}

/* ����еĳ��� */
int QueueLength(LinkQueue Q)
{
	int i = 0;
	QueuePtr p;
	p = Q.front;//p��ͷ���ĵ�ַ

	while (Q.rear != p)
	{
		i++;
		p = p->next;
	}
	
	return i;
}

/* �����в���,����e����Q�Ķ�ͷԪ��,������OK,���򷵻�ERROR */
Status GetHead(LinkQueue Q, QElemType* e)
{
	QueuePtr p;
	if (Q.front == Q.rear)
		return ERROR;

	p = Q.front->next;
	*e = p->data;

	return OK;
}


/* ����Ԫ��eΪQ���µĶ�βԪ�� */
Status EnQueue(LinkQueue* Q, QElemType e)
{
	QueuePtr p_to_new = (QueuePtr)malloc(sizeof(QNode));

	if (!p_to_new) /* �洢����ʧ�� */
		exit(OVERFLOW);

	p_to_new->data = e;
	p_to_new->next = NULL;

	Q->rear->next = p_to_new;	/* ��ӵ��Ԫ��e���½��s��ֵ��ԭ��β���ĺ�̣���ͼ�Т� */
	Q->rear = p_to_new;		/* �ѵ�ǰ��s����Ϊ��β��㣬rearָ��s����ͼ�Т� */

	return OK;
}

/* �����в���,ɾ��Q�Ķ�ͷԪ��,��e������ֵ,������OK,���򷵻�ERROR */
Status DeQueue(LinkQueue* Q, QElemType* e)
{
	QueuePtr p;

	if (Q->front == Q->rear)
		return ERROR;

	p = Q->front->next;		/* ����ɾ���Ķ�ͷ����ݴ��p����ͼ�Т� */
	*e = p->data;				/* ����ɾ���Ķ�ͷ����ֵ��ֵ��e */

	Q->front->next = p->next;/* ��ԭ��ͷ���ĺ��p->next��ֵ��ͷ����̣���ͼ�Т� */

	if (Q->rear == p)		/* ����ͷ���Ƕ�β����ɾ����rearָ��ͷ��㣬��ͼ�Т� */
		Q->rear = Q->front;

	free(p);

	return OK;
}

/* �Ӷ�ͷ����β���ζԶ���Q��ÿ��Ԫ����� */
Status QueueTraverse(LinkQueue Q)
{
	QueuePtr p;
	p = Q.front->next;

	while (p)
	{
		visit(p->data);
		p = p->next;
	}
	
	printf("\n");
	return OK;
}

#endif