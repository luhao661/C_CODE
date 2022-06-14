#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编程练习
//1.
#if 0
int critic(int num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);

	while (units != 56)
	{
		units=critic(units);
	}
	printf("You must have looked it up!\n");

	return 0;
}
int critic(int num)//units和num的地址不相同。
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&num);

	return num;
}
#endif
//1.法二：指针
#if 0
void critic(int *num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
	{
		critic(&units);//向指针num传入units的地址。
	}
	printf("You must have looked it up!\n");

	return 0;
}
void critic(int *num)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", num);//修改units的值
}
#endif


//2.																						//与pe12-2a.c, pe12-2a.h一起编译
#if 0
#include "pe12-2a.h"
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d",&mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif


//3.																						//与pe12-3a.c, pe12-3a.h一起编译
#if 0
#include "pe12-3a.h"
int main(void)
{
	int mode,mode1;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		if (mode == 0 || mode == 1)
			mode1 = mode;//输入0或1，则给mode1赋值。

		if (mode != 0 && mode != 1)//输入不是0且不是1，则用原来mode1的值赋给mode。
		{
			char xianshi1[7] = "US";
			char xianshi2[7] = "metric";
			if (mode1 == 0)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi2);
				mode = mode1;
			}
			if (mode1 == 1)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi1);
				mode = mode1;
			}
		}		

		mode=set_mode(mode);
		get_info(mode);

		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif
//法二：在main()中定义mode, distance, fuel。
//三个函数改为：
// 
//void set_mode(int *mode, int n);
//void get_info(int mode,double *distance,double *fuel);
//void show_info(int mode,double distance,double fuel);
// 
//set_mode(&mode, n);
//get_info(mode,&distance,&fuel);
//show_info(mode,distance,fuel);


//4.
#if 0
int count;
int ceshi(void);
int main(void)
{
	int num;
	int cishu;
	puts("要调用几次？");
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		cishu = ceshi();
		printf("被调用了%d次\n",cishu);
	}

	return 0;
}
int ceshi(void)
{
	count++;
	return count;
}
#endif


//5.
#if 0
#include <time.h>
#include<stdlib.h>/*提供 rand（）的原型 */
int tigongshuzi(void);
void paixu(int* p, int num);

int main(void)
{
	srand((unsigned int )time(0));
	int i;
	int shuzu[100];
	for (i = 0; i < 100; i++)
		*(shuzu + i) = tigongshuzi();

	puts("原数字：");
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	puts("降序排列后：");
	paixu(shuzu, 100);
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	return 0;
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;

	return shuzi;
}
//void paixu(int * p, int num)
//{
//	int* temp;
//	int top, seek;
//
//	for(top=0;top<num-1;top++)
//		for(seek=top+1;seek<num;seek++)
//			if (*(p + top) <= *(p + seek))
//			{
//				temp = p + top;
//				(p+top)= (p + seek);									//注：此处会报错：左侧必须是个可修改的左值。
//				p + seek= temp;										//原因：p+top不指定内存上的内容  P320		
//			}																		//p=p+1正确     p+1=p错误
//}
void paixu(int* p, int num)
{
	int temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
	{
		for (seek = top + 1; seek < num; seek++)
		{
			if (*(p + top) < *(p + seek))
			{
				temp = *(p + seek);
				*(p + seek) = *(p + top);
				*(p + top) = temp;
			}
		}
	}	
}
#endif


//6.
#if 0
static unsigned long int next = 1;
int rand(void);
void srand(unsigned int seed);
int tigongshuzi(void);
void tongji(int *p,int num);

int main(void)
{
	unsigned seed;

	printf("请输入你选择的种子数字：");
	while (scanf("%d", &seed) == 1)
	{
		srand(seed);
		int shuzu[1000];
		int i;
		for (i = 0; i < 1000; i++)
			*(shuzu + i) = tigongshuzi();

		//for (i = 0; i < 1000; i++)
		//printf("%d\n",shuzu[i]);

		putchar('\n');
		tongji(shuzu,1000);
		printf("\n请输入你选择的种子数字：");
	}

	return 0;
}
void srand(unsigned int seed)
{
	next = seed;
}
int rand(void)
{
	next = next * 1103515245 + 12345;
	return ((unsigned int)(next / 65536) % 32768);
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;
	return shuzi;
}
void tongji(int* p, int num)
{
	int jilu[10] = {0};

	for (int i = 0; i < 1000; i++)
	{
		if (*(p + i) == 1)
			jilu[0]++;
		if (*(p + i) == 2)
			jilu[1]++;
		if (*(p + i) == 3)
			jilu[2]++;
		if (*(p + i) == 4)
			jilu[3]++;
		if (*(p + i) == 5)
			jilu[4]++;
		if (*(p + i) == 6)
			jilu[5]++;
		if (*(p + i) == 7)
			jilu[6]++;
		if (*(p + i) == 8)
			jilu[7]++;
		if (*(p + i) == 9)
			jilu[8]++;
		if (*(p + i) == 10)
			jilu[9]++;
	}
	printf("出现次数：1          2            3            4           5           6          7          8          9           10\n");																							
	for (int i = 0; i < 10; i++)													//记（书P79）
		printf("%12d",*(jilu+i));													//scanf()      参数列表：指向变量的指针
																								//printf()		参数列表：变量，常量和表达式
}
#endif
//6.用ANSI C 的srand()和rand()
#if 0
#include<time.h>
#include<stdlib.h>
int tigongshuzi(void);
void tongji(int* p, int num);

int main(void)
{
		srand((unsigned int)time(0));
		int shuzu[1000];
		int i;
		for (i = 0; i < 1000; i++)
			*(shuzu + i) = tigongshuzi();

		//for (i = 0; i < 1000; i++)
		//printf("%d\n",shuzu[i]);

		putchar('\n');
		tongji(shuzu, 1000);
	
	return 0;
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;
	return shuzi;
}
void tongji(int* p, int num)
{
	int jilu[10] = { 0 };

	for (int i = 0; i < 1000; i++)
	{
		if (*(p + i) == 1)
			jilu[0]++;
		if (*(p + i) == 2)
			jilu[1]++;
		if (*(p + i) == 3)
			jilu[2]++;
		if (*(p + i) == 4)
			jilu[3]++;
		if (*(p + i) == 5)
			jilu[4]++;
		if (*(p + i) == 6)
			jilu[5]++;
		if (*(p + i) == 7)
			jilu[6]++;
		if (*(p + i) == 8)
			jilu[7]++;
		if (*(p + i) == 9)
			jilu[8]++;
		if (*(p + i) == 10)
			jilu[9]++;
	}
	printf("出现次数：1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//记（书P79）
		printf("%12d", *(jilu + i));												//scanf()      参数列表：指向变量的指针
																								//printf()		参数列表：变量，常量和表达式
}
#endif


//7.
#if 0
#include<stdlib.h>//提供srand()原型
#include <time.h>//提供time()原型
#include"zhitouzi.h"

int main(void)
{
	int cishu,geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//让rand()函数里的种子数字能随机生成

	printf("请输入掷骰子的次数(输入q以退出程序)：");

	while (scanf("%d", &cishu) == 1)
	{
		printf("请输入骰子的面数和个数：");		

		if(scanf("%d%d", &mianshu, &geshu)!=2)
		{
				puts("让我们再试一次");
				while (getchar() != '\n');
				continue;
				printf("请输入骰子的面数和个数：");
		}
		
		printf("下面是掷%d次%d个%d面的骰子的数字：\n",cishu,geshu,mianshu);

		int i;
		for ( i = 0; i < cishu; i++)
		{
			shuzizongshu = touzishuzizongshu(geshu, mianshu);//注：变量名不能与函数名相同，因为若相同则会有二义性错误，编译器不知道该调用变量还是函数。
			printf("%5d", shuzizongshu);

			if (i % 15 == 14)
				putchar('\n');
		}
		if (i % 15 != 0)
			putchar('\n');

		printf("请输入掷骰子的次数：(输入q以退出程序)");
	}

	printf("\ntouzishuzi()函数被执行了%d次", zhitouzicishu);

	return 0;
}
#endif


//8.
#if 0
#include<stdlib.h>
int* make_array(int elem,int val);
void show_array(const int *ar,int n);
int main(void)
{
	int* pa;
	int size;
	int value;

	printf("Enter the number of elements : ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value : ");
		scanf("%d",&value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements : ");
	}
	printf("Done.\n");

	return 0;
}
int* make_array(int elem, int val)
{
	int* pa;
	pa = (int*)malloc(elem*sizeof(int));

	for (int i = 0; i < elem; i++)
		*(pa + i) = val;

	return pa;
}
void show_array(const int* ar, int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("%5d", *(ar + i));
		if (i % 8 == 7)
			putchar('\n');
	}
	if (i % 8 != 0)
		putchar('\n');
}
#endif


//9.
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("请问要输入几个单词？");
	scanf("%d",&dancishu);

	char** p1;
	p1=make_array(dancishu);
	
	printf("现在请输入%d个单词：\n",dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);
		char *p2=(char *)malloc(strlen(temp)*sizeof(char));


	}
		scanf("%s", p1[i]);

	printf("%s",p1[0][0]);

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));
	return p1;
}
#endif
//9.改正
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("请问要输入几个单词？");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);//创建一个指针数组，指针个数为等于单词数，指针都指向char，p1是指针的指针。

	printf("现在请输入%d个单词：", dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);//利用scanf()每次只能读一个单词的功能，每次循环都从缓冲区读入一个单词。

		char* p2 = (char*)malloc((strlen(temp)+1)* sizeof(char));//根据每个单词的长度，分配一个合适的内存。

		strcpy(p2,temp);//每次都向分配的内存中存入一个单词。
		*(p1 + i) = p2;//将p1数组的指针都指向新分配的内存空间。
	}
	
	puts("以下是你输入的单词序列：");
	for (int i = 0; i < dancishu; i++)
		puts(*(p1 + i));
	//printf("%s\n", *(p1+i));

	free(p1);
	puts("完成！");

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));//创建一个数组，数组中的每个元素都是指向char的指针，因此返回值应是指针的指针
	return p1;
}
#endif