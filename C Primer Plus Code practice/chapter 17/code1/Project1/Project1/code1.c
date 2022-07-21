#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strchr()
//
#if 1
#endif


//使用结构数组来存储数据
#if 0
#define LENGTH	45   //存储影片片名的最大长度
#define MAX			500//存储影片的最大数量

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string,int num);

int main(void)
{
	struct film movies[MAX];
	int jishu=0;

	puts("请输入电影的标题：");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d",&movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n",movies[index].title, movies[index].rating);

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


//使用结构和+动态内存分配，节省运行时使用的内存空间
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//存储影片片名的最大长度

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("请输入您要写入的电影数量\n");
	scanf("%d",&max);

	while (getchar()!='\n')
	continue;

	struct film *movies = (struct film*)malloc(max*sizeof(struct film));

	int jishu = 0;

	puts("请输入电影的标题：");
	while (jishu < max && s_gets((*(movies+jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n", movies[index].title, movies[index].rating);

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


//使用结构链表来表示数据
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char *string,int num);

int main(void)
{
	struct film* head=NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* previous=0x00, * current;							//3.定义一个以film结构布局的结构变量previous和current，并对previous初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
			head = current;
		else
			previous->next = current;							  	    //6.若处理的不是第一个结构，则结构指针previous指向的next成员(next也是个结构指针)存上一次分配的结构的地址

		current->next = NULL;												//7.表示当前结构是链表的最后一个结构
		strcpy(current->title,input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		previous = current;												    //8.previous指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的previous->next其中的previous
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	/****************
	//第一个结构被创建后，head存第一个结构的地址，												   第一个结构的next成员先设为NULL，输入内容后，第一个结构的地址存入previous，
	//第二个结构被创建后，previous(即第一个结构)的next成员存第二个结构的地址，第二个结构的next成员先设为NULL，输入内容后，第二个结构的地址存入previous，
	//第三个结构被创建后，previous(即第二个结构)的next成员存第三个结构的地址，第三个结构的next成员先设为NULL，输入内容后，第三个结构的地址存入previous
																																																									   ****************/

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n",current->title,current->rating);
		current = current->next;
	}

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


//定义新类型的方法，用3步完成从抽象到具体的过程
//1.提供类型属性和相关操作的抽象描述
//2.开发一个实现ADT的编程接口(指明如何存储数据和执行所需操作的函数)
//3.编写代码来使用接口，编写代码来实现接口
#if 1
//*****把接口应用于特定编程问题的源代码文件*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char *string,int num);

int main(void)
{
	List movies;//创建一个指向note结构布局的指针movies

	Item temp;//创建一个film结构布局的结构temp

	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr,"错误，链表数量已达到最大值！");
		exit(1);
	}

	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr,"错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("链表数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}																				

	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录");
		Traverse(&movies,showmovies);
	}
	printf("你输入了%d部电影\n",ListItemCount(&movies));
	
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title,item.rating);
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