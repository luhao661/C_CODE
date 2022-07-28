#define _CRT_SECURE_NO_WARNINGS 1

#ifndef LIST_H
#define LIST_H
//*****定义数据结构和提供用户接口的原型*****

#define MAXSIZE 100
#define LENGTH 45
#include <stdbool.h>


//存储项目
struct film
{
	char title[LENGTH];
	int rating;
};
typedef struct film Item;//把film结构布局命名为Item


//确定如何存储这种类型的项
//链表的节点
//typedef struct node
//{
//	Item item;							//链表内容	
//	struct node* next;				//指向下一个节点的指针					//表明用链式结构存储数据
//
//	//***注***上句不能写成Node* next;原因是typedef还没给类型命名好就使用了Node，编译时会产生很多错误				
//	//所以此处用typedef来命名一个结构类型，但不省略结构的标记
//
//}Node;										//把note结构布局命名为Node		
												/***每个链节叫做节点，每个节点包含链表内容和指向下一个节点的指针***/

typedef struct
{
	Item entries[MAXSIZE];//entries数组的每个元素都是Item结构布局的结构
	int items_count;
}List;

	

/*函数原型*/


void InitializeList(List* plist);


bool ListIsFull(const List* plist);


bool AddItem(Item item, List* plist);


bool ListIsEmpty(const List* plist);


void Traverse(const List* plist, void(*pfun)(Item item));


unsigned int ListItemCount(const List* plist);


void EmptyTheList(List* plist);


#endif		/*LIST_H*/