#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "8.8.h"
#include <stdio.h>
#include <stdlib.h>
/*  ��p->node[1..keynum].key�в���i,ʹ��p->node[i].key��K��p->node[i+1].key */
static int Search(BTree p, int K)
{
	int i = 0, j;
	for (j = 1; j <= p->keynum; j++)
		if (p->node[j].key <= K)
			i = j;
	return i;
}

/*  ��m��B��T�ϲ��ҹؼ���K�����ؽ��(pt,i,tag)�������ҳɹ���������ֵ */
/*  tag=1��ָ��pt��ָ����е�i���ؼ��ֵ���K����������ֵtag=0������K��  */
/*  �ؼ���Ӧ������ָ��Pt��ָ����е�i�͵�i+1���ؼ���֮�䡣 */
Result SearchBTree(BTree T, int K)
{
	BTree p = T, q = NULL; /*  ��ʼ����pָ������㣬qָ��p��˫��  */
	Status found = FALSE;
	int i = 0;
	Result r;
	while (p && !found)
	{
		i = Search(p, K); /*  p->node[i].key��K<p->node[i+1].key  */
		if (i > 0 && p->node[i].key == K) /*  �ҵ�����ؼ��� */
			found = TRUE;
		else
		{
			q = p;
			p = p->node[i].ptr;
		}
	}
	r.i = i;
	if (found) /*  ���ҳɹ�  */
	{
		r.pt = p;
		r.tag = 1;
	}
	else /*   ���Ҳ��ɹ�������K�Ĳ���λ����Ϣ */
	{
		r.pt = q;
		r.tag = 0;
	}
	return r;
}

/* ��r->key��r��ap�ֱ���뵽q->key[i+1]��q->recptr[i+1]��q->ptr[i+1]�� */
static void Insert(BTree* q, int i, int key, BTree ap)
{
	int j;
	for (j = (*q)->keynum; j > i; j--) /*  �ճ�(*q)->node[i+1]  */
		(*q)->node[j + 1] = (*q)->node[j];
	(*q)->node[i + 1].key = key;
	(*q)->node[i + 1].ptr = ap;
	(*q)->node[i + 1].recptr = key;
	(*q)->keynum++;
}

/* �����q���ѳ�������㣬ǰһ�뱣������һ�������������ap */
static void split(BTree* q, BTree* ap)
{
	int i, s = (m + 1) / 2;
	*ap = (BTree)malloc(sizeof(BTNode)); /*  �����½��ap */
	(*ap)->node[0].ptr = (*q)->node[s].ptr; /*  ��һ������ap */
	for (i = s + 1; i <= m; i++)
	{
		(*ap)->node[i - s] = (*q)->node[i];
		if ((*ap)->node[i - s].ptr)
			(*ap)->node[i - s].ptr->parent = *ap;
	}
	(*ap)->keynum = m - s;
	(*ap)->parent = (*q)->parent;
	(*q)->keynum = s - 1; /*  q��ǰһ�뱣�����޸�keynum */
}

/* ���ɺ���Ϣ(T,r,ap)���µĸ����&T��ԭT��apΪ����ָ�� */
static void NewRoot(BTree* T, int key, BTree ap)
{
	BTree p;
	p = (BTree)malloc(sizeof(BTNode));
	p->node[0].ptr = *T;
	*T = p;
	if ((*T)->node[0].ptr)
		(*T)->node[0].ptr->parent = *T;
	(*T)->parent = NULL;
	(*T)->keynum = 1;
	(*T)->node[1].key = key;
	(*T)->node[1].recptr = key;
	(*T)->node[1].ptr = ap;
	if ((*T)->node[1].ptr)
		(*T)->node[1].ptr->parent = *T;
}

/*  ��m��B��T�Ͻ��*q��key[i]��key[i+1]֮�����ؼ���K��ָ��r�������� */
/*  ������,����˫�������б�Ҫ�Ľ����ѵ���,ʹT����m��B���� */
void InsertBTree(BTree* T, int key, BTree q, int i)
{
	BTree ap = NULL;
	Status finished = FALSE;
	int s;
	int rx;
	rx = key;
	while (q && !finished)
	{
		Insert(&q, i, rx, ap); /*  ��r->key��r��ap�ֱ���뵽q->key[i+1]��q->recptr[i+1]��q->ptr[i+1]��  */
		if (q->keynum < m)
			finished = TRUE; /*  ������� */
		else
		{ /*  ���ѽ��*q */
			s = (m + 1) / 2;
			rx = q->node[s].recptr;
			split(&q, &ap); /*  ��q->key[s+1..m],q->ptr[s..m]��q->recptr[s+1..m]�����½��*ap  */
			q = q->parent;
			if (q)
				i = Search(q, key); /*  ��˫�׽��*q�в���rx->key�Ĳ���λ��  */
		}
	}
	if (!finished) /*  T�ǿ���(����q��ֵΪNULL)�������ѷ���Ϊ���*q��*ap */
		NewRoot(T, rx, ap); /*  ���ɺ���Ϣ(T,rx,ap)���µĸ����*T��ԭT��apΪ����ָ�� */
}
#endif