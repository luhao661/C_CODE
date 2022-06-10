#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//外层块中的变量与内层块中的变量同名的情况
#if 0
int main(void)
{
	int x = 30;
	printf("x在外层块：值为%d地址为%p\n",x,&x);
	
	{
		int x = 77;
		printf("x在内层块：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	while (x++ < 33)//外层块的x为30时进入，x变为31，。。。。。。x为33时判断为假不进入，x变为34。
	{
		int x = 100;
		x++;
		printf("x在while循环中：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	return 0;
}
#endif


//新的C99块规则
#if 0
int main(void)
{
	int n = 8;
	printf("最初：n=%d，地址：p=%p\n",n,&n);

	for (int n = 1; n < 3; n++)
		printf("第一个for循环：索引n=%d，地址：p=%p\n",n,&n);

	printf("第一个for循环结束后：n=%d，地址：p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("第二个for循环：索引n=%d，地址：p=%p\n", n, &n);
		int n = 6;
		printf("第二个for循环：新变量n=%d，地址：p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("第二个for循环结束后：n=%d，地址：p=%p\n", n, &n);


	return 0;
}
#endif


//使用局部静态变量（块作用域的静态变量）（块作用域无链接静态存储期）
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("迭代次数%d:\n",count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay ;//若未初始化静态变量则默认值为0
	printf("fade=%d     stay=%d\n",fade++,stay++);
}
#endif


//使用外部变量（外部链接的静态变量）
#if 0
int shuzi;
void ceshi(void);
int main(void)
{
	puts("请输入数字:");
	scanf("%d",&shuzi);

	while (shuzi != 66)
	{		
		ceshi();
	}
	puts("答对了！");

	return 0;
}
void ceshi(void)
{
	printf("输入的数字不对，请重新输入！\n");
	scanf("%d", &shuzi);
}
#endif


//使用多种存储类别，编写实现计算等差数列的程序													//要与qiuhehanshu.c一起编译
#if 0
void baogao_zhixincishu(void);//报告程序执行次数
extern void qiuhe(int k);//对输入的实参代表的等差数列求和      extern：当前文件使用的函数被定义在别处

int count = 0;//定义式声明：文件作用域外部链接静态存储期-->外部链接的静态变量

int main(void)
{
	int shuzi;//块作用域无链接自动存储期-->自动变量
	register int i;//块作用域无链接自动存储期-->寄存器变量

	printf("请输入一个正整数(输入0以退出程序)：");
	while (scanf("%d", &shuzi) == 1 && shuzi > 0)
	{
		count++;//使用外部链接的静态变量
		for (i = shuzi; i >= 0; i--)					//i为0时打印循环次数和计算结果
			qiuhe(i);

		printf("请输入一个正整数(输入0以退出程序)：");
	}
	baogao_zhixincishu();

	return 0;
}
void baogao_zhixincishu(void)//报告程序执行次数
{
	printf("程序执行了%d次\n",count);//使用外部链接的静态变量
}
#endif


//使用内部链接的静态变量编写生成伪随机数的函数														//要与rand1.c一起编译
#if 0//驱动程序
#include<time.h>
extern unsigned int rand1(void);
extern void seed_to_next(unsigned int seed);

int main(void)
{
	int count;
	unsigned seed;

	printf("使用系统时间作为种子数字\n");
	seed_to_next((unsigned int )time(0));

	for (count = 0; count < 10; count++)
		printf("%d\n",rand1());

	return 0;
}
#endif


//使用两个翻译单元文件完成掷骰子程序																		//要与zhitouzi.c一起编译
#if 0
#include<stdlib.h>//提供srand()原型
#include <time.h>//提供time()原型
#include"zhitouzi.h"

int main(void)
{
	int geshu,mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//让rand()函数里的种子数字能随机生成
	printf("请输入骰子的面数：(输入0以退出程序)\n");

	while (scanf("%d", &mianshu) == 1 && mianshu > 0)
	{
		puts("有多少个骰子？");
		if ((status = scanf("%d", &geshu)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				puts("您应该输入一个正整数");
				puts("让我们再试一次");
				while (getchar()!='\n');
				continue;
				puts("有多少个骰子？");
			}
		}																						 //touzishuzizongshu是外部函数可被其他文件的函数访问
		shuzizongshu = touzishuzizongshu(geshu, mianshu);//注：变量名不能与函数名相同，因为若相同则会有二义性错误，编译器不知道该调用变量还是函数。
		printf("你使用%d个%d面的骰子掷出了%d\n\n",geshu,mianshu,shuzizongshu);

		printf("请输入骰子的面数：(输入0以退出程序)\n");
	}
	printf("touzishuzi()函数被执行了%d次", zhitouzicishu);

	return 0;
}
#endif


//使用malloc()实现动态分配内存
#if 0
#include<stdlib.h>

int main(void)
{
	double* p;
	int max, number;
	int i = 0;

	puts("要输入多少个double类型的值？");
	if (scanf("%d", &max) != 1)
	{
		puts("输入的数字不正确！");
		exit(EXIT_FAILURE);
	}
	p = (double*)malloc(max * sizeof(double));
	if (p == NULL)
	{
		puts("请求内存分配失败！");
		exit(EXIT_FAILURE);
	}

	puts("请输入数字(按q以退出)：");
	while (i < max && scanf("%lf", p+i) == 1)//例：1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10 11.11 12.12 13.13 14.14 15.15
		i++;

	printf("这是你输入的%d个数字：\n",i);

	number = i;
	for (i = 0; i < number; i++)
	{
		printf("%7.2f",*(p+i));
		if (i % 7 == 6)//每行限制在7个数字，第一行i为0至6，第二行i从7开始。循环结束后i的值等于输入数字的数量
			putchar('\n');
	}
	if (i % 7 != 0)//若每行数字没满，则打印换行符
		putchar('\n');

	puts("Done.");
	free(p);

	return 0;
}
#endif


//查看静态对象，自动对象，动态分配的对象存储在何处
#if 0
#include<stdlib.h>
#include<string.h>

int waibulianjie_jintai = 30;
const char* p1 = "p1指向字符串字面量，字符串是静态对象";

int main(void)
{
	int zidong = 40;
	char* p2 = "p2指向字符串字面量，字符串是静态对象";

	char shuzuxinshichuangjian[] = "数组形式创建字符串";

	int* p3 = (int*)malloc(1 * sizeof(int));
	*p3 = 35;

	//或char* p4 = (char*)calloc(strlen("abc")+1,sizeof(char));
	char* p4 = (char*)malloc(strlen("abc") + 1);
	strcpy(p4,"abc");

	printf("外部链接的静态变量：%d                                         地址：%p\n",waibulianjie_jintai,&waibulianjie_jintai);
	printf("字符串是静态对象:%s          地址：%p\n",p1,p1);
	printf("字符串是静态对象:%s          地址：%p\n", p2, p2);
	printf("数组形式创建字符串:%s		               地址：%p\n", shuzuxinshichuangjian, shuzuxinshichuangjian);
	printf("自动变量：%d                                                   地址：%p\n",zidong,&zidong);
	printf("动态分配的对象：%d                                             地址：%p\n",*p3,&p3);
	printf("动态分配的对象：%s				      	       地址：%p\n", p4, p4);

	free(p3);
	free(p4);

	return 0;
}
#endif