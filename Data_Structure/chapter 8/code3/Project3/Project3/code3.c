#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ƽ�������(AVL��)
//����8.7.c
#if 0
#include "8.7.h"
int main(void)
{
	int i;
	int a[10] = { 3,2,1,4,5,6,7,10,9,8 };
	BiTree T = NULL;
	Status taller;
	for (i = 0; i < 10; i++)
	{
		InsertAVL(&T, a[i], &taller);
	}
	printf("����������ϵ���ٲ鿴ƽ��������ṹ");
	return 0;
}
#endif