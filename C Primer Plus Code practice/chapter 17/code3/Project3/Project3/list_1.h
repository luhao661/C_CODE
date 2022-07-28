#define _CRT_SECURE_NO_WARNINGS 1

#ifndef LIST_H
#define LIST_H
//*****�������ݽṹ���ṩ�û��ӿڵ�ԭ��*****

#define MAXSIZE 100
#define LENGTH 45
#include <stdbool.h>


//�洢��Ŀ
struct film
{
	char title[LENGTH];
	int rating;
};
typedef struct film Item;//��film�ṹ��������ΪItem


//ȷ����δ洢�������͵���
//����Ľڵ�
//typedef struct node
//{
//	Item item;							//��������	
//	struct node* next;				//ָ����һ���ڵ��ָ��					//��������ʽ�ṹ�洢����
//
//	//***ע***�Ͼ䲻��д��Node* next;ԭ����typedef��û�����������þ�ʹ����Node������ʱ������ܶ����				
//	//���Դ˴���typedef������һ���ṹ���ͣ�����ʡ�Խṹ�ı��
//
//}Node;										//��note�ṹ��������ΪNode		
												/***ÿ�����ڽ����ڵ㣬ÿ���ڵ�����������ݺ�ָ����һ���ڵ��ָ��***/

typedef struct
{
	Item entries[MAXSIZE];//entries�����ÿ��Ԫ�ض���Item�ṹ���ֵĽṹ
	int items_count;
}List;

	

/*����ԭ��*/


void InitializeList(List* plist);


bool ListIsFull(const List* plist);


bool AddItem(Item item, List* plist);


bool ListIsEmpty(const List* plist);


void Traverse(const List* plist, void(*pfun)(Item item));


unsigned int ListItemCount(const List* plist);


void EmptyTheList(List* plist);


#endif		/*LIST_H*/