#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//17.12�����ϰ
//1.����һ���޸�����Ķ���
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current=0x01;					//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
			current->previous = NULL;//��һ���ڵ�֮ǰ�Ľڵ�ΪNULL
														  //����䲻д��Ӱ�����
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
			current->previous = prev;//�ڶ����ڵ��previousָ����һ���ڵ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ
	
		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

//struct film* temp = prev;//�ݴ�current�����ݴ����һ���ڵ�ĵ�ַ
/*Ҳ����д��*/struct film* temp = current;//ǰ��������current��Ҫ��ʼ��

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");

	while (temp != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


//�ͷ��ѷ�����ڴ�
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
		free(current);
		current = head;
	}
//�ͷ��ѷ�����ڴ�(����)
	//while (head != NULL)
	//{
	//	current = head;//�Ȱѵ�һ���ڵ�ĵ�ַ����current							
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
//1.���������õݹ�
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current ;								//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ

		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	
	struct film* temp = current;//�ݴ�current�����ݴ��һ���ڵ�ĵ�ַ

	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");
	show_reversed_order(temp);


	//�ͷ��ѷ�����ڴ�
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
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
		p = p->next;									//***����***��pֵ���ı���ٵݹ飬���µ�һ���ڵ�������޷���ӡ����
		show_reversed_order(p);				//���������һ���ڵ�����ݻᱻ��ӡ����
	}	

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);		
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);
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
	P_Node movies;//����һ��P_Node�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "�������������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("���������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
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
	List movies;//����һ��List�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "����Ԫ�������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("Ԫ�������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
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
//����һ�������������飬�˿����������һ�����У���else if������һ��̯λ��ʱ�����
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()��rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	Queue line[2];//����һ���˿Ͷ�������
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways = 0;//����нڵ����������ܵĹ˿�����
	int customers = 0;//������еĹ˿�����
	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	int wait_process_finished_time_1 = 0;//��һ��̯λ��ǰ����ȴ��˿���ѯ��ϵ�ʱ��
	int wait_process_finished_time_2 = 0;//�ڶ���̯λ��ǰ����ȴ��˿���ѯ��ϵ�ʱ��

	int in_queue_wait_time_1 = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��
	int in_queue_wait_time_2 = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��

	int served_1 = 0;//����Ĺ˿�����
	int served_2 = 0;//����Ĺ˿�����

	int sum_nodes_1 = 0;//�ۼƶ��нڵ���
	int sum_nodes_2 = 0;//�ۼƶ��нڵ���

	int choice = 0;//�˿�ѡ��ȥ�ĸ�̯λ

	InitializeQueue(&line[0]);
	InitializeQueue(&line[1]);

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//�ж�ÿ�����Ƿ��й˿���
		{
			if (QueueIsFull(&line[0])&& QueueIsFull(&line[1]))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//�ڵ�ǰ���������¹˿͵Ĳ���
				
				if (!QueueIsFull(&line[0]) && !QueueIsFull(&line[1]))//������̯λ���ж�û��ʱ���˿����ѡ��ȥ�ĸ�̯λ
				{
					choice = rand() % 2 ;//choiceΪ0��1
					AddQueue(temp, &line[choice]);
				}
				else if (QueueIsFull(&line[0]))//����һ��̯λ������ʱ
				{
					AddQueue(temp, &line[1]);
				}
				else//���ڶ���̯λ������ʱ
				{
					AddQueue(temp, &line[0]);
				}

			}
		}

		if (wait_process_finished_time_1<= 0 && !QueueIsEmpty(&line[0]))//����һ��̯λ�������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp, &line[0]);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time_1 = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time_1 += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

			served_1++;
		}

		if (wait_process_finished_time_2 <= 0 && !QueueIsEmpty(&line[1]))//���ڶ���̯λ�������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp, &line[1]);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time_2 = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time_2 += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

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
		printf("%-10s%d\n\n\n", "��̯λ�Ĺ˿�������", customers);

		printf("%-10s%d\n", "̯λ1�ѷ���Ĺ˿�������", served_1);
		printf("%-10s%.2lf\n", "̯λ1����ƽ���ڵ�����", (double)sum_nodes_1 / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n\n", "̯λ1����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time_1 / served_1);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��
	
		printf("%-10s%d\n", "̯λ2�ѷ���Ĺ˿�������", served_2);
		printf("%-10s%.2lf\n", "̯λ2����ƽ���ڵ�����", (double)sum_nodes_2 / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n\n\n", "̯λ2����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time_2 / served_2);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��


		printf("%-10s%d\n\n", "���ܵĹ˿�������", turnaways);

	}
	else
		puts("û�й˿ͣ�");

	EmptyTheQueue(&line);
	puts("����ģ�������");

	return 0;
}
bool newcustomer(double x)//�Ƿ����¹˿͵���	//x��ƽ��ÿ���˿͵�������ʱ��
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX��rand()�ܲ��������ֵ
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//����rand() * x / RAND_MAX��Χ��0~x
}														//���ݿ�����һ�������x�����1��
														//����С��1����С��1����(cycle������ÿ�ε���1����)
Item customertime(long when)//���ù˿Ͳ���
{
	Item jiegouticanshu;//�ṹ��Ĳ���

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1��Χ1~3
	//����д������
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//��Χ1~3(processtime����Ϊint����)
																						//***ע***ֻ�е�ran()=RAND_MAXʱ�������Ϊ3
	return jiegouticanshu;												//���Խ��1��2��3�ĸ��ʲ�����ͬ(����3���ʼ�С)
}																						//��˸�ֵ�Ķ�����int����ʱ�����������
#endif
//4.
//�����������������и�������Ľṹ���ֵĽṹ���飬
//�˿Ͱ��ո�������������������
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()��rand()

#define MIN_PER_HOUR	60.0

struct 	booth_line
{
	Queue line;//����һ���˿Ͷ���
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways;//����нڵ����������ܵĹ˿�����
	int customers;//������еĹ˿�����

	int wait_process_finished_time ;//��ǰ����ȴ��˿���ѯ��ϵ�ʱ��

	int in_queue_wait_time ;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��

	int served;//����Ĺ˿�����
	int sum_nodes;//�ۼƶ��нڵ���
};

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	struct booth_line  Booth_line[2] = { {.hours=0},{.hours=0} };

	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	InitializeQueue(&Booth_line[0].line);
	InitializeQueue(&((Booth_line+1)->line));

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������̯λ1ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &Booth_line[0].hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &Booth_line[0].customers_per_hour);
	Booth_line[0].cyclelimit = MIN_PER_HOUR * Booth_line[0].hours;
	Booth_line[0].min_per_customers = MIN_PER_HOUR / Booth_line[0].customers_per_hour;

	puts("������̯λ2ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &Booth_line[1].hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &Booth_line[1].customers_per_hour);
	Booth_line[1].cyclelimit = MIN_PER_HOUR * Booth_line[1].hours;
	Booth_line[1].min_per_customers = MIN_PER_HOUR / Booth_line[1].customers_per_hour;

	for (int i = 0; i < 2; i++)
	{
		for (Booth_line[i].cycle = 0; Booth_line[i].cycle < Booth_line[i].cyclelimit; Booth_line[i].cycle++)
		{
			if (newcustomer(Booth_line[i].min_per_customers))//�ж�ÿ�����Ƿ��й˿���
			{
				if (QueueIsFull(&Booth_line[i].line))
					Booth_line[i].turnaways++;
				else
				{
					Booth_line[i].customers++;
					temp = customertime(Booth_line[i].cycle);//�ڵ�ǰ���������¹˿͵Ĳ���
					AddQueue(temp, &Booth_line[i].line);
				}
			}		

			if (Booth_line[i].wait_process_finished_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))//��̯λ�������й˿���̯λ����ʱ
			{											 //*****ע*****
				DeQueue(&temp, &Booth_line[i].line);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

				Booth_line[i].wait_process_finished_time = temp.processtime;//���µ���ѯ���ѵ�ʱ��
				Booth_line[i].in_queue_wait_time += Booth_line[i].cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

				Booth_line[i].served++;
			}

			if (Booth_line[i].wait_process_finished_time > 0)
				Booth_line[i].wait_process_finished_time--;

			Booth_line[i].sum_nodes += QueueItemCount(&Booth_line[i].line);
		}

		if (Booth_line[i].customers > 0)
		{
			printf("̯λ%d\n",i+1);
			printf("%-10s%d\n", "��̯λ�Ĺ˿�������", Booth_line[i].customers);

			printf("%-10s%d\n", "̯λ�ѷ���Ĺ˿�������", Booth_line[i].served);
			printf("%-10s%.2lf\n", "̯λ����ƽ���ڵ�����", (double)Booth_line[i].sum_nodes / Booth_line[i].cyclelimit);//ƽ��ÿ�����Ŷӵ�����
			printf("%-10s%.2lf\n", "̯λ����ƽ���ȴ�ʱ��(��λ������)��", (double)Booth_line[i].in_queue_wait_time / Booth_line[i].served);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��

			printf("%-10s%d\n\n", "���ܵĹ˿�������", Booth_line[i].turnaways);

		}
		else
			puts("û�й˿ͣ�");

		EmptyTheQueue(&Booth_line[i].line);
	}

	puts("����ģ�������");

	return 0;
}
bool newcustomer(double x)//�Ƿ����¹˿͵���	//x��ƽ��ÿ���˿͵�������ʱ��
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX��rand()�ܲ��������ֵ
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//����rand() * x / RAND_MAX��Χ��0~x
}														//���ݿ�����һ�������x�����1��
														//����С��1����С��1����(cycle������ÿ�ε���1����)
Item customertime(long when)//���ù˿Ͳ���
{
	Item jiegouticanshu;//�ṹ��Ĳ���

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1��Χ1~3
	//����д������
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//��Χ1~3(processtime����Ϊint����)
																						//***ע***ֻ�е�ran()=RAND_MAXʱ�������Ϊ3
	return jiegouticanshu;												//���Խ��1��2��3�ĸ��ʲ�����ͬ(����3���ʼ�С)
}																						//��˸�ֵ�Ķ�����int����ʱ�����������
#endif


//5.��һ����ջ�����ӱ�ʾ�����õ�����
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
		fprintf(stderr, "����Ԫ�������Ѵﵽ���ֵ��");
		exit(1);
	}

	char temp2[MAX_STACK+1];//����temp2�����ݴ�������ַ���

	int jishu;

	puts("�������ַ�����");//����10���ַ�
	scanf("%s",temp2);

	jishu = strlen(temp2);

	for (int index = 0; index < jishu; index++)
		temp1[index].data = temp2[index];//ͨ��ѭ������temp1�ṹ����ĳ�Ա(��ÿ���ṹ)��data��Ա���ַ�

	for (int index = 0; index < jishu; index++)
	{
		if (PushItem(temp1[index], &shuju) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;								//***ע***
		}											//ÿ�ε���PushItem()ʱ�����ݶ����Զ�������һ���ڵ�
		if (StackIsFull(&shuju))
		{
			puts("Ԫ�������Ѵﵽ���ֵ��");
			break;
		}
	}

	if (StackIsEmpty(&shuju))
		printf("û���������룡\n");
	else
	{
		printf("������ջ�е��ַ����ݣ�\n");
		Traverse(&shuju,show);
	}
	printf("��������%d���ַ�\n",StackItemCount(&shuju));

	printf("�����Ǵ�ջ�е������ַ����ݣ�\n");
	while (!StackIsEmpty(&shuju))
	{
		PopItem(&temp1, &shuju);
		printf("%c\n", temp1[0]);
	}

	EmptyTheStack(&shuju);
	printf("�ټ���\n");

	return 0;
}
void show(Item item)
{
	printf("%c\n", item.data);
}
#endif
//��������ջ��˳���ʾ���������飩


//6.
#if 0
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40

void fill_array(int* p, int n);
void show_array(const int* p, int n);
int mycompare(const void* p1, const void* p2);
bool find(int *zhengshu,int num,int search);//�βΣ�ָ�������ָ�룬����Ԫ�ظ����������ҵ�����

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* ������� */
	fill_array(shuzu, SIZE);

	puts("�����е����������");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("�����е������������ɺ�����");
	show_array(shuzu, SIZE);

	printf("��������ҪѰ�ҵ�������");
	int search;
	scanf("%d",&search);
	if (find(shuzu, SIZE, search))
		printf("���ҵ���\n");
	else
		printf("δ�ҵ���\n");

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
	int head = 0, tail = num - 1,try=(head+tail)/2;//try������ֵ

	while (try >= head && try <= tail&&num)
	{
		if (*(zhengshu + try) < search)//���С��
		{
			head = try + 1;
			try = (head + tail) / 2;
		}
		else if (*(zhengshu + try) > search)//�������
		{
			tail = try - 1;
			try = (head + tail) / 2;
		}
		else 
			return true;

		num--;//����(head + tail) / 2���ս����ضϳ����������Һ��ڻᵼ������ֵ�ޱ仯��������ѭ��
	}			   //��������numֵ��0������ѭ��
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
	puts("�ټ���");
}
void addwords(Tree* ptree)
{
	Item temp;

	FILE* fp;
	char words[MAX];//��������ʾ������ʾ����
	//int zifujishu, index;//�ַ�����ֵ������ֵ
	char ch;
	int index=0;

	if ((fp = fopen("17.12.7.txt", "a+")) == NULL)//����д
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
		puts("���������Ѵﵽ���ֵ���޷������������");
	else
	{
		/*while (fscanf(fp, "%s", words) == 1)//�ӵ�һ���ǿհ��ַ���ʼ������һ���հ��ַ�֮ǰ�������ַ���������
		{
			zifujishu = strlen(words);
			for(index = 0; index < zifujishu; index++)
			{
				temp.danci[index] = words[index];
			}*/				//���󣺴洢�Ĳ����ַ�����Ӧ�����ַ���

		/*while (fscanf(fp, "%s", temp.danci) == 1)//�ӵ�һ���ǿհ��ַ���ʼ������һ���հ��ַ�֮ǰ�������ַ���������
		{
			temp.cishu = 1;//ÿ�����뵽danci���ַ�����cishu������Ϊ0
		
			if (SeekItem(&temp, ptree).child != NULL)//�������ظ����ַ���ʱ
			{													//***ע***SeekItem()��Ϊ�ⲿ�����������Ǿ�̬����
				SeekItem(&temp, ptree).child->item.cishu++;//�ҵ����и��ַ������ڵĽڵ�ĵ�ַ�����Ը����cishu��Աֵ��1
			}
			else//�����벻��ͬ���ַ���ʱ
				AddItem(&temp, ptree);
		}*/					//覴ã�polling��polling,   ���������ʣ���Ϊfscanf()�ж�����Ҳ���ַ�				


		while ((ch = getc(fp)) != EOF)//����ַ�����
		{
			if (isalpha(ch))
			{
				temp.danci[index] = ch;
				index++;
			}
			else
			{
				temp.danci[index] = '\0';//����Ϊ�ַ���
				index = 0;

														 //*****ע*****
				if (temp.danci[0] == '\0')//��������Ƕ��źͿո��򶺺�ǰ�ĵ��ʴ����������ǿո����ת����ѭ���Ĳ��Ա��ʽ��ֵ
					continue;

				temp.cishu = 1;//ÿ�����뵽danci���ַ�����cishu������Ϊ0

				if (SeekItem(&temp, ptree).child != NULL)//�������ظ����ַ���ʱ
				{													//***ע***SeekItem()��Ϊ�ⲿ�����������Ǿ�̬����
					SeekItem(&temp, ptree).child->item.cishu++;//�ҵ����и��ַ������ڵĽڵ�ĵ�ַ�����Ը����cishu��Աֵ��1
				}
				else//�����벻��ͬ���ַ���ʱ
					AddItem(&temp, ptree);
			}
		}
	}

	//��������fscanf()����SeekItem()�Ա���Ϊ��̬������ֻ�䶯AddItem()����
	//while (fscanf(fp, "%s", temp.danci) == 1)//����ǿհ��ַ�������
	//{
	//	if (!isalpha(temp.danci[0]))//��������ǿո�����ſո�
	//		continue;
	//	if (!isalpha(temp.danci[strlen(temp.danci) - 1]))//��������ĸ�ͱ�����
	//		temp.danci[strlen(temp.danci) - 1] = '\0';
	//	temp.cishu = 1;
	//	AddItem(&temp, ptree);
	//}

	/*(tree.c�ļ���)
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
		SeekItem(pitem, ptree).child->item.cishu++;
		return true;
	}
	..........
	..........
	*/

	puts("���ϵ����Ѵ��뵥���� !");

	if (fclose(fp) != 0)
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�\n");
}

void menu(void)
{
	puts("���ʹ������");
	puts("����������Ҫ�Ĺ���ǰ��Ӧ�ĵ��ʣ�");
	printf("%-20s%20s\n","a) �г����е��ʼ�����ִ���"," b) ��ѯ�������ļ��г��ֵĴ���");
	printf("%-20s\n","c���˳�");
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
		puts("������a��b��c");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
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
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}

void dayin(Item item)
{
	printf("%-s%-30s %20s%-6d\n","���ʣ�", item.danci,"���ִ�����", item.cishu);
}

void findwords(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û�����ݣ�");
		return;
	}

	puts("���������������ĵ��ʣ�");
	s_gets(temp.danci, LENGTH);

	printf("%-s%-30s\n", "���ʣ�", temp.danci);

	if (InTree(&temp, ptree))
	{
		printf("�����У����ִ�����%d\n", SeekItem(&temp,ptree).child->item.cishu);
	}
	else
		printf("�������У�\n");
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
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 17\code3\Project3\x64\Debug
//Project3.exe
#endif


//8.��һ��ʹ��һά����petkind����strcat()ƴ��petkind
//ʵ��petkind�洢ͬ������ͬ����ĳ������������
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
			printf("���ֲ�����%dֻ����\n", TreeItemCount(&pets));
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
	puts("�ټ���");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) ��ӳ��� s) ��ʾ��������");
	puts("n) ����������� f) Ѱ�ҳ���");
	puts("d) ɾ��һֻ���� q)�˳�");
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
		puts("������a��s��n��f��d��q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
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
		puts("���������Ѵﵽ���ֵ��");
	else
	{
		puts("�������������֣�");
		s_gets(temp.petname, LENGTH);
		puts("�������������ͣ�");
		s_gets(temp.petkind, LENGTH);

		lowercase(temp.petname);
		lowercase(temp.petkind);

		if (SeekItem(&temp, ptree).child)//��ͬ���ĳ���
		{
			find=strchr(SeekItem(&temp, ptree).child->item.petkind,'\0');
			*find = ',';
			*(find + 1) = '\0';

			strcat((SeekItem(&temp, ptree).child->item.petkind), temp.petkind);
			//strcpy((SeekItem(&temp, ptree).child->item.petkind)+5*n, temp.petkind);
			//n *= 2;
			/***Ϊʲô������strcpyʵ���������ݵĿ�����***/
			//��Ϊ��'\0'��λ��֮��������ֵ����ʹָ���ڵ�6��Ԫ�ص�λ���Ͽ��������ݣ�����֮�������Ҳ���ܴ�ӡ����
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
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("���������������ĳ�������֣�");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("��������%s�ĳ���", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("�����У�\n");
		printf("�и����ֵĳ��������У�%s\n",SeekItem(&temp,ptree).child->item.petkind);
	}
	else
		printf("�������У�\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("����������ɾ���ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("����������ɾ���ĳ�������ͣ�");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("��ɾ����\n");
	else
		printf("�������У��޷�ɾ����\n");
}
#endif
//��һ�ͷ�����覴ã�ɾ���������ֻɾ��ͬ����ĳһ�ֳ���

//8.��������Item�ṹ���ֵ�perkind��Ա��Ϊ��ά�����Դ洢ͬ������ͬ����ĳ������������
//SeekItem()�Ա���Ϊ��̬������ֻ�䶯AddItem()����
//ҲҪ�䶯dayin()�Ⱥ����Ķ���
#if 1
/*(tree_1.h�ļ���)
typedef struct
{
	char petname[LENGTH];
	char petkind[LENGTH][LENGTH];
}Item;
*/

/*(tree_1.c�ļ���)
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

/*(code3.c�ļ���)
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
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
			printf("���ֲ�����%dֻ����\n", TreeItemCount(&pets));
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
	puts("�ټ���");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) ��ӳ��� s) ��ʾ��������");
	puts("n) ����������� f) Ѱ�ҳ���");
	puts("d) ɾ��һֻ���� q)�˳�");
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
		puts("������a��s��n��f��d��q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
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
	Item temp = {.petkind[0][0]='\0'};//***ע***����Ҫ��ʼ��������
	char* find;

	if (TreeIsFull(ptree))
		puts("���������Ѵﵽ���ֵ��");
	else
	{
		puts("�������������֣�");
		s_gets(temp.petname, LENGTH);
		puts("�������������ͣ�");
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
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}
//void dayin(Item item)
//{
//	printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
//}
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind[i]);
		i++;
	}
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("���������������ĳ�������֣�");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("��������%s�ĳ���", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("�����У�\n");
	}
	else
		printf("�������У�\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("����������ɾ���ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("����������ɾ���ĳ�������ͣ�");
	s_gets(temp.petkind[0], LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind[0]);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind[0]);

	if (DeleteItem(&temp, ptree))
		printf("��ɾ����\n");
	else
		printf("�������У��޷�ɾ����\n");
}
#endif