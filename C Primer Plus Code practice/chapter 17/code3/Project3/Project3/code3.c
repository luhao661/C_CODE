#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//17.12编程练习
//1.方法一：修改链表的定义
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current=0x01;					//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
			current->previous = NULL;//第一个节点之前的节点为NULL
														  //此语句不写不影响程序
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
			current->previous = prev;//第二个节点的previous指针存第一个节点的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构
	
		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

//struct film* temp = prev;//暂存current，即暂存最后一个节点的地址
/*也可以写成*/struct film* temp = current;//前提条件：current先要初始化

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");

	while (temp != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


//释放已分配的内存
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
		free(current);
		current = head;
	}
//释放已分配的内存(法二)
	//while (head != NULL)
	//{
	//	current = head;//先把第一个节点的地址赋给current							
	//	head = head->next;
	//	free(current);
	//}

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
//1.方法二：用递归
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current ;								//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构

		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	
	struct film* temp = current;//暂存current，即暂存第一个节点的地址

	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");
	show_reversed_order(temp);


	//释放已分配的内存
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
/*
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		p = p->next;									//***错误***：p值被改变后再递归，导致第一个节点的内容无法打印出来
		show_reversed_order(p);				//还导致最后一个节点的内容会被打印两遍
	}	

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);		
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);
}
#endif


//2.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//创建一个P_Node结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，链表数量已达到最大值！");
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
			fprintf(stderr, "错误，分配内存失败！");
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
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
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


//3.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list_1.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	List movies;//创建一个List结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，元素数量已达到最大值！");
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
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("元素数量已达到最大值！");
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
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
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


//4.
//方法一：创建队列数组，顾客随机进其中一个队列，用else if处理有一个摊位满时的情况
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
	Queue line[2];//创建一个顾客队列数组
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways = 0;//因队列节点数满而被拒的顾客数量
	int customers = 0;//加入队列的顾客数量
	Item temp;//临时存数项目(顾客参数)

	int wait_process_finished_time_1 = 0;//第一个摊位当前仍需等待顾客咨询完毕的时间
	int wait_process_finished_time_2 = 0;//第二个摊位当前仍需等待顾客咨询完毕的时间

	int in_queue_wait_time_1 = 0;//被服务的顾客在队列中累计等待的时间
	int in_queue_wait_time_2 = 0;//被服务的顾客在队列中累计等待的时间

	int served_1 = 0;//服务的顾客数量
	int served_2 = 0;//服务的顾客数量

	int sum_nodes_1 = 0;//累计队列节点数
	int sum_nodes_2 = 0;//累计队列节点数

	int choice = 0;//顾客选择去哪个摊位

	InitializeQueue(&line[0]);
	InitializeQueue(&line[1]);

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入模拟的时长(单位：小时)：");
	scanf("%d", &hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//判断每分钟是否有顾客来
		{
			if (QueueIsFull(&line[0])&& QueueIsFull(&line[1]))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//在当前分钟数下新顾客的参数
				
				if (!QueueIsFull(&line[0]) && !QueueIsFull(&line[1]))//当两个摊位队列都没满时，顾客随机选择去哪个摊位
				{
					choice = rand() % 2 ;//choice为0或1
					AddQueue(temp, &line[choice]);
				}
				else if (QueueIsFull(&line[0]))//当第一个摊位队列满时
				{
					AddQueue(temp, &line[1]);
				}
				else//当第二个摊位队列满时
				{
					AddQueue(temp, &line[0]);
				}

			}
		}

		if (wait_process_finished_time_1<= 0 && !QueueIsEmpty(&line[0]))//当第一个摊位队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp, &line[0]);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time_1 = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time_1 += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

			served_1++;
		}

		if (wait_process_finished_time_2 <= 0 && !QueueIsEmpty(&line[1]))//当第二个摊位队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp, &line[1]);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time_2 = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time_2 += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

			served_2++;
		}

		if (wait_process_finished_time_1 > 0)
			wait_process_finished_time_1--;


		if (wait_process_finished_time_2 > 0)
			wait_process_finished_time_2--;

		sum_nodes_1 += QueueItemCount(&line[0]);
		sum_nodes_2 += QueueItemCount(&line[1]);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n\n\n", "到摊位的顾客人数：", customers);

		printf("%-10s%d\n", "摊位1已服务的顾客人数：", served_1);
		printf("%-10s%.2lf\n", "摊位1队列平均节点数：", (double)sum_nodes_1 / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n\n", "摊位1队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time_1 / served_1);//平均每个被服务的人要等待的时间
	
		printf("%-10s%d\n", "摊位2已服务的顾客人数：", served_2);
		printf("%-10s%.2lf\n", "摊位2队列平均节点数：", (double)sum_nodes_2 / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n\n\n", "摊位2队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time_2 / served_2);//平均每个被服务的人要等待的时间


		printf("%-10s%d\n\n", "被拒的顾客人数：", turnaways);

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
//4.
//方法二：创建含队列各项参数的结构布局的结构数组，
//顾客按照给定参数进入两个队列
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()、rand()

#define MIN_PER_HOUR	60.0

struct 	booth_line
{
	Queue line;//创建一个顾客队列
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways;//因队列节点数满而被拒的顾客数量
	int customers;//加入队列的顾客数量

	int wait_process_finished_time ;//当前仍需等待顾客咨询完毕的时间

	int in_queue_wait_time ;//被服务的顾客在队列中累计等待的时间

	int served;//服务的顾客数量
	int sum_nodes;//累计队列节点数
};

bool newcustomer(double x);//是否有新顾客到来
Item customertime(long when);//设置顾客参数

int main(void)
{
	struct booth_line  Booth_line[2] = { {.hours=0},{.hours=0} };

	Item temp;//临时存数项目(顾客参数)

	InitializeQueue(&Booth_line[0].line);
	InitializeQueue(&((Booth_line+1)->line));

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入摊位1模拟的时长(单位：小时)：");
	scanf("%d", &Booth_line[0].hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &Booth_line[0].customers_per_hour);
	Booth_line[0].cyclelimit = MIN_PER_HOUR * Booth_line[0].hours;
	Booth_line[0].min_per_customers = MIN_PER_HOUR / Booth_line[0].customers_per_hour;

	puts("请输入摊位2模拟的时长(单位：小时)：");
	scanf("%d", &Booth_line[1].hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &Booth_line[1].customers_per_hour);
	Booth_line[1].cyclelimit = MIN_PER_HOUR * Booth_line[1].hours;
	Booth_line[1].min_per_customers = MIN_PER_HOUR / Booth_line[1].customers_per_hour;

	for (int i = 0; i < 2; i++)
	{
		for (Booth_line[i].cycle = 0; Booth_line[i].cycle < Booth_line[i].cyclelimit; Booth_line[i].cycle++)
		{
			if (newcustomer(Booth_line[i].min_per_customers))//判断每分钟是否有顾客来
			{
				if (QueueIsFull(&Booth_line[i].line))
					Booth_line[i].turnaways++;
				else
				{
					Booth_line[i].customers++;
					temp = customertime(Booth_line[i].cycle);//在当前分钟数下新顾客的参数
					AddQueue(temp, &Booth_line[i].line);
				}
			}		

			if (Booth_line[i].wait_process_finished_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))//当摊位队列中有顾客且摊位空闲时
			{											 //*****注*****
				DeQueue(&temp, &Booth_line[i].line);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

				Booth_line[i].wait_process_finished_time = temp.processtime;//赋新的咨询花费的时间
				Booth_line[i].in_queue_wait_time += Booth_line[i].cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

				Booth_line[i].served++;
			}

			if (Booth_line[i].wait_process_finished_time > 0)
				Booth_line[i].wait_process_finished_time--;

			Booth_line[i].sum_nodes += QueueItemCount(&Booth_line[i].line);
		}

		if (Booth_line[i].customers > 0)
		{
			printf("摊位%d\n",i+1);
			printf("%-10s%d\n", "到摊位的顾客人数：", Booth_line[i].customers);

			printf("%-10s%d\n", "摊位已服务的顾客人数：", Booth_line[i].served);
			printf("%-10s%.2lf\n", "摊位队列平均节点数：", (double)Booth_line[i].sum_nodes / Booth_line[i].cyclelimit);//平均每分钟排队的人数
			printf("%-10s%.2lf\n", "摊位队列平均等待时间(单位：分钟)：", (double)Booth_line[i].in_queue_wait_time / Booth_line[i].served);//平均每个被服务的人要等待的时间

			printf("%-10s%d\n\n", "被拒的顾客人数：", Booth_line[i].turnaways);

		}
		else
			puts("没有顾客！");

		EmptyTheQueue(&Booth_line[i].line);
	}

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


//5.法一：堆栈的链接表示（利用单链表）
#if 0
#include "stack.h"
#include <stdbool.h>
#include <stdlib.h>//exit(1)
#include <string.h>

void show(Item item);

int main(void)
{
	LinkStack shuju;
	Item temp1[MAX_STACK];

	InitializeStack(&shuju);
	if (StackIsFull(&shuju))
	{
		fprintf(stderr, "错误，元素数量已达到最大值！");
		exit(1);
	}

	char temp2[MAX_STACK+1];//创建temp2数组暂存输入的字符串

	int jishu;

	puts("请输入字符串：");//最多存10个字符
	scanf("%s",temp2);

	jishu = strlen(temp2);

	for (int index = 0; index < jishu; index++)
		temp1[index].data = temp2[index];//通过循环，给temp1结构数组的成员(即每个结构)的data成员赋字符

	for (int index = 0; index < jishu; index++)
	{
		if (PushItem(temp1[index], &shuju) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;								//***注***
		}											//每次调用PushItem()时，数据都会自动存入下一个节点
		if (StackIsFull(&shuju))
		{
			puts("元素数量已达到最大值！");
			break;
		}
	}

	if (StackIsEmpty(&shuju))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是栈中的字符数据：\n");
		Traverse(&shuju,show);
	}
	printf("你输入了%d个字符\n",StackItemCount(&shuju));

	printf("以下是从栈中弹出的字符数据：\n");
	while (!StackIsEmpty(&shuju))
	{
		PopItem(&temp1, &shuju);
		printf("%c\n", temp1[0]);
	}

	EmptyTheStack(&shuju);
	printf("再见！\n");

	return 0;
}
void show(Item item)
{
	printf("%c\n", item.data);
}
#endif
//法二：堆栈的顺序表示（利用数组）


//6.
#if 0
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40

void fill_array(int* p, int n);
void show_array(const int* p, int n);
int mycompare(const void* p1, const void* p2);
bool find(int *zhengshu,int num,int search);//形参：指向数组的指针，数组元素个数，待查找的整数

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* 随机种子 */
	fill_array(shuzu, SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("数组中的随机数排序完成后如下");
	show_array(shuzu, SIZE);

	printf("请输入您要寻找的整数：");
	int search;
	scanf("%d",&search);
	if (find(shuzu, SIZE, search))
		printf("已找到！\n");
	else
		printf("未找到！\n");

	return 0;
}
void fill_array(int* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p + index) = rand()%90;
	}
}
void show_array(const int* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%6d", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
int mycompare(const void* p1, const void* p2)
{
	const int* a1 = (const int*)p1;
	const int* a2 = (const int*)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}

bool find(int* zhengshu, int num, int search)
{
	int head = 0, tail = num - 1,try=(head+tail)/2;//try是索引值

	while (try >= head && try <= tail&&num)
	{
		if (*(zhengshu + try) < search)//如果小了
		{
			head = try + 1;
			try = (head + tail) / 2;
		}
		else if (*(zhengshu + try) > search)//如果大了
		{
			tail = try - 1;
			try = (head + tail) / 2;
		}
		else 
			return true;

		num--;//由于(head + tail) / 2最终结果会截断成整数，查找后期会导致索引值无变化，陷入死循环
	}			   //可以利用num值归0来跳出循环
	return false;
}
#endif


//7.
#if 0
#include "tree.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()
#include <stdlib.h>//EXIT_FAILURE
#include <ctype.h>//isalpha()

#define MAX 42

void addwords(Tree* ptree);
void menu(void);
char get_choice(void);


void showwords(const Tree* ptree);
void dayin(Item item);

void findwords(const Tree* ptree);
char* s_gets(char* string, int n);

int main(void)
{
	Tree words;
	char choice;

	InitializeTree(&words);
	addwords(&words);

	menu();
	while ((choice = get_choice()) != 'c')
	{
		switch (choice)
		{
		case 'a':
			showwords(&words);
			break;
		case 'b':
			findwords(&words);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}

	DeleteAll(&words);
	puts("再见！");
}
void addwords(Tree* ptree)
{
	Item temp;

	FILE* fp;
	char words[MAX];//用于在显示屏上显示内容
	//int zifujishu, index;//字符计数值，索引值
	char ch;
	int index=0;

	if ((fp = fopen("17.12.7.txt", "a+")) == NULL)//读和写
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}
	rewind(fp);

	while (fscanf(fp, "%s", words) == 1)
	{
		fprintf(stdout, "%s", words);
		putc(' ', stdout);
	}

	rewind(fp);

	if (TreeIsFull(ptree))
		puts("单词数量已达到最大值，无法存入二叉树！");
	else
	{
		/*while (fscanf(fp, "%s", words) == 1)//从第一个非空白字符开始，到下一个空白字符之前的所有字符都是输入
		{
			zifujishu = strlen(words);
			for(index = 0; index < zifujishu; index++)
			{
				temp.danci[index] = words[index];
			}*/				//错误：存储的不是字符，而应该是字符串

		/*while (fscanf(fp, "%s", temp.danci) == 1)//从第一个非空白字符开始，到下一个空白字符之前的所有字符都是输入
		{
			temp.cishu = 1;//每个输入到danci的字符串，cishu都先设为0
		
			if (SeekItem(&temp, ptree).child != NULL)//当输入重复的字符串时
			{													//***注***SeekItem()改为外部函数，而不是静态函数
				SeekItem(&temp, ptree).child->item.cishu++;//找到树中该字符串所在的节点的地址，并对该项的cishu成员值增1
			}
			else//当输入不相同的字符串时
				AddItem(&temp, ptree);
		}*/					//瑕疵：polling和polling,   算两个单词，因为fscanf()判定逗号也是字符				


		while ((ch = getc(fp)) != EOF)//逐个字符读入
		{
			if (isalpha(ch))
			{
				temp.danci[index] = ch;
				index++;
			}
			else
			{
				temp.danci[index] = '\0';//处理为字符串
				index = 0;

														 //*****注*****
				if (temp.danci[0] == '\0')//若输入的是逗号和空格，则逗号前的单词存入树，但是空格就跳转到对循环的测试表达式求值
					continue;

				temp.cishu = 1;//每个输入到danci的字符串，cishu都先设为0

				if (SeekItem(&temp, ptree).child != NULL)//当输入重复的字符串时
				{													//***注***SeekItem()改为外部函数，而不是静态函数
					SeekItem(&temp, ptree).child->item.cishu++;//找到树中该字符串所在的节点的地址，并对该项的cishu成员值增1
				}
				else//当输入不相同的字符串时
					AddItem(&temp, ptree);
			}
		}
	}

	//法二：用fscanf()，且SeekItem()仍保持为静态函数，只变动AddItem()函数
	//while (fscanf(fp, "%s", temp.danci) == 1)//逐个非空白字符串读入
	//{
	//	if (!isalpha(temp.danci[0]))//若输入的是空格标点符号空格
	//		continue;
	//	if (!isalpha(temp.danci[strlen(temp.danci) - 1]))//若输入字母和标点符号
	//		temp.danci[strlen(temp.danci) - 1] = '\0';
	//	temp.cishu = 1;
	//	AddItem(&temp, ptree);
	//}

	/*(tree.c文件中)
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
		SeekItem(pitem, ptree).child->item.cishu++;
		return true;
	}
	..........
	..........
	*/

	puts("以上单词已存入单词树 !");

	if (fclose(fp) != 0)
		fprintf(stderr, "关闭文件失败！\n");
}

void menu(void)
{
	puts("单词管理程序");
	puts("请输入您需要的功能前对应的单词：");
	printf("%-20s%20s\n","a) 列出所有单词及其出现次数"," b) 查询单词在文件中出现的次数");
	printf("%-20s\n","c）退出");
}

char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("abc", choice) == NULL)
	{
		puts("请输入a、b或c");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}

void showwords(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}

void dayin(Item item)
{
	printf("%-s%-30s %20s%-6d\n","单词：", item.danci,"出现次数：", item.cishu);
}

void findwords(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有内容！");
		return;
	}

	puts("请输入您想搜索的单词：");
	s_gets(temp.danci, LENGTH);

	printf("%-s%-30s\n", "单词：", temp.danci);

	if (InTree(&temp, ptree))
	{
		printf("在其中！出现次数：%d\n", SeekItem(&temp,ptree).child->item.cishu);
	}
	else
		printf("不在其中！\n");
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
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 17\code3\Project3\x64\Debug
//Project3.exe
#endif


//8.法一：使用一维数组petkind，用strcat()拼接petkind
//实现petkind存储同名但不同种类的宠物的种类数据
#if 0
#include "tree_1.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()

void menu(void);
char get_choice(void);

void addpet(Tree* ptree);
char* s_gets(char* string, int n);
void lowercase(char* string);

void showpets(const Tree* ptree);
void dayin(Item item);

void findpet(const Tree* ptree);
void droppet(Tree* ptree);

int main(void)
{
	Tree pets;
	char choice;

	menu();
	InitializeTree(&pets);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("俱乐部里有%d只宠物\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}
	DeleteAll(&pets);
	puts("再见！");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) 添加宠物 s) 显示宠物名单");
	puts("n) 计算宠物数量 f) 寻找宠物");
	puts("d) 删除一只宠物 q)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("asnfdq", choice) == NULL)
	{
		puts("请输入a、s、n、f、d或q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
int n = 1;
void addpet(Tree* ptree)
{
	Item temp;
	char* find;

	if (TreeIsFull(ptree))
		puts("宠物数量已达到最大值！");
	else
	{
		puts("请输入宠物的名字：");
		s_gets(temp.petname, LENGTH);
		puts("请输入宠物的类型：");
		s_gets(temp.petkind, LENGTH);

		lowercase(temp.petname);
		lowercase(temp.petkind);

		if (SeekItem(&temp, ptree).child)//找同名的宠物
		{
			find=strchr(SeekItem(&temp, ptree).child->item.petkind,'\0');
			*find = ',';
			*(find + 1) = '\0';

			strcat((SeekItem(&temp, ptree).child->item.petkind), temp.petkind);
			//strcpy((SeekItem(&temp, ptree).child->item.petkind)+5*n, temp.petkind);
			//n *= 2;
			/***为什么不能用strcpy实现数组内容的拷贝？***/
			//因为在'\0'的位置之后是垃圾值，即使指定在第6个元素的位置上拷贝了数据，它们之间的数据也不能打印出来
		}
		else
			AddItem(&temp, ptree);
	}
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
void lowercase(char* string)
{
	while (*string)
	{
		*string = tolower(*string);
		string++;
	}
}
void showpets(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想搜索的宠物的名字：");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("宠物名：%s的宠物", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("在其中！\n");
		printf("叫该名字的宠物类型有：%s\n",SeekItem(&temp,ptree).child->item.petkind);
	}
	else
		printf("不在其中！\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想删除的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想删除的宠物的类型：");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("已删除！\n");
	else
		printf("不在其中，无法删除！\n");
}
#endif
//法一和法二的瑕疵：删除项函数不能只删除同名的某一种宠物

//8.法二：把Item结构布局的perkind成员改为二维数组以存储同名但不同种类的宠物的种类数据
//SeekItem()仍保持为静态函数，只变动AddItem()函数
//也要变动dayin()等函数的定义
#if 1
/*(tree_1.h文件中)
typedef struct
{
	char petname[LENGTH];
	char petkind[LENGTH][LENGTH];
}Item;
*/

/*(tree_1.c文件中)
bool AddItem(const Item* pitem, Tree* ptree)
{
..........
..........
	if (SeekItem(pitem, ptree).child != NULL)
	{
		for (int i = 0; i < LENGTH; i++)
		{
			if (strlen(SeekItem(pitem, ptree).child->item.petkind[i]) < 1)
			{
				strcpy(SeekItem(pitem, ptree).child->item.petkind[i],pitem->petkind[0]);
				break;
			}
		}
		return true;
	}
		..........
		..........
*/

/*(code3.c文件中)
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
		i++;
	}
}
*/
#include "tree_1.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()

void menu(void);
char get_choice(void);

void addpet(Tree* ptree);
char* s_gets(char* string, int n);
void lowercase(char* string);

void showpets(const Tree* ptree);
void dayin(Item item);

void findpet(const Tree* ptree);
void droppet(Tree* ptree);

int main(void)
{
	Tree pets;
	char choice;

	menu();
	InitializeTree(&pets);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("俱乐部里有%d只宠物\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}
	DeleteAll(&pets);
	puts("再见！");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) 添加宠物 s) 显示宠物名单");
	puts("n) 计算宠物数量 f) 寻找宠物");
	puts("d) 删除一只宠物 q)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("asnfdq", choice) == NULL)
	{
		puts("请输入a、s、n、f、d或q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
int n = 1;
void addpet(Tree* ptree)
{
	Item temp = {.petkind[0][0]='\0'};//***注***必须要初始化！！！
	char* find;

	if (TreeIsFull(ptree))
		puts("宠物数量已达到最大值！");
	else
	{
		puts("请输入宠物的名字：");
		s_gets(temp.petname, LENGTH);
		puts("请输入宠物的类型：");
		//s_gets(temp.petkind, LENGTH);
		s_gets(temp.petkind[0], LENGTH);

		lowercase(temp.petname);
		//lowercase(temp.petkind);
		lowercase(temp.petkind[0]);

		AddItem(&temp, ptree);
	}
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
void lowercase(char* string)
{
	while (*string)
	{
		*string = tolower(*string);
		string++;
	}
}
void showpets(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}
//void dayin(Item item)
//{
//	printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
//}
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind[i]);
		i++;
	}
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想搜索的宠物的名字：");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("宠物名：%s的宠物", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("在其中！\n");
	}
	else
		printf("不在其中！\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想删除的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想删除的宠物的类型：");
	s_gets(temp.petkind[0], LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind[0]);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind[0]);

	if (DeleteItem(&temp, ptree))
		printf("已删除！\n");
	else
		printf("不在其中，无法删除！\n");
}
#endif