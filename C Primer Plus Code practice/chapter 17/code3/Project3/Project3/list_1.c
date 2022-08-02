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
//或：
void InitializeList(List* plist)
{
	plist = (List*)malloc(sizeof(List));//为List这个嵌套结构动态分配内存
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
	if (plist->items_count == MAXSIZE)//若用户未调用ListIsFull()函数，那么此语句也能检查能否再添加新项
		return false;

	int index = plist->items_count;
	*(plist->entries + index) = item;//拷贝结构
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
//以数组形式存储数据，清空数据函数只能做到把items_count重置为0，而不能真正删除数据
#endif