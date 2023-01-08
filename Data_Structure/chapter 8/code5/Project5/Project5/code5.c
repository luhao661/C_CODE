#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//散列表(哈希表)(Harsh Table)查找的实现
//链接8.12.c
#if 0
#include "8.12.h"

//***注***
//书P328
//如果一个源代码文件使用的外部变量定义在另一个源代码文件中，
//则必须用 extern在该文件中声明该变量。(属于引用式声明)
extern int m;

int main()
{
	int arr[HASHSIZE] = { 12,67,56,16,25,37,22,29,15,47,48,34 };
	int i, p, key, result;
	HashTable H;

	key = 39;

	//初始化哈希表
	InitHashTable(&H);

	//向哈西表插入关键字
	for (i = 0; i < m; i++)
		InsertHash(&H, arr[i]);

	//搜索关键字对应的地址
	result = SearchHash(H, key, &p);
	if (result)
		printf("查找 %d 的地址为：%d \n", key, p);
	else
		printf("查找 %d 失败。\n", key);

	for (i = 0; i < m; i++)
	{
		key = arr[i];
		SearchHash(H, key, &p);
		printf("查找 %d 的地址为：%d \n", key, p);
	}

	return 0;
}
#endif
