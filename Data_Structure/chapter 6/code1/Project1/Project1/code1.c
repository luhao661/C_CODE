#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ��˳��洢�ṹʵ�ֶ�����(һ��ֻ������ȫ������)
//����6.7.1.c
#if 1
#include "6.7.1.h"

int main()
{
	Status i;
	Position p;
	TElemType e;
	SqBiTree T;

	InitBiTree(T);
	CreateBiTree(T);
	printf("������������,���շ�%d(1:�� 0:��) �������=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T, &e);

	if (i)
		printf("�������ĸ�Ϊ��%d\n", e);
	else
		printf("���գ��޸�\n");

	printf("�������������:\n");
	LevelOrderTraverse(T);
	printf("ǰ�����������:\n");
	PreOrderTraverse(T);
	printf("�������������:\n");
	InOrderTraverse(T);
	printf("�������������:\n");
	PostOrderTraverse(T);
	printf("�޸Ľ��Ĳ��3�������2��");
	p.level = 3;
	p.order = 2;
	e = Value(T, p);
	printf("���޸Ľ���ԭֵΪ%d��������ֵ:50 ", e);
	e = 50;
	Assign(T, p, e);
	printf("ǰ�����������:\n");
	PreOrderTraverse(T);
	printf("���%d��˫��Ϊ%d,���Һ��ӷֱ�Ϊ", e, Parent(T, e));
	printf("%d,%d,�����ֱֵܷ�Ϊ", LeftChild(T, e), RightChild(T, e));
	printf("%d,%d\n", LeftSibling(T, e), RightSibling(T, e));
	ClearBiTree(T);
	printf("�����������,���շ�%d(1:�� 0:��) �������=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T, &e);
	if (i)
		printf("�������ĸ�Ϊ��%d\n", e);
	else
		printf("���գ��޸�\n");

	return 0;
}
#endif