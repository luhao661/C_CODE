#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ����ʽ�洢�ṹʵ�ֶ�������ʹ�����ֱ�����ʽ
//����6.7.2.c
#if 1
#include "6.7.2.h"

int main()
{
	int i;
	BiTree T;
	TElemType e1;
	InitBiTree(&T);


	StrAssign(str, "ABDH#K###E##CFI###G#J##");

	CreateBiTree(&T);

	printf("����ն�������,���շ�%d(1:�� 0:��) �������=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	e1 = Root(T);
	printf("�������ĸ�Ϊ: %c\n", e1);

	printf("\nǰ�����������:");
	PreOrderTraverse(T);
	printf("\n�������������:");
	InOrderTraverse(T);
	printf("\n�������������:");
	PostOrderTraverse(T);
	ClearBiTree(&T);
	printf("\n�����������,���շ�%d(1:�� 0:��) �������=%d\n", BiTreeEmpty(T), BiTreeDepth(T));
	i = Root(T);
	if (!i)
		printf("���գ��޸�\n");

	return 0;
}
#endif