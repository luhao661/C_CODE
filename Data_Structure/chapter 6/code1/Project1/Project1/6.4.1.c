#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "6.4.1.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//powl()

TElemType Nil = 0; /*  ��������0Ϊ�� */

static Status visit(TElemType c)
{
	printf("%d ", c);
	return OK;
}

/* ����ն�����T����ΪT�ǹ̶����飬����ı䣬�ʲ���Ҫ& */
Status InitBiTree(SqBiTree T)
{
	int i;
	for (i = 0; i < MAX_TREE_SIZE; i++)
		T[i] = Nil; /* ��ֵΪ�� */
	return OK;
}

/* �������������������н���ֵ(�ַ��ͻ�����), ����˳��洢�Ķ�����T */
Status CreateBiTree(SqBiTree T)
{
	int i = 0;
	printf("�밴�����������ֵ(����)��0��ʾ�ս�㣬��999�������������%d:\n", MAX_TREE_SIZE);
	while (i < 10)
	{
		T[i] = i + 1;

		if (i != 0 && T[(i + 1) / 2 - 1] == Nil && T[i] != Nil) /* �˽��(����)��˫���Ҳ��Ǹ� */
		{
			printf("������˫�׵ķǸ����%d\n", T[i]);
			exit(ERROR);
		}
		i++;
	}
	while (i < MAX_TREE_SIZE)
	{
		T[i] = Nil; /* ���ո�ֵ��T�ĺ���Ľ�� */
		i++;
	}

	return OK;
}

//***ע***���ܷ��ڴ�.c�ļ��У���ΪԤ����ָ�����ڲ����ӵģ�code1.c�ļ�(���뵥Ԫ)�в��ɼ�
//#define ClearBiTree InitBiTree /* ��˳��洢�ṹ�У���������ȫһ�� */

/* ��ʼ����: ������T���� */
/* �������: ��TΪ�ն�����,�򷵻�TRUE,����FALSE */
Status BiTreeEmpty(SqBiTree T)
{
	if (T[0] == Nil) /* �����Ϊ��,������ */
		return TRUE;
	else
		return FALSE;
}

/* ��ʼ����: ������T���ڡ��������: ����T����� */
int BiTreeDepth(SqBiTree T)
{
	int i, j = -1;
	for (i = MAX_TREE_SIZE - 1; i >= 0; i--) /* �ҵ����һ����� */
		if (T[i] != Nil)
			break;
	i++;
	do
		j++;
	while (i >= powl(2, j));/* ����2��j���ݡ� */
	return j;
}

/* ��ʼ����: ������T���� */
/* �������:  ��T����,��e����T�ĸ�,����OK;���򷵻�ERROR,e�޶��� */
Status Root(SqBiTree T, TElemType* e)
{
	if (BiTreeEmpty(T)) /* T�� */
		return ERROR;
	else
	{
		*e = T[0];
		return OK;
	}
}

/* ��ʼ����: ������T����,e��T��ĳ�����(��λ��) */
/* �������: ���ش���λ��e(��,�������)�Ľ���ֵ */
TElemType Value(SqBiTree T, Position e)
{
	return T[(int)powl(2, e.level - 1) + e.order - 2];
}

/* ��ʼ����: ������T����,e��T��ĳ�����(��λ��) */
/* �������: ������λ��e(��,�������)�Ľ�㸳��ֵvalue */
Status Assign(SqBiTree T, Position e, TElemType value)
{
	int i = (int)powl(2, e.level - 1) + e.order - 2; /* ���㡢�������תΪ�������� */
	if (value != Nil && T[(i + 1) / 2 - 1] == Nil) /* ��Ҷ�Ӹ��ǿ�ֵ��˫��Ϊ�� */
		return ERROR;
	else if (value == Nil && (T[i * 2 + 1] != Nil || T[i * 2 + 2] != Nil)) /*  ��˫�׸���ֵ����Ҷ�ӣ����գ� */
		return ERROR;
	T[i] = value;
	return OK;
}

/* ��ʼ����: ������T����,e��T��ĳ����� */
/* �������: ��e��T�ķǸ����,�򷵻�����˫��,���򷵻أ��գ� */
TElemType Parent(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* ���� */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* �ҵ�e */
			return T[(i + 1) / 2 - 1];
	return Nil; /* û�ҵ�e */
}


/* ��ʼ����: ������T����,e��T��ĳ����� */
/* �������: ����e�����ӡ���e������,�򷵻أ��գ� */
TElemType LeftChild(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* ���� */
		return Nil;
	for (i = 0; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* �ҵ�e */
			return T[i * 2 + 1];
	return Nil; /* û�ҵ�e */
}

/* ��ʼ����: ������T����,e��T��ĳ����� */
/* �������: ����e���Һ��ӡ���e���Һ���,�򷵻أ��գ� */
TElemType RightChild(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* ���� */
		return Nil;
	for (i = 0; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e) /* �ҵ�e */
			return T[i * 2 + 2];
	return Nil; /* û�ҵ�e */
}

/* ��ʼ����: ������T����,e��T��ĳ����� */
/* �������: ����e�����ֵܡ���e��T�����ӻ������ֵ�,�򷵻أ��գ� */
TElemType LeftSibling(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* ���� */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e && i % 2 == 0) /* �ҵ�e�������Ϊż��(���Һ���) */
			return T[i - 1];
	return Nil; /* û�ҵ�e */
}

/* ��ʼ����: ������T����,e��T��ĳ����� */
/* �������: ����e�����ֵܡ���e��T���Һ��ӻ������ֵ�,�򷵻أ��գ� */
TElemType RightSibling(SqBiTree T, TElemType e)
{
	int i;
	if (T[0] == Nil) /* ���� */
		return Nil;
	for (i = 1; i <= MAX_TREE_SIZE - 1; i++)
		if (T[i] == e && i % 2) /* �ҵ�e�������Ϊ����(������) */
			return T[i + 1];
	return Nil; /* û�ҵ�e */
}

/* PreOrderTraverse()���� */
void PreTraverse(SqBiTree T, int e)
{
	visit(T[e]);
	if (T[2 * e + 1] != Nil) /* ���������� */
		PreTraverse(T, 2 * e + 1);
	if (T[2 * e + 2] != Nil) /* ���������� */
		PreTraverse(T, 2 * e + 2);
}

/* ��ʼ����: ���������� */
/* �������: �������T�� */
Status PreOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* ������ */
		PreTraverse(T, 0);
	printf("\n");
	return OK;
}

/* InOrderTraverse()���� */
void InTraverse(SqBiTree T, int e)
{
	if (T[2 * e + 1] != Nil) /* ���������� */
		InTraverse(T, 2 * e + 1);
	visit(T[e]);
	if (T[2 * e + 2] != Nil) /* ���������� */
		InTraverse(T, 2 * e + 2);
}

/* ��ʼ����: ���������� */
/* �������: �������T�� */
Status InOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* ������ */
		InTraverse(T, 0);
	printf("\n");
	return OK;
}

/* PostOrderTraverse()���� */
void PostTraverse(SqBiTree T, int e)
{
	if (T[2 * e + 1] != Nil) /* ���������� */
		PostTraverse(T, 2 * e + 1);
	if (T[2 * e + 2] != Nil) /* ���������� */
		PostTraverse(T, 2 * e + 2);
	visit(T[e]);
}

/* ��ʼ����: ������T���� */
/* �������: �������T�� */
Status PostOrderTraverse(SqBiTree T)
{
	if (!BiTreeEmpty(T)) /* ������ */
		PostTraverse(T, 0);
	printf("\n");
	return OK;
}

/* ������������� */
void LevelOrderTraverse(SqBiTree T)
{
	int i = MAX_TREE_SIZE - 1, j;
	while (T[i] == Nil)
		i--; /* �ҵ����һ���ǿս������ */
	for (j = 0; j <= i; j++)  /* �Ӹ������,��������������� */
		if (T[j] != Nil)
			visit(T[j]); /* ֻ�����ǿյĽ�� */
	printf("\n");
}

/* ��㡢������������������ */
void Print(SqBiTree T)
{
	int j, k;
	Position p;
	TElemType e;
	for (j = 1; j <= BiTreeDepth(T); j++)
	{
		printf("��%d��: ", j);
		for (k = 1; k <= powl(2, j - 1); k++)
		{
			p.level = j;
			p.order = k;
			e = Value(T, p);
			if (e != Nil)
				printf("%d:%d ", k, e);
		}
		printf("\n");
	}
}
#endif