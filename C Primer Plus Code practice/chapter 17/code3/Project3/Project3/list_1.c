#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include <stdio.h>
#include <stdlib.h>
#include "list_1.h"

//void InitializeList(List* plist)
//{
//	//plist->entries[0].title[0] = '0';
//	plist->items_count= 0;
//}
//��
void InitializeList(List* plist)
{
	plist = (List*)malloc(sizeof(List));//ΪList���Ƕ�׽ṹ��̬�����ڴ�
	if (plist != NULL)
		plist->items_count = 0;
	else
		exit(EXIT_FAILURE);
}


bool ListIsFull(const List* plist)
{
	return (plist->items_count==MAXSIZE)?true:false;
}

bool AddItem(Item item, List* plist)
{
	if (plist->items_count == MAXSIZE)//���û�δ����ListIsFull()��������ô�����Ҳ�ܼ���ܷ����������
		return false;

	int index = plist->items_count;
	*(plist->entries + index) = item;//�����ṹ
	plist->items_count++;

	return true;
}

bool ListIsEmpty(const List* plist)
{
	if (plist->items_count == 0)
		return true;
	else
		return false;
}

void Traverse(const List* plist, void(*pfun)(Item item))
{
	int index=0;

	while ( index!= plist->items_count)
	{
		(*pfun)(plist->entries[index]);
		index++;
	}
}

unsigned int ListItemCount(const List* plist)
{
	return plist->items_count;
}

void EmptyTheList(List* plist)
{
	plist->items_count =0 ;
}
//��������ʽ�洢���ݣ�������ݺ���ֻ��������items_count����Ϊ0������������ɾ������
#endif