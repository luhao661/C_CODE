#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//17.12编程练习
//1.方法一：修改链表的定义
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current=0x01;					//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
			current->previous = NULL;//第一个节点之前的节点为NULL
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
			current->previous = prev;//第二个节点的previous指针存第一个节点的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构
	
		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

//struct film* temp = prev;//暂存current，即暂存最后一个节点的地址
/*也可以写成*/struct film* temp = current;//前提条件：current先要初始化

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");

	while (temp != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


//释放已分配的内存
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif
//1.方法二：用递归
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current ;								//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构

		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	
	struct film* temp = current;//暂存current，即暂存第一个节点的地址

	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");
	show_reversed_order(temp);


	//释放已分配的内存
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
/*
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		p = p->next;									//***错误***：p值被改变后再递归，导致第一个节点的内容无法打印出来
		show_reversed_order(p);				//还导致最后一个节点的内容会被打印两遍
	}	

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);		
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);
}
#endif


//2.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//创建一个P_Node结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，链表数量已达到最大值！");
		exit(1);
	}

	//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("链表数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//3.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list_1.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	List movies;//创建一个List结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，元素数量已达到最大值！");
		exit(1);
	}

	//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("元素数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//4.
#if 1
//创建队列数组
//顾客随机进队
#endif