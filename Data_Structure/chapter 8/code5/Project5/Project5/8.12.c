#define _CRT_SECURE_NO_WARNINGS 1

#if 1
#include "8.12.h"
#include <stdlib.h>

int m = 0; /* 散列表表长，全局变量 */

/* 初始化散列表 */
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

/* 散列函数 */
static int Hash(int key)
{
	return key % m; /* 除留余数法 */
}

/* 插入关键字进散列表 */
void InsertHash(HashTable* H, int key)
{
	int addr = Hash(key); /* 求散列地址 */

	while (H->elem[addr] != NULLKEY) /* 如果不为空，则冲突 */
	{										    //处理散列冲突的方法：
		addr = (addr + 1) % m; /* 开放定址法的线性探测 */
	}

	H->elem[addr] = key; /* 直到有空位后插入关键字 */
}

/* 散列表查找关键字 */
Status SearchHash(HashTable H, int key, int* addr)
{
	*addr = Hash(key);  /* 求散列地址 */

	while (H.elem[*addr] != key) /* 如果用除留余数法找不到关键字 */
	{
		*addr = (*addr + 1) % m; /* 开放定址法的线性探测 */

		if (H.elem[*addr] == NULLKEY ||
			*addr == Hash(key)) /* 如果探测到NULLKEY或循环回到原点 */

			return UNSUCCESS;	/* 则说明关键字不存在 */
	}

	return SUCCESS;
}
#endif