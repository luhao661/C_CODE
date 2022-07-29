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



/*操作∶ 把树初始化为空 */
/*前提条件∶ ptree指向一个树 */
/*后置条件∶ 树被初始化为空 */
void InitializeTree(Tree* ptree);


/*操作∶ 确定树是否为空 */
/*前提条件∶ ptree 指向一个树 */
/*后置条件∶ 如果树为空，该函数返回true */
/*否则，返回false */
bool TreeIsEmpty(const Tree* ptree);


/*操作∶ /*前提条件∶ ptree 指向一个树 确定树是否已满 */
/*后置条件∶ 如果树已满，该函数返回true */
/*否则，返回 false */
bool TreeIsFull(const Tree* ptree);


/*操作∶ 确定树的项数 */
/*前提条件∶ ptree指向一个树 */
/*后置条件∶ 返回树的项数 */
int TreeItemCount(const Tree* ptree);


/*操作∶ 在树中添加一个项 ·
/*前提条件∶ pi 是待添加项的地址 */
/*ptree 指向一个已初始化的树 */
/*后置条件∶ 如果可以添加，该函数将在树中添加一个项 */
/*并返回true;否则，返回 false */
bool AddItem(const Item* pitem, Tree* ptree);


/*操作∶ 在树中查找一个项 */
/*前提条件∶ pi指向一个项 */
/*ptree 指向一个已初始化的树 */
/*后置条件∶ 如果在树中添加一个项，该函数返回true */
/*否则，返回 false */
bool InTree(const Item* pi, const Tree* ptree);


/*操作∶ 从树中删除一个项 */
/*前提条件∶ pi是删除项的地址 */
/*ptree指向一个已初始化的树 * /
/*后置条件∶ 如果从树中成功删除一个项，该函数返回true */
/*否则，返回false */
bool DeleteItem(const Item* pi, Tree* ptree);


/*操作∶ 把函数应用于树中的每一项 */
/*前提条件∶ ptree 指向一个树 */
/*pfun 指向一个函数 */
/*该函数接受一个 Item类型的参数，并无返回值 */
/*后置条件∶ pfun 指向的这个函数为树中的每一项执行一次 */
void Traverse(const Tree* ptree, void(*pfun)(Item item));


/*操作∶ 删除树中的所有内容 */
/*前提条件∶ ptree指向一个已初始化的树 */
/*后置条件∶ 树为空 */
void DeleteAll(Tree* ptree);


static void AddNode(Treenode* current, Treenode* root);
//或用extern，但是其他翻译单元文件还是不能访问这些函数
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