#define _CRT_SECURE_NO_WARNINGS 1

#if 1

#include <stdio.h>
#include <stdlib.h>
#include "list_1.h"

void InitializeList(List* plist)
{
	//plist->entries[0].title[0] = '0';
	plist->items_count= 0;
}

bool ListIsFull(const List* plist)
{
	return (plist->items_count==MAXSIZE)?true:false;
}

bool AddItem(Item item, List* plist)
{
	if (plist->items_count == MAXSIZE-1)//若用户未调用ListIsFull()函数，那么此语句也能检查能否再添加新项
		return false;

	int index = plist->items_count;
	*(plist->entries + index) = item;
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

#endif