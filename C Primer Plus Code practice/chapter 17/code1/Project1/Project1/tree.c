#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//strcmp()

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
	{
		fprintf(stderr, "������������\n");
		return false;
	}

	if (SeekItem(pitem, ptree).child != NULL)
	{
		fprintf(stderr, "�������д����ظ����\n");
		return false;
	}

	current = (Treenode*)malloc(sizeof(Treenode));//����Ϊ�½ڵ����ռ�
															  //currentָ���½ڵ㣬���½ڵ�ĵ�ַ
	if (current == NULL)//�ж��ܷ�Ϊ�½ڵ㶯̬�����ڴ�
	{
		fprintf(stderr, "����δ�ܷ��䵽�ڴ棡\n");
		return false;
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
	//return (ptree->size==0);
	return (ptree->root==NULL);
}

bool DeleteItem(const Item* pitem, Tree* ptree)
{
	Pair look;
	look = SeekItem(pitem,ptree);

	if (look.child == NULL)//��δ�ҵ�ָ����
		return false;
	if (look.parent == NULL)//���ҵ�ָ������ڸ��ڵ�
		DeleteNode(&ptree->root);
	else if (look.parent->left == look.child)//��ָ�������ڵĽڵ����丸�ڵ�����ӽڵ�
		DeleteNode(&look.parent->left);
	else//��ָ�������ڵĽڵ����丸�ڵ�����ӽڵ�
		DeleteNode(&look.parent->right);

	ptree->size--;

	return true;
}

int TreeItemCount(const Tree* ptree)
{
	return (ptree->size);
}

bool InTree(const Item* pitem, const Tree* ptree)
{
	return (SeekItem(pitem,ptree).child!=NULL)?true:false ;
}

void Traverse(const Tree* ptree, void(*p_function)(Item item))
{
	if (ptree != NULL)
		InOrder(ptree->root,p_function);
}

void DeleteAll(Tree* ptree)
{
	if (ptree != NULL)
		DeleteAllNodes(ptree->root);

	ptree->root = NULL;
	ptree->size = 0;
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

static bool Toleft(const Item* current_item, const Item* root_item)//Toleft()��Toright()���Կ�����������������
{							//					����											���е���
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
	if ((result = strcmp(current_item->petname, root_item->petname)) > 0)//��һ���ַ����ڵڶ����ַ�������
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

	while (look.child != NULL)//look.child==NULL���˳�ѭ��
	{
		if (Toleft(pitem, &(look.child->item)))
		{
			look.parent = look.child;//��parent��Ա�ȸ����ڵ�ĵ�ַ
			look.child = look.child->left;//child��Աֵ����Ϊ���ӽڵ�ĵ�ַ
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
		temp = *p_ptree;
		*p_ptree = (*p_ptree)->right;//�����ӽڵ�ĵ�ַ(������NULL)�����丸�ڵ��ָ�룬���ڵ��ָ����ֵ�õ�����
		free(temp);//�ͷ�ԭ���ĸ��ڵ�
	}
	else if ((*p_ptree)->right == NULL)//����ɾ���Ľڵ���û�����ӽڵ�Ľڵ�
	{
		temp = *p_ptree;
		*p_ptree = (*p_ptree)->left;//�����ӽڵ�ĵ�ַ�����丸�ڵ��ָ��
		free(temp);
	}
	else//����ɾ���Ľڵ��������ӽڵ�
	{
		for (temp = (*p_ptree)->left; temp->right != NULL; temp = temp->right)
			continue;//tempָ������������Ұ벿�����²���һ����λ��

		temp->right = (*p_ptree)->right;//�ҵ�������������ӵ���

		temp = *p_ptree;
		*p_ptree = (*p_ptree)->left;//�����������ӵ����ڵ���
		free(temp); //�ͷ�ԭ���ĸ��ڵ�
	}
}

static void InOrder(const Treenode* root, void (*p_function)(Item item))
{
	if (root != NULL)
	{
		InOrder(root->left,p_function);
		(*p_function)(root->item);
		InOrder(root->right,p_function);
	}
}

static void DeleteAllNodes(Treenode *root)
{
	Treenode* temp;

	if (root != NULL)
	{
		temp = root->right;
		DeleteAllNodes(root->left);
		free(root);
		DeleteAllNodes(temp);
	}
}

#endif