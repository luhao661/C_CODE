#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

void InitializeTree(Tree* ptree)
{
	ptree->root = NULL;
	(* ptree).size = 0;//�ڶ���д��
}

bool TreeIsFull(const Tree* ptree)
{
	return (ptree->size==MAXITEMS);
}

bool AddItem(const Item* pitem, Tree* ptree)
{
	Treenode* current;

	if (TreeIsFull(ptree))//�ж��Ƿ�ﵽ���õ����Ľڵ�����
		return false;

	if (SeekItem(pitem, ptree).child != NULL)
	{
		fprintf(stderr, "�������д����ظ����");
		return false;
	}

	current = (Treenode*)malloc(sizeof(Treenode));//����Ϊ�½ڵ����ռ�
															  //currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//�ж��ܷ�Ϊ�½ڵ㶯̬�����ڴ�
	{
		fprintf(stderr, "����δ�ܷ��䵽�ڴ棡");
		exit(1);
	}

	current->item = *pitem;//������ɹ������������½ڵ���(�����ṹ)

	current->left = NULL;//�����ýڵ������һ���ڵ�(�ýڵ�û���ӽڵ�)
	current->right = NULL;

	if (ptree->root == NULL)//����Ϊ��ʱ
		ptree->root = current;//�½ڵ�����Ϊ���ڵ�
	else									  //������Ϊ��
		AddNode(current,ptree->root);//�������ҵ����ʵ�λ�÷��øýڵ�

	ptree->size++;//�ڵ�����1

	return true;
}

bool TreeIsEmpty(const Tree* ptree)
{
	return (ptree->size==0);
}

bool DeleteItem(const Item* pitem, Tree* ptree)
{
	
}

int TreeItemCount(const Tree* ptree)
{
	return (ptree->size);
}

bool InTree(const Item* pitem, const Tree* ptree)
{
	return (SeekItem(pitem,ptree).child!=NULL)?true:false ;
}

void Traverse(const Tree* ptree, void(*pfun)(Item item));
void DeleteAll(Tree* ptree)
{

}

//����������ܶ��ֲ������ݣ�ǰ������������˳��
//��ӳ��AddNode����Ҫ�Ƚ�����͸����ȷ�����������������������������
static void AddNode(Treenode* current, Treenode* root)
{
	if (Toleft(&current->item, &root->item))
	{
		if (root->left == NULL)
			root->left = current;
		else
			AddNode(current, root->left);//�ݹ���ú�����rootÿ�ζ�ָ��ǰ(�µ���һ��)�����Ķ���
	}
	else if (Toright(&current->item, &root->item))
	{
		if (root->right == NULL)
			root->right = current;
		else
			AddNode(current, root->right);
	}
	else//���������ظ�����
	{
		fprintf(stderr, "AddNode()����δ�ܾ��������λ��!\n");
		exit(1);
	}
}

static bool Toleft(const Item* current_item, const Item* root_item)
{
	int result;
	if ((result = strcmp(current_item->petname, root_item->petname)) < 0)//��һ���ַ����ڵڶ����ַ���ǰ��
		return true;
	else if (result == 0 && strcmp(current_item->petkind, root_item->petkind) < 0)
		return true;
	else//��һ���ַ����ڵڶ����ַ������棬�����ַ�����ͬ
		return false;
}

static bool Toright(const Item* current_item, const Item* root_item)
{
	int result;
	if ((result = strcmp(current_item->petname, root_item->petname)) > 0)//��һ���ַ����ڵڶ����ַ���ǰ��
		return true;
	else if (result == 0 && strcmp(current_item->petkind, root_item->petkind) > 0)
		return true;
	else//��һ���ַ����ڵڶ����ַ���ǰ�棬�����ַ�����ͬ
		return false;
}

static Pair SeekItem(const Item* pitem, const Tree* ptree)
{
	Pair look;
	look.parent = NULL;//���ڵ�û�и��ڵ�
	look.child = ptree->root;//��ָ�����ĸ��ڵ�

	if (look.child == NULL)//���ǿ���
		return look;

	while (look.child != NULL)
	{
		if (Toleft(pitem, &(look.child->item)))
		{
			look.parent = look.child;
			look.child = look.child->left;
		}
		else if (Toright(pitem, &(look.child->item)))
		{
			look.parent = look.child;
			look.child = look.child->right;
		}
		else//˵���ҵ�����ͬ���look.child�����и������ڽڵ�ĵ�ַ
			break;
	}

	return look;
}

static void DeleteNode(Treenode** p_ptree)//p_ptree��ָ��Ŀ��ڵ�ĸ��ڵ�ָ���ָ�룬��ָ��Ŀ��ڵ�ĸ��ڵ�ָ��ĵ�ַ
{
	Treenode* temp;

	if ((*p_ptree)->left == NULL)//����ɾ���Ľڵ���û�����ӽڵ�Ľڵ㣬������Ҷ�ӽڵ�
	{
	
	}
}