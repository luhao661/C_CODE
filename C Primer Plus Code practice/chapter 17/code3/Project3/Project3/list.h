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
typedef struct node
{
	Item item;							//��������	
	struct node* next;				//ָ����һ���ڵ��ָ��					//��������ʽ�ṹ�洢����

	//***ע***�Ͼ䲻��д��Node* next;ԭ����typedef��û�����������þ�ʹ����Node������ʱ������ܶ����				
	//���Դ˴���typedef������һ���ṹ���ͣ�����ʡ�Խṹ�ı��

}Node;										//��note�ṹ��������ΪNode		
												/***ÿ�����ڽ����ڵ㣬ÿ���ڵ�����������ݺ�ָ����һ���ڵ��ָ��***/

typedef struct
{
	Node* head;//ָ��ͷ����Node�ṹ�ĵ�ַ������ͷָ��һ��ʼΪNULL
	Node* end;//ָ���β����Node�ṹ�ĵ�ַ
}P_Node;//�Ѵ˽ṹ��������ΪP_Node

//ԭlist.h��
//typedef Node* P_Node;		//��ָ��Node�ṹ���ֵ�ָ����������ΪP_Node
//��дΪ��typedef struct node* P_Node;				



/*����ԭ��*/

/* ������ ��ʼ��һ������ */
/* ǰ�������� plist ָ��һ������ */
/* ���������� �����ʼ��Ϊ�� */
void InitializeList(P_Node* plist);
//����plist����&movies����P_Node�ṹ���ֵĽṹ�ĵ�ַ

//ԭlist.h��
//*****ע��List*plist��Node**plist��plist��ָ��	����ָ��(�����ַ)	��ָ��*****
//*****����plist����&movies����ָ���һ�������ָ��ĵ�ַ*******************
//*****����*plist��ָ���һ�������ָ��(��ͷָ��head)*************************


/*������ ȷ�������Ƿ�������plist ָ��һ���ѳ�ʼ�������� */
/* ���������� ��������������ú���������;���򷵻ؼ� */
bool ListIsFull(const P_Node* plist);


/*������ �������ĩβ�����*/
/*ǰ�������� item��һ���������������plist ָ��һ���ѳ�ʼ�������� */
/*���������� ������ԣ��ú���������ĩβ���һ����ҷ���true;���򷵻�false*/
bool AddItem(Item item, P_Node* plist);


/* ������ ȷ�������Ƿ�Ϊ�գ�plist ָ��һ���ѳ�ʼ�������� */
/*���������� �������Ϊ�գ��ú�������true;���򷵻�false */
bool ListIsEmpty(const P_Node* plist);


/*������ �Ѻ��������������е�ÿһ�plistָ��һ���ѳ�ʼ�������� */
/*pfunָ��һ���������ú�������һ��Item���͵Ĳ��������޷���ֵ */
/*���������� pfun ָ��ĺ��������������е�ÿһ��һ�� */
void Traverse(const P_Node* plist, void(*pfun)(Item item));


/*������ ȷ�������е�������plist ָ��һ���ѳ�ʼ�������� */
/* ���������� �ú������������е����� */
unsigned int ListItemCount(const P_Node* plist);


/*������ �ͷ��ѷ�����ڴ棨����еĻ��� */
/* plist ָ��һ���ѳ�ʼ�������� */
/* ���������� �ͷ���Ϊ�������������ڴ棬��������Ϊ�� */
void EmptyTheList(P_Node* plist);


#endif		/*LIST_H*/