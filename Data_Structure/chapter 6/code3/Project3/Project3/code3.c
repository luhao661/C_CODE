#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ������������
//����6.10.c
#if 1
#include "6.10.h"

int main()
{
	BiThrTree H, T;//����ָ��ڵ��ָ��H��T

	printf("�밴ǰ�����������(��:'ABDH##I##EJ###CF##G##')\n");

	CreateBiThrTree(&T); /* ��ǰ����������� */
	InOrderThreading(&H, T); /* �������,������������������ */
	printf("�������(���)����������:\n");
	InOrderTraverse_Thr(H); /* �������(���)���������� */
	printf("\n");

	return 0;
}
#endif
