#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include "8.6.h"
#include <stdio.h>
#include <stdlib.h>
/* �ݹ���Ҷ���������T���Ƿ����key, */
/* ָ��fָ��T��˫�ף����ʼ����ֵΪNULL */
/* �����ҳɹ�����ָ��pָ�������Ԫ�ؽ�㣬������TRUE */
/* ����ָ��pָ�����·���Ϸ��ʵ����һ����㲢����FALSE */
Status SearchBST(BiTree T, int key, BiTree f, BiTree* p)
{
	if (!T)	/*  ���Ҳ��ɹ� */  //�ж��´ν��еݹ����ʱ��TΪNULL��
	{										//����һ�εݹ�ʱ�Ѿ����ʵ�Ҷ�ӽ��
		*p = f;
		return FALSE;
	}
	else if (key == T->data) /*  ���ҳɹ� */
	{
		*p = T;
		return TRUE;
	}
	else if (key < T->data)
		return SearchBST(T->lchild, key, T, p);  /*  ���������м������� */
	else
		return SearchBST(T->rchild, key, T, p);  /*  ���������м������� */
}


/*  ������������T�в����ڹؼ��ֵ���key������Ԫ��ʱ�� */
/*  ����key������TRUE�����򷵻�FALSE */
Status InsertBST(BiTree* T, int key)
{
	BiTree p, s;
	if (!SearchBST(*T, key, NULL, &p)) /* ���Ҳ��ɹ� */
	{
		s = (BiTree)malloc(sizeof(BiTNode));
		s->data = key;
		s->lchild = s->rchild = NULL;
		if (!p)
			*T = s;			/*  ����sΪ�µĸ���� */
		else if (key < p->data)
			p->lchild = s;	/*  ����sΪ���� */
		else
			p->rchild = s;  /*  ����sΪ�Һ��� */
		return TRUE;
	}
	else
		return FALSE;  /*  �������йؼ�����ͬ�Ľ�㣬���ٲ��� */
}

/* �Ӷ�����������ɾ�����p�����ؽ���������������� */
static Status Delete(BiTree* p)
{
	BiTree q, s;

	//������������������Ҷ�ӽ��
	if ((*p)->rchild == NULL) /* ����������ֻ���ؽ���������������ɾ�����Ҷ��Ҳ�ߴ˷�֧) */
	{
		q = *p; 
		*p = (*p)->lchild;
		free(q);
	}//������������
	else if ((*p)->lchild == NULL) /* ֻ���ؽ����������� */
	{
		q = *p; 
		*p = (*p)->rchild;
		free(q);
	}
	else /* �������������� */
	{
		q = *p; 
		s = (*p)->lchild;
		
		while (s->rchild) /* ת��Ȼ�����ҵ���ͷ���Ҵ�ɾ����ǰ���� */
		{
			q = s;
			s = s->rchild;
		}
		
		(*p)->data = s->data; /*  sָ��ɾ����ֱ��ǰ��������ɾ���ǰ����ֵȡ����ɾ����ֵ�� */
		
		if (q != *p)
			q->rchild = s->lchild; /*  �ؽ�q�������� */
		else
			q->lchild = s->lchild; /*  �ؽ�q�������� */
		free(s);
	}
	return TRUE;
}

/* ������������T�д��ڹؼ��ֵ���key������Ԫ��ʱ����ɾ��������Ԫ�ؽ��, */
/* ������TRUE�����򷵻�FALSE�� */
Status DeleteBST(BiTree* T, int key)
{
	if (!*T) /* �����ڹؼ��ֵ���key������Ԫ�� */
		return FALSE;
	else
	{
		if (key == (*T)->data) /* �ҵ��ؼ��ֵ���key������Ԫ�� */
			return Delete(T);
		else if (key < (*T)->data)
			return DeleteBST(&(*T)->lchild, key);
		else
			return DeleteBST(&(*T)->rchild, key);
	}
}
#endif