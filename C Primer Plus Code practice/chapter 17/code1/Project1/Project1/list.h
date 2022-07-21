#define _CRT_SECURE_NO_WARNINGS 1
#ifndef LIST_H
#define LIST_H
//*****�������ݽṹ���ṩ�û��ӿڵ�ԭ��*****

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
typedef struct note
{
	Item item;							//��������
	//Node* next;						//ָ����һ���ڵ��ָ��					//��������ʽ�ṹ�洢����
	//��
	struct node* next;
}Node;										//��note�ṹ��������ΪNode		//ÿ�����ڽ����ڵ�

typedef Node* List;				//��ָ��Node�ṹ���ֵ�ָ����������ΪList

/*����ԭ��*/

/* ������ ��ʼ��һ������ */
/* ǰ�������� plist ָ��һ������ */
/* ���������� �����ʼ��Ϊ�� */
void InitializeList(List * plist);//*****ע��List*plist��Node**plist��plist��ָ������ָ���ָ��*****

/* ������ ȷ�������Ƿ�Ϊ�գ�plist ָ��һ���ѳ�ʼ�������� */
/*���������� �������Ϊ�գ��ú�������true;���򷵻�false */
bool ListIsEmpty(const List *plist);

/*������ ȷ�������Ƿ�������plist ָ��һ���ѳ�ʼ�������� */
/* ���������� ��������������ú���������;���򷵻ؼ� */
bool ListIsFull(const List* plist);

/*������ ȷ�������е�������plist ָ��һ���ѳ�ʼ�������� */
/* ���������� �ú������������е����� */
unsigned int ListItemCount(const List* plist);

/*������ �������ĩβ�����*/
/*ǰ�������� item��һ���������������plist ָ��һ���ѳ�ʼ�������� */
/*���������� ������ԣ��ú���������ĩβ���һ����ҷ���true;���򷵻�false*/
bool AddItem(Item item, List* plist);

/*������ �Ѻ��������������е�ÿһ�plistָ��һ���ѳ�ʼ�������� */
/*pfunָ��һ���������ú�������һ��Item���͵Ĳ��������޷���ֵ */
/*���������� pfun ָ��ĺ��������������е�ÿһ��һ�� */
void Traverse(const List* plist, void(*pfun)(Item item));

/*������ �ͷ��ѷ�����ڴ棨����еĻ��� */
/* plist ָ��һ���ѳ�ʼ�������� */
/* ���������� �ͷ���Ϊ�������������ڴ棬��������Ϊ�� */
void EmptyTheList(List* plist);

#endif		/*LIST_H*/