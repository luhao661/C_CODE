#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��·������(B��)
//����8.8.c
#if 0
#include "8.8.h"

void print(BTNode c, int i) /*  TraverseDSTable()���õĺ���  */
{
	printf("(%d)", c.node[i].key);
}

int main()
{
	int r[N] = { 22,16,41,58,8,11,12,16,17,22,23,31,41,52,58,59,61 };
	BTree T = NULL;
	Result s;
	int i;
	for (i = 0; i < N; i++)
	{
		s = SearchBTree(T, r[i]);
		if (!s.tag)
			InsertBTree(&T, r[i], s.pt, s.i);
	}
	printf("\n����������Ҽ�¼�Ĺؼ���: ");
	scanf("%d", &i);
	s = SearchBTree(T, i);
	if (s.tag)
		print(*(s.pt), s.i);
	else
		printf("û�ҵ�");
	printf("\n");

	return 0;
}
#endif