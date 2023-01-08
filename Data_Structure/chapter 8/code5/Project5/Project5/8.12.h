#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_8_12_H
#define CODE_8_12_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

#define SUCCESS 1
#define UNSUCCESS 0
#define HASHSIZE 12 /* ����ɢ�б�Ϊ����ĳ��� */
#define NULLKEY -32768 

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

typedef struct
{
	int* elem; /* ����Ԫ�ش洢��ַ����̬�������� */
	int count; /*  ��ǰ����Ԫ�ظ��� */
}HashTable;

//int m = 0; /* ɢ�б����ȫ�ֱ��� */

Status InitHashTable(HashTable* H);
void InsertHash(HashTable* H, int key);
Status SearchHash(HashTable H, int key, int* addr);

#endif
