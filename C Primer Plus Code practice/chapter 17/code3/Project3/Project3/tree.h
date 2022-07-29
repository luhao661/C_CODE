#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _TREE_H
#define _TREE_H

#include <stdbool.h>

#define LENGTH		20
#define MAXITEMS	10

typedef struct
{
	char danci[LENGTH];
	int cishu;
}Item;

typedef struct treenode
{
	Item item;
	struct treenode* left;
	struct treenode* right;
}Treenode;

typedef struct
{
	Treenode* root;
	int size;
}Tree;



/*������ ������ʼ��Ϊ�� */
/*ǰ�������� ptreeָ��һ���� */
/*���������� ������ʼ��Ϊ�� */
void InitializeTree(Tree* ptree);


/*������ ȷ�����Ƿ�Ϊ�� */
/*ǰ�������� ptree ָ��һ���� */
/*���������� �����Ϊ�գ��ú�������true */
/*���򣬷���false */
bool TreeIsEmpty(const Tree* ptree);


/*������ /*ǰ�������� ptree ָ��һ���� ȷ�����Ƿ����� */
/*���������� ������������ú�������true */
/*���򣬷��� false */
bool TreeIsFull(const Tree* ptree);


/*������ ȷ���������� */
/*ǰ�������� ptreeָ��һ���� */
/*���������� ������������ */
int TreeItemCount(const Tree* ptree);


/*������ ���������һ���� ��
/*ǰ�������� pi �Ǵ������ĵ�ַ */
/*ptree ָ��һ���ѳ�ʼ������ */
/*���������� ���������ӣ��ú��������������һ���� */
/*������true;���򣬷��� false */
bool AddItem(const Item* pitem, Tree* ptree);


/*������ �����в���һ���� */
/*ǰ�������� piָ��һ���� */
/*ptree ָ��һ���ѳ�ʼ������ */
/*���������� ������������һ����ú�������true */
/*���򣬷��� false */
bool InTree(const Item* pi, const Tree* ptree);


/*������ ������ɾ��һ���� */
/*ǰ�������� pi��ɾ����ĵ�ַ */
/*ptreeָ��һ���ѳ�ʼ������ * /
/*���������� ��������гɹ�ɾ��һ����ú�������true */
/*���򣬷���false */
bool DeleteItem(const Item* pi, Tree* ptree);


/*������ �Ѻ���Ӧ�������е�ÿһ�� */
/*ǰ�������� ptree ָ��һ���� */
/*pfun ָ��һ������ */
/*�ú�������һ�� Item���͵Ĳ��������޷���ֵ */
/*���������� pfun ָ����������Ϊ���е�ÿһ��ִ��һ�� */
void Traverse(const Tree* ptree, void(*pfun)(Item item));


/*������ ɾ�����е��������� */
/*ǰ�������� ptreeָ��һ���ѳ�ʼ������ */
/*���������� ��Ϊ�� */
void DeleteAll(Tree* ptree);


static void AddNode(Treenode* current, Treenode* root);
//����extern�������������뵥Ԫ�ļ����ǲ��ܷ�����Щ����
static bool Toleft(const Item* current_item, const Item* root_item);

static bool Toright(const Item* current_item, const Item* root_item);

typedef struct pair
{
	Treenode* parent;
	Treenode* child;
}Pair;

static Pair SeekItem(const Item* pitem, const Tree* ptree);

static void DeleteNode(Treenode** p_ptree);

static void InOrder(const Treenode* root, void (*p_function)(Item item));

static void DeleteAllNodes(Treenode* root);

#endif		/*_TREE_H*/