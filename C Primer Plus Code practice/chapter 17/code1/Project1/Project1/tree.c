#define _CRT_SECURE_NO_WARNINGS 1

#if 0

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//strcmp()

void InitializeTree(Tree* ptree)
{
	ptree->root = NULL;
	(* ptree).size = 0;//第二种写法
}

bool TreeIsFull(const Tree* ptree)
{
	return (ptree->size==MAXITEMS);
}

bool AddItem(const Item* pitem, Tree* ptree)
{
	Treenode* current;

	if (TreeIsFull(ptree))//判断是否达到设置的最大的节点数量
	{
		fprintf(stderr, "错误，树已满！\n");
		return false;
	}

	if (SeekItem(pitem, ptree).child != NULL)
	{
		fprintf(stderr, "错误，树中存在重复的项！\n");
		return false;
	}

	current = (Treenode*)malloc(sizeof(Treenode));//首先为新节点分配空间
															  //current指向新节点，存新节点的地址
	if (current == NULL)//判断能否为新节点动态分配内存
	{
		fprintf(stderr, "错误，未能分配到内存！\n");
		return false;
	}

	current->item = *pitem;//若分配成功，则把项拷贝到新节点中(拷贝结构)

	current->left = NULL;//表明该节点是最后一个节点(该节点没有子节点)
	current->right = NULL;

	if (ptree->root == NULL)//当树为空时
		ptree->root = current;//新节点设置为根节点
	else									  //当树不为空
		AddNode(current,ptree->root);//遍历树找到合适的位置放置该节点

	ptree->size++;//节点数增1

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

	if (look.child == NULL)//若未找到指定项
		return false;
	if (look.parent == NULL)//若找到指定项，但在根节点
		DeleteNode(&ptree->root);
	else if (look.parent->left == look.child)//若指定项所在的节点是其父节点的左子节点
		DeleteNode(&look.parent->left);
	else//若指定项所在的节点是其父节点的右子节点
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

//二叉查找树能二分查找数据，前提是数据项有顺序
//反映在AddNode函数要比较新项和根项，以确定把新项放在左子树还是右子树中
static void AddNode(Treenode* current, Treenode* root)
{
	if (Toleft(&current->item, &root->item))
	{
		if (root->left == NULL)
			root->left = current;
		else
			AddNode(current, root->left);//递归调用函数，root每次都指向当前(新的下一级)子树的顶部
	}
	else if (Toright(&current->item, &root->item))
	{
		if (root->right == NULL)
			root->right = current;
		else
			AddNode(current, root->right);
	}
	else//当输入了重复的项
	{
		fprintf(stderr, "AddNode()函数未能决定新项的位置!\n");
		exit(1);
	}
}

static bool Toleft(const Item* current_item, const Item* root_item)//Toleft()和Toright()可以看作是两个导航函数
{							//					新项											树中的项
	int result;
	if ((result = strcmp(current_item->petname, root_item->petname)) < 0)//第一个字符串在第二个字符串前面
		return true;
	else if (result == 0 && strcmp(current_item->petkind, root_item->petkind) < 0)
		return true;
	else//第一个字符串在第二个字符串后面，或两字符串相同
		return false;
}

static bool Toright(const Item* current_item, const Item* root_item)
{
	int result;
	if ((result = strcmp(current_item->petname, root_item->petname)) > 0)//第一个字符串在第二个字符串后面
		return true;
	else if (result == 0 && strcmp(current_item->petkind, root_item->petkind) > 0)
		return true;
	else//第一个字符串在第二个字符串前面，或两字符串相同
		return false;
}

static Pair SeekItem(const Item* pitem, const Tree* ptree)
{
	Pair look;
	look.parent = NULL;//根节点没有父节点
	look.child = ptree->root;//先指向树的根节点

	if (look.child == NULL)//若是空树
		return look;

	while (look.child != NULL)//look.child==NULL则退出循环
	{
		if (Toleft(pitem, &(look.child->item)))
		{
			look.parent = look.child;//给parent成员先赋根节点的地址
			look.child = look.child->left;//child成员值更新为左子节点的地址
		}
		else if (Toright(pitem, &(look.child->item)))
		{
			look.parent = look.child;
			look.child = look.child->right;
		}
		else//说明找到了相同的项，look.child存树中该项所在节点的地址
			break;
	}

	return look;
}

static void DeleteNode(Treenode** p_ptree)//p_ptree是指向目标节点的父节点指针的指针，存指向目标节点的父节点指针的地址
{
	Treenode* temp;

	if ((*p_ptree)->left == NULL)//若待删除的节点是没有左子节点的节点，或者是叶子节点
	{
		temp = *p_ptree;
		*p_ptree = (*p_ptree)->right;//则将右子节点的地址(可以是NULL)赋给其父节点的指针，父节点的指针存的值得到更新
		free(temp);//释放原来的父节点
	}
	else if ((*p_ptree)->right == NULL)//若待删除的节点是没有右子节点的节点
	{
		temp = *p_ptree;
		*p_ptree = (*p_ptree)->left;//则将左子节点的地址赋给其父节点的指针
		free(temp);
	}
	else//若待删除的节点有两个子节点
	{
		for (temp = (*p_ptree)->left; temp->right != NULL; temp = temp->right)
			continue;//temp指针从左子树的右半部分向下查找一个空位，

		temp->right = (*p_ptree)->right;//找到后把右子树连接到此

		temp = *p_ptree;
		*p_ptree = (*p_ptree)->left;//把左子树连接到父节点上
		free(temp); //释放原来的父节点
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