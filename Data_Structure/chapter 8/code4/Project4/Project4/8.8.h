#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_8_8_H
#define CODE_8_8_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

#define m 3 /*  B���Ľף�����Ϊ3 */ 
#define N 17 /*  ����Ԫ�ظ��� */ 
#define MAX 5 /*  �ַ�����󳤶�+1  */

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */

typedef struct BTNode
{
	int keynum; /*  ����йؼ��ָ����������Ĵ�С */
	struct BTNode* parent; /*  ָ��˫�׽�� */
	struct Node /*  ����������� */
	{
		int key; /*  �ؼ������� */
		struct BTNode* ptr; /*  ����ָ������ */
		int recptr; /*  ��¼ָ������ */
	}node[m + 1]; /*  key,recptr��0�ŵ�Ԫδ�� */
}BTNode, * BTree; /*  B������B�������� */

typedef struct
{
	BTNode* pt; /*  ָ���ҵ��Ľ�� */
	int i; /*  1..m���ڽ���еĹؼ������ */
	int tag; /*  1:���ҳɹ���O:����ʧ�� */
}Result; /*  B���Ĳ��ҽ������ */

Result SearchBTree(BTree T, int K);
void InsertBTree(BTree* T, int key, BTree q, int i);

#endif
