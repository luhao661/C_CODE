#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����������
//����8.6.c
#if 0
#include "8.6.h"

int main(void)
{
	int i;
	int a[10] = { 62,88,58,47,35,73,51,99,37,93 };
	BiTree T = NULL;

	for (i = 0; i < 10; i++)
	{
		InsertBST(&T, a[i]);
	}
	DeleteBST(&T, 93);
	DeleteBST(&T, 47);
	printf("����������ϵ���ٲ鿴�����������ṹ");
	return 0;
}
#endif