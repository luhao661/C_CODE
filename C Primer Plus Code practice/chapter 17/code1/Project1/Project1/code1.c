#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strchr()
//
#if 1
#endif


//使用结构数组来存储数据
#if 0
#define LENGTH	45   //存储影片片名的最大长度
#define MAX			500//存储影片的最大数量

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string,int num);

int main(void)
{
	struct film movies[MAX];
	int jishu=0;

	puts("请输入电影的标题：");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d",&movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n",movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//使用结构和+动态内存分配，节省运行时使用的内存空间
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//存储影片片名的最大长度

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("请输入您要写入的电影数量\n");
	scanf("%d",&max);

	while (getchar()!='\n')
	continue;

	struct film *movies = (struct film*)malloc(max*sizeof(struct film));

	int jishu = 0;

	puts("请输入电影的标题：");
	while (jishu < max && s_gets((*(movies+jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n", movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//使用结构链表来表示数据
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char *string,int num);

int main(void)
{
	struct film* head=NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* previous=0x00, * current;							//3.定义一个以film结构布局的结构变量previous和current，并对previous初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
			head = current;
		else
			previous->next = current;							  	    //6.若处理的不是第一个结构，则结构指针previous指向的next成员(next也是个结构指针)存上一次分配的结构的地址

		current->next = NULL;												//7.表示当前结构是链表的最后一个结构
		strcpy(current->title,input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		previous = current;												    //8.previous指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的previous->next其中的previous
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	/****************
	//第一个结构被创建后，head存第一个结构的地址，												   第一个结构的next成员先设为NULL，输入内容后，第一个结构的地址存入previous，
	//第二个结构被创建后，previous(即第一个结构)的next成员存第二个结构的地址，第二个结构的next成员先设为NULL，输入内容后，第二个结构的地址存入previous，
	//第三个结构被创建后，previous(即第二个结构)的next成员存第三个结构的地址，第三个结构的next成员先设为NULL，输入内容后，第三个结构的地址存入previous
																																																									   ****************/

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n",current->title,current->rating);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//定义新类型的方法，用3步完成从抽象到具体的过程
//1.提供类型属性和相关操作的抽象描述(抽象地描述ADT)
//2.编写一个实现ADT的编程接口(如在list.h中指明如何存储数据和执行所需操作的函数)
//3.编写代码来实现接口(如在list.c中)，编写代码来使用接口(在main.c中)。
#if 0
//*****把接口应用于特定编程问题的源代码文件*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char *string,int num);

int main(void)
{
	P_Node movies;//创建一个指向Node结构布局的指针movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr,"错误，链表数量已达到最大值！");
		exit(1);
	}

//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr,"错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("链表数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}								

//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies,showmovies);
	}
	printf("你输入了%d部电影\n",ListItemCount(&movies));
	
//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title,item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//队列ADT
#if 0
#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue line;
	Item shuju;//queue.h中改为typedef int Item;
	char choice;

	InitializeQueue(&line);
	puts("**********测试接口**********");
	puts("输入a来添加数据，输入d来删除数据，输入q退出程序：");

	while ((choice = getchar()) != 'q')
	{
		if (choice != 'a' && choice != 'd')
			continue;

		if (choice == 'a')
		{
			printf("请输入要添加的整数数据：\n");
			scanf("%d",&shuju);
			if (!QueueIsFull(&line))
			{
				printf("已向队列中存入%d\n", shuju);
				AddQueue(shuju, &line);
			}
			else
				printf("队列已满！\n");
		}

		else if (choice == 'd')
		{
			if (QueueIsEmpty(&line))
				puts("队列为空，无法删除数据！");
			else
			{
				DeQueue(&shuju,&line);
				printf("在队列的第一个节点删除了数据：%d\n",shuju);
			}
		}

		printf("队列中存在%d个数据\n",QueueItemCount(&line));
		puts("输入a来添加数据，输入d来删除数据，输入q退出程序：");
	}

	EmptyTheQueue(&line);
	puts("再见！");

	return 0;
}
#endif


//用队列包来模拟	咨询Sigmund的顾客	队列
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()、rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//是否有新顾客到来
Item customertime(long when);//设置顾客参数

int main(void)
{
	Queue line;//创建一个顾客队列
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways = 0;//因队列节点数满而被拒的顾客数量
	int customers = 0;//加入队列的顾客数量
	Item temp;//临时存数项目(顾客参数)

	int wait_process_finished_time = 0;//当前仍需等待顾客咨询完毕的时间
	int in_queue_wait_time = 0;//被服务的顾客在队列中累计等待的时间
	int served = 0;//服务的顾客数量
	int sum_nodes = 0;//累计队列节点数

	InitializeQueue(&line);

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入模拟的时长(单位：小时)：");
	scanf("%d",&hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d",&customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//判断每分钟是否有顾客来
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//在当前分钟数下新顾客的参数
				AddQueue(temp,&line);
			}
		}

		if (wait_process_finished_time <= 0 && !QueueIsEmpty(&line))//当队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp,&line);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间
		
			served++;
		}

		if (wait_process_finished_time > 0)
			wait_process_finished_time--;

		sum_nodes += QueueItemCount(&line);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n", "到摊位的顾客人数：", customers);
		printf("%-10s%d\n", "服务的顾客人数：", served);
		printf("%-10s%d\n", "被拒的顾客人数：", turnaways);

		printf("%-10s%.2lf\n", "队列平均节点数：", (double)sum_nodes / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n", "队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time / served);//平均每个被服务的人要等待的时间
	}
	else
		puts("没有顾客！");

	EmptyTheQueue(&line);
	puts("程序模拟结束！");
	
	return 0;
}
bool newcustomer(double x)//是否有新顾客到来	//x：平均每个顾客到来所需时间
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX：rand()能产生的最大值
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//所以rand() * x / RAND_MAX范围是0~x
}														//根据客流的一般情况，x会大于1，
														//设置小于1，即小于1分钟(cycle计数器每次递增1分钟)
Item customertime(long when)//设置顾客参数
{
	Item jiegouticanshu;//结构体的参数

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1范围1~3
	//以下写法错误：
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//范围1~3(processtime声明为int类型)
																						//***注***只有当ran()=RAND_MAX时，结果才为3
	return jiegouticanshu;												//所以结果1、2、3的概率并不相同(其中3概率极小)
}																						//因此赋值的对象是int类型时，此语句慎用
#endif


//二叉树ADT
#if 1
#endif