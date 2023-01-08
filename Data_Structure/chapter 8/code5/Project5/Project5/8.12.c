#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "8.12.h"
#include <stdlib.h>

int m = 0; /* ɢ�б����ȫ�ֱ��� */

/* ��ʼ��ɢ�б� */
Status InitHashTable(HashTable* H)
{
	int i;
	m = HASHSIZE;

	H->count = m;
	H->elem = (int*)malloc(m * sizeof(int));

	for (i = 0; i < m; i++)
		H->elem[i] = NULLKEY;

	return OK;
}

/* ɢ�к��� */
static int Hash(int key)
{
	return key % m; /* ���������� */
}

/* ����ؼ��ֽ�ɢ�б� */
void InsertHash(HashTable* H, int key)
{
	int addr = Hash(key); /* ��ɢ�е�ַ */

	while (H->elem[addr] != NULLKEY) /* �����Ϊ�գ����ͻ */
	{										    //����ɢ�г�ͻ�ķ�����
		addr = (addr + 1) % m; /* ���Ŷ�ַ��������̽�� */
	}

	H->elem[addr] = key; /* ֱ���п�λ�����ؼ��� */
}

/* ɢ�б���ҹؼ��� */
Status SearchHash(HashTable H, int key, int* addr)
{
	*addr = Hash(key);  /* ��ɢ�е�ַ */

	while (H.elem[*addr] != key) /* ����ó����������Ҳ����ؼ��� */
	{
		*addr = (*addr + 1) % m; /* ���Ŷ�ַ��������̽�� */

		if (H.elem[*addr] == NULLKEY ||
			*addr == Hash(key)) /* ���̽�⵽NULLKEY��ѭ���ص�ԭ�� */

			return UNSUCCESS;	/* ��˵���ؼ��ֲ����� */
	}

	return SUCCESS;
}
#endif