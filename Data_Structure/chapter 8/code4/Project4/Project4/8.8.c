#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "8.8.h"
#include <stdio.h>
#include <stdlib.h>
/*  在p->node[1..keynum].key中查找i,使得p->node[i].key≤K＜p->node[i+1].key */
static int Search(BTree p, int K)
{
	int i = 0, j;
	for (j = 1; j <= p->keynum; j++)
		if (p->node[j].key <= K)
			i = j;
	return i;
}

/*  在m阶B树T上查找关键字K，返回结果(pt,i,tag)。若查找成功，则特征值 */
/*  tag=1，指针pt所指结点中第i个关键字等于K；否则特征值tag=0，等于K的  */
/*  关键字应插入在指针Pt所指结点中第i和第i+1个关键字之间。 */
Result SearchBTree(BTree T, int K)
{
	BTree p = T, q = NULL; /*  初始化，p指向待查结点，q指向p的双亲  */
	Status found = FALSE;
	int i = 0;
	Result r;
	while (p && !found)
	{
		i = Search(p, K); /*  p->node[i].key≤K<p->node[i+1].key  */
		if (i > 0 && p->node[i].key == K) /*  找到待查关键字 */
			found = TRUE;
		else
		{
			q = p;
			p = p->node[i].ptr;
		}
	}
	r.i = i;
	if (found) /*  查找成功  */
	{
		r.pt = p;
		r.tag = 1;
	}
	else /*   查找不成功，返回K的插入位置信息 */
	{
		r.pt = q;
		r.tag = 0;
	}
	return r;
}

/* 将r->key、r和ap分别插入到q->key[i+1]、q->recptr[i+1]和q->ptr[i+1]中 */
static void Insert(BTree* q, int i, int key, BTree ap)
{
	int j;
	for (j = (*q)->keynum; j > i; j--) /*  空出(*q)->node[i+1]  */
		(*q)->node[j + 1] = (*q)->node[j];
	(*q)->node[i + 1].key = key;
	(*q)->node[i + 1].ptr = ap;
	(*q)->node[i + 1].recptr = key;
	(*q)->keynum++;
}

/* 将结点q分裂成两个结点，前一半保留，后一半移入新生结点ap */
static void split(BTree* q, BTree* ap)
{
	int i, s = (m + 1) / 2;
	*ap = (BTree)malloc(sizeof(BTNode)); /*  生成新结点ap */
	(*ap)->node[0].ptr = (*q)->node[s].ptr; /*  后一半移入ap */
	for (i = s + 1; i <= m; i++)
	{
		(*ap)->node[i - s] = (*q)->node[i];
		if ((*ap)->node[i - s].ptr)
			(*ap)->node[i - s].ptr->parent = *ap;
	}
	(*ap)->keynum = m - s;
	(*ap)->parent = (*q)->parent;
	(*q)->keynum = s - 1; /*  q的前一半保留，修改keynum */
}

/* 生成含信息(T,r,ap)的新的根结点&T，原T和ap为子树指针 */
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

/*  在m阶B树T上结点*q的key[i]与key[i+1]之间插入关键字K的指针r。若引起 */
/*  结点过大,则沿双亲链进行必要的结点分裂调整,使T仍是m阶B树。 */
void InsertBTree(BTree* T, int key, BTree q, int i)
{
	BTree ap = NULL;
	Status finished = FALSE;
	int s;
	int rx;
	rx = key;
	while (q && !finished)
	{
		Insert(&q, i, rx, ap); /*  将r->key、r和ap分别插入到q->key[i+1]、q->recptr[i+1]和q->ptr[i+1]中  */
		if (q->keynum < m)
			finished = TRUE; /*  插入完成 */
		else
		{ /*  分裂结点*q */
			s = (m + 1) / 2;
			rx = q->node[s].recptr;
			split(&q, &ap); /*  将q->key[s+1..m],q->ptr[s..m]和q->recptr[s+1..m]移入新结点*ap  */
			q = q->parent;
			if (q)
				i = Search(q, key); /*  在双亲结点*q中查找rx->key的插入位置  */
		}
	}
	if (!finished) /*  T是空树(参数q初值为NULL)或根结点已分裂为结点*q和*ap */
		NewRoot(T, rx, ap); /*  生成含信息(T,rx,ap)的新的根结点*T，原T和ap为子树指针 */
}
#endif