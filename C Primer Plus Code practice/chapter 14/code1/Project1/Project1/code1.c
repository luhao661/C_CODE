#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
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
		{//对fellow[0]初始化
		{"Ewen","Villard"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//对fellow[1]初始化
		{"Rodney", "Swillbelly"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//声明一个指向guy结构布局的结构的指针him

	printf("结构变量fellow[0]的地址：%p\n结构变量fellow[1]的地址：%p\n\n",&fellow[0],&fellow[1]);

	him = &fellow[0];//结构指针指向fellow[0]结构
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
#if 0
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


//使用指向char的指针来代替字符数组
#if 0
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char *first;//使用指针来代替字符数组
	char *last;
	int letters;
};

void getinfo(struct names*);//声明一个函数，形参是一个指向names结构布局的结构指针
void makeinfo(struct names*);
void showinfo(const struct names*);
void cleanup(struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person

	getinfo(&person);//对结构变量person的成员赋值
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}
void getinfo(struct names* p)
{
	char temp[LEN];
	puts("请输入你的姓");
	s_gets(temp, LEN);//数据暂存入temp数组
	p->first = (char*)malloc(strlen(temp)+1);//first指针指向分配到的内存，这样就不会造成s_gets(p->first, LEN);
	strcpy(p->first,temp);																			//导致数据被存在任何可能造成程序崩溃的地方。

	puts("请输入你的名");
	s_gets(temp, LEN);
	p->last = (char*)malloc(strlen(temp) + 1);
	strcpy(p->last, temp);
}
void makeinfo(struct names* p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names* p)
{
	printf("%s %s,你的名字占%d个字节\n", p->first, p->last, p->letters);
}
void cleanup(struct names*p)
{
	free(p->first);
	free(p->last);
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


//使用代表结构内容的复合字面量
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

	puts("请输入考试分数：");
	int score;

	scanf("%d",&score);

	if (score >= 84)
		library = (struct book){
	"shuming1",
	"zuozhe1",
	11.25
	};
	else 
		library = (struct book){
"shuming2",
"zuozhe2",
5.99
	};

	printf("你应该读的书是%s:《%s》（￥%.2f）", library.zuozhe, library.shuming, library.value);

	return 0;
}
#endif


//使用伸缩型数组成员
#if 0
struct flex
{
	size_t count;
	double average;
	double scores[];
};
void showflex(const struct flex *p);//形参：一个指向flex结构布局的结构的指针p

int main(void)
{
	struct flex* p1;
	int n = 5;
	int i;
	int total = 0;

	p1 = malloc(sizeof(struct flex)+n*sizeof(double));//为常规内容和伸缩型数组成员分配所需的内存空间

	p1->count = n;
	for (i = 0; i < n; i++)
	{
		p1->scores[i] = 20.0 - i;//为5个数组元素赋值
		total += p1->scores[i];
	}
	p1->average = total / n;

	showflex(p1);

	free(p1);

	return 0;
}
void showflex(const struct flex* p)
{
	printf("scores:");
	for (int i = 0; i < p->count; i++)
		printf("%-8.2f",p->scores[i]);

	printf("\naverage:%.2f\n",p->average);
}
#endif


//使用结构数组进行函数间双向通信（本质上还是把结构的地址作为实参传递）
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds *money,int n);//声明一个函数，形参是一个使用funds结构布局的结构变量money

int main(void)
{
	struct funds zhangsan[2] =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
		{
		"Bank of China",
		4032.27,
		"Luck's Savings",
		8543.94
		},
		{
		"China Construction Bank",
		3620.88,
		"Party Time Savings",
		3802.91
	    }

	};
	printf("张三总共有%.2f块钱\n", sum(zhangsan,2));//*******************【拷贝】给函数zhangsan这个结构   ╳    *******************
																					  //正确理解：传递的是zhangsan数组的地址，即该数组首元素的地址&zhangsan[0]
	return 0;																	  //对比第320行。结构变量名不是结构的地址。但此处是zhangsan是个结构数组，
}																					  //*********因此zhangsan是数组地址也是结构地址，传递的是结构地址**********
double sum(const struct funds *money,int n)
{												//money指向zhangsan[0]，存储&zhangsan[0]
	double total;
	int i;
	for (i = 0, total = 0; i < n; i++)
	{
		total += money[i].bankfund + (   * (money + i)   ).savefund;//money[i]相当于*(money+i)
	}																									    //money[0]就是zhangsan[0]结构变量
	return total;																				    //money[1]就是zhangsan[1]结构变量
}
#endif


//在文件中保存结构中的内容
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

	//打开文件，并计算文件中原有的图书数量
	FILE* fp;
	if ((fp = fopen("book_data.txt", "a+b")) == NULL)
	{
		fputs("打开文件失败！",stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp)==1)
	{
		if (count == 0)
			puts("当前文件中含有的图书信息如下：");

		printf("%s:《%s》（￥%.2f）\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//保存文件中图书数量的值        (注：此处count的值是文件中图书数量的值，因为count从0开始递增)
	int filecount = count;				//      (count值能赋给filecount，两者都能在后面程序中成为索引值)

	//判断文件中图书数量是否大于了100本
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr,"book_data.txt已满！");
		exit(EXIT_FAILURE);
	}

	//文件中图书数量没到100本
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

		if(count<MAX_SHULIANG)
		printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	//显示添加的图书，并把新加的图书也保存在文件中
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fwrite(&library[filecount], sizeof(struct book), count-filecount, fp);
																		  //count-filecount得出新添加的图书数量
	puts("存入文件已完成！");
	fclose(fp);                                                      //************************注意*************************************
																		   //若写成fclose("fp");则程序不会把数据存入文件，还难以排查错误！！！
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
//命令行运行程序：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project1.exe
#endif


//使用枚举类型来提高程序的可读性
#if 0
#define LEN 30
char* s_gets(char* string, int n);

enum spectrum {red, orange, yellow, green, blue, violet};//声明一个标记为spectrum的枚举类型

//const char ** colors = { "red","orange","yellow","green","blue","violet" };												//这样写不行
const char* colors[6] = {"red","orange","yellow","green","blue","violet"};//用于和输入内容比较

int main(void)
{
	enum spectrum color;//声明一个使用spectrum枚举布局的枚举变量color

	char choice[LEN];
	int biaoji=0;//标记输入内容是否与给定的字符串内容相同
	puts("请用英文输入一种颜色(在空行按下[Enter]以退出)：");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)//for (color =0; color <= 5; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
				biaoji = 1;
			break;
		}

		if (biaoji)//输入内容与给定的字符串内容相同
		{
			switch (color)//枚举变量color，此处用法与整数变量相同
			{
			case red://枚举常量(枚举符)是int类型的常量，red代表0
				puts("玫瑰是红色的");
				break;
			case orange:
				puts("马缨丹是橙色的");
			case yellow:
				puts("葵花是黄色的");
			case green:
				puts("草是绿色的");
			case blue:
				puts("风信子是蓝色的");
			case violet:
				puts("紫罗兰是紫色的");
			}
		}
		else
			printf("我不知道什么植物的颜色是%s\n", choice);

		biaoji = 0;
		puts("请用英文输入一种颜色(在空行按下[Enter]以退出)：");
	}
	puts("再见！");

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


//使用typedef提高程序的可读性
#if 0
typedef struct book											
{														
	char shuming[2];
	char zuozhe[3];
	float value;
} BOOK;

int main(void)
{
	BOOK library;

	library.value= 1.1;
	BOOK.shuming[0] = 'a';

	char shuming[2] = { "a" };
	return 0;
}
#endif


//使用函数指针
#if 0
#define LEN 81
char* s_gets(char *string, int n);
char showmenu(void);
void eatline(void);																		//清理输入缓冲区
void show(        void (*function_p)(char *),            char *string          );//选择的函数和待处理的内容
void Toupper(char *);
void Tolower(char*);
void Transpose(char*);
void Original(char *);

int main(void)
{
	char yuanshuju[LEN];
	char daichuli[LEN];

	void (*function_p)(char *);//声明一个函数指针，指向的函数形参是char*，返回值是void
	char choice;

	puts("请输入一个字符串（在空行输入[Enter]以退出程序）：");
	while (s_gets(yuanshuju, LEN) != NULL && yuanshuju[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u':
				function_p = Toupper;
				break;
			case 'l':
				function_p = Tolower;
				break;
			case 't':
				function_p = Transpose;
				break;
			case 'o':
				function_p = Original;
				break;
			default:
				function_p = NULL;
				puts("出现错误！");
				exit(1);
			}
			strcpy(daichuli,yuanshuju);
			show(function_p, daichuli);
		}

		puts("请输入一个字符串（在空行输入[Enter]以退出程序）：");
	}
	puts("再见！");

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
char showmenu(void)
{
	char answer;
	puts("请输入您选择的菜单上的功能：");
	puts("u) 转换成大写	l)转换成小写");
	puts("t) 大小写转置	o)原始字符串");
	puts("n)处理下一条字符串");

	answer = getchar();
	answer = tolower(answer);//使用C库的tolower()
	
	eatline();
	while (strchr("ulton", answer) == NULL)
	{
		puts("请输入u、l、t、o或n");
		answer = tolower(getchar());
		eatline();
	}

	return answer;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void Toupper(char*string)
{
	while (*string != '\0')
	{
		*string = toupper(*string);
		string++;
	}
}
void Tolower(char*string)
{
	while (*string != '\0')
	{
		*string = tolower(*string);
		string++;
	}
}
void Transpose(char*string)
{
	while (*string != '\0')
	{
		/*if(islower(*string))
		*string = toupper(*string);
		if (isupper(*string))
		*string = tolower(*string);*/  //错误！
		if(islower(*string))
		*string = toupper(*string);
		else
		*string = tolower(*string);		//二选一用if...else
		string++;
	}
}
void Original(char*string)
{
}
void show(void (*function_p)(char*), char* string)
{
	(*function_p)(string);//把用户选定的函数作用于字符串
	puts(string);
}
#endif