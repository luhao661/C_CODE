#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ɢ�б�(��ϣ��)(Harsh Table)���ҵ�ʵ��
//����8.12.c
#if 0
#include "8.12.h"

//***ע***
//��P328
//���һ��Դ�����ļ�ʹ�õ��ⲿ������������һ��Դ�����ļ��У�
//������� extern�ڸ��ļ��������ñ�����(��������ʽ����)
extern int m;

int main()
{
	int arr[HASHSIZE] = { 12,67,56,16,25,37,22,29,15,47,48,34 };
	int i, p, key, result;
	HashTable H;

	key = 39;

	//��ʼ����ϣ��
	InitHashTable(&H);

	//����������ؼ���
	for (i = 0; i < m; i++)
		InsertHash(&H, arr[i]);

	//�����ؼ��ֶ�Ӧ�ĵ�ַ
	result = SearchHash(H, key, &p);
	if (result)
		printf("���� %d �ĵ�ַΪ��%d \n", key, p);
	else
		printf("���� %d ʧ�ܡ�\n", key);

	for (i = 0; i < m; i++)
	{
		key = arr[i];
		SearchHash(H, key, &p);
		printf("���� %d �ĵ�ַΪ��%d \n", key, p);
	}

	return 0;
}
#endif
