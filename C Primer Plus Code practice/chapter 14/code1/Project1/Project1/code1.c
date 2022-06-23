#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
#if 1
#endif


//利用结构，创建一本书的图书目录
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度

char* s_gets(char* string, int n);

struct book											//结构声明（也叫创建一个结构模板）	//book是个结构的标记，后面程序可以使用book引用此结构
{															//声明一个标记为book的结构
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//声明一个使用book结构布局的结构变量library（把library声明为一个book类型的变量）
	printf("请输入书名：\n");
	s_gets(library.shuming,MAX_SHUMING);//访问shuming数组

	puts("请输入作者姓名：");
	s_gets(library.zuozhe, MAX_ZUOZHE);//访问zuozhe数组

	puts("请输入售价：");
	scanf("%f",&library.value);

	printf("%s:《%s》（￥%.2f）",library.zuozhe,library.shuming,library.value);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string,n,stdin);
	if (fanhui)
	{
		find = strchr(string,'\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//利用结构，创建多本书的图书目录
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;
	int index;

	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);		
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	printf("以下是图书目录：\n");
	for (index = 0; index < count; index++)
	{
	printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//使用嵌套结构来表示数据
#if 0
#define LEN 20
const char* message[5] = {
"  Thank you for the wonderful evening, ",
"You certainly prove that a ",
"is a special kind of guy. We must get together",
"over a delicious ",
" and have a few laughs"
};
struct names
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//嵌套结构，声明一个使用name结构布局的结构变量handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow =//声明一个使用guy结构布局的结构变量fellow，并对其初始化
	{
		{"Ewen","Villard"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"personality coach",
		"grilled salmon",
		68112.00
	};

	printf("Dear %s,\n\n",fellow.handle.first);//******访问嵌套结构的成员（使用两次点运算符）***********
	printf("%s%s.\n",message[0],fellow.handle.first);//  Thank you for the wonderful evening, 
	printf("%s%s.\n", message[1], fellow.job);//You certainly prove that a 
	printf("%s\n",message[2]);//is a special kind of guy. We must get together
	printf("%s%s%s",message[3],fellow.favoriate_food,message[4]);// over a delicious        and have a few laughs

	if (fellow.income > 15000.0)
		puts("!!");
	else if (fellow.income > 75000.0)
		puts("!");
	else
		puts(".");

	printf("\n%40s%s\n",         " ",             "See you soon, ");
	printf("%40s%s\n",             " ",             "Luhao");

	return 0;
}
#endif


//使用指向结构的指针和嵌套结构来表示数据
#if 0
#define LEN 20
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//嵌套结构，声明一个使用names结构布局的结构变量handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow[2] =//声明一个使用guy结构布局的结构变量数组fellow[2]，并对其初始化
	{
		{//对fellow[1]初始化
		{"Ewen","Villard"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//对fellow[2]初始化
		{"Rodney", "Swillbelly"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//声明一个指向guy结构布局的结构的指针him

	printf("结构变量fellow[0]的地址：%p\n结构变量fellow[1]的地址：%p\n\n",&fellow[0],&fellow[1]);

	him = &fellow[0];
	printf("结构指针him的地址：%p\n      him+1的地址：%p\n", him, him+1);
	printf("him->income：%.2f\n(*him).income:%.2f\n\n",him->income,(*him).income);

	him++;
	printf("结构指针him++的地址：%p\n", him);
	printf("him->favoriate_food：%s\nhim->handle.last:%s\n\n", him->favoriate_food, him->handle.last);

	return 0;
}
#endif


//把结构成员作为实参传递（也可以把结构成员的地址作为实参传递）
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double x,double y);//声明一个函数

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n",sum(zhangsan.bankfund,zhangsan.savefund));

	return 0;
}
double sum(double x, double y)
{
	return (x+y);
}
#endif


//把结构的地址作为实参传递
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds * money);//声明一个函数，形参是一个指向funds结构布局的结构的指针money

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n", sum(&zhangsan));

	return 0;
}
double sum(const struct funds* money)
{
	return (              money->bankfund         +         (*money).savefund         );
}
#endif


//把结构作为实参传递
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds money);//声明一个函数，形参是一个使用funds结构布局的结构变量money

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n", sum(zhangsan));//向money结构变量的成员拷贝zhangsan结构变量的成员的值

	return 0;
}
double sum(const struct funds money)
{
	return (money.bankfund + money.savefund);
}
#endif


//使用结构指针进行函数间双向通信
#if 0
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
	int letters;
};

void getinfo(struct names *);//声明一个函数，形参是一个指向names结构布局的结构指针
void makeinfo(struct names*);
void showinfo(const struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person
	
	getinfo(&person);//对结构变量person的成员赋值
	makeinfo(&person);
	showinfo(&person);

	return 0;
}
void getinfo(struct names* p)
{
	puts("请输入你的姓");
	s_gets(p->first,LEN);
	puts("请输入你的名");
	s_gets(p->last, LEN);
}
void makeinfo(struct names*p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names*p)
{
	printf("%s %s,你的名字占%d个字节\n",p->first,p->last,p->letters);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//使用结构参数和返回值进行函数间双向通信
#if 1
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
	int letters;
};

struct names getinfo(void);//声明一个函数，返回值是使用names结构布局的结构变量，形参无
struct names makeinfo(struct names);
void showinfo( struct names);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person

	person=getinfo();//把一个结构赋值给另一个结构
	person=makeinfo(person);
	showinfo(person);

	return 0;
}
struct names getinfo(void)
{
	struct names temp;
	puts("请输入你的姓");
	s_gets(temp.first, LEN);
	puts("请输入你的名");
	s_gets(temp.last, LEN);

	return temp;
}
struct names makeinfo(struct names p)
{
	p.letters = strlen(p.first) + strlen(p.last);

	return p;
}
void showinfo(const struct names p)
{
	printf("%s %s,你的名字占%d个字节\n", p.first, p.last, p.letters);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
