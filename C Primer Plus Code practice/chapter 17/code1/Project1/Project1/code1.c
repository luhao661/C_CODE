#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strchr()
//
#if 1
#endif


//ʹ�ýṹ�������洢����
#if 0
#define LENGTH	45   //�洢ӰƬƬ������󳤶�
#define MAX			500//�洢ӰƬ���������

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

	puts("�������Ӱ�ı��⣺");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d",&movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n",movies[index].title, movies[index].rating);

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


//ʹ�ýṹ��+��̬�ڴ���䣬��ʡ����ʱʹ�õ��ڴ�ռ�
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//�洢ӰƬƬ������󳤶�

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("��������Ҫд��ĵ�Ӱ����\n");
	scanf("%d",&max);

	while (getchar()!='\n')
	continue;

	struct film *movies = (struct film*)malloc(max*sizeof(struct film));

	int jishu = 0;

	puts("�������Ӱ�ı��⣺");
	while (jishu < max && s_gets((*(movies+jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", movies[index].title, movies[index].rating);

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


//ʹ�ýṹ��������ʾ����
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char *string,int num);

int main(void)
{
	struct film* head=NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* previous=0x00, * current;							//3.����һ����film�ṹ���ֵĽṹ����previous��current������previous��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
			head = current;
		else
			previous->next = current;							  	    //6.������Ĳ��ǵ�һ���ṹ����ṹָ��previousָ���next��Ա(nextҲ�Ǹ��ṹָ��)����һ�η���Ľṹ�ĵ�ַ

		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ
		strcpy(current->title,input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		previous = current;												    //8.previousָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�previous->next���е�previous
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	/****************
	//��һ���ṹ��������head���һ���ṹ�ĵ�ַ��												   ��һ���ṹ��next��Ա����ΪNULL���������ݺ󣬵�һ���ṹ�ĵ�ַ����previous��
	//�ڶ����ṹ��������previous(����һ���ṹ)��next��Ա��ڶ����ṹ�ĵ�ַ���ڶ����ṹ��next��Ա����ΪNULL���������ݺ󣬵ڶ����ṹ�ĵ�ַ����previous��
	//�������ṹ��������previous(���ڶ����ṹ)��next��Ա��������ṹ�ĵ�ַ���������ṹ��next��Ա����ΪNULL���������ݺ󣬵������ṹ�ĵ�ַ����previous
																																																									   ****************/

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n",current->title,current->rating);
		current = current->next;
	}

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
#endif


//���������͵ķ�������3����ɴӳ��󵽾���Ĺ���
//1.�ṩ�������Ժ���ز����ĳ�������(���������ADT)
//2.��дһ��ʵ��ADT�ı�̽ӿ�(����list.h��ָ����δ洢���ݺ�ִ����������ĺ���)
//3.��д������ʵ�ֽӿ�(����list.c��)����д������ʹ�ýӿ�(��main.c��)��
#if 0
//*****�ѽӿ�Ӧ�����ض���������Դ�����ļ�*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char *string,int num);

int main(void)
{
	P_Node movies;//����һ��ָ��Node�ṹ���ֵ�ָ��movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr,"�������������Ѵﵽ���ֵ��");
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
			fprintf(stderr,"���󣬷����ڴ�ʧ�ܣ�");
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
		Traverse(&movies,showmovies);
	}
	printf("��������%d����Ӱ\n",ListItemCount(&movies));
	
//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title,item.rating);
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


//����ADT
#if 0
#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue line;
	Item shuju;//queue.h�и�Ϊtypedef int Item;
	char choice;

	InitializeQueue(&line);
	puts("**********���Խӿ�**********");
	puts("����a��������ݣ�����d��ɾ�����ݣ�����q�˳�����");

	while ((choice = getchar()) != 'q')
	{
		if (choice != 'a' && choice != 'd')
			continue;

		if (choice == 'a')
		{
			printf("������Ҫ��ӵ��������ݣ�\n");
			scanf("%d",&shuju);
			if (!QueueIsFull(&line))
			{
				printf("��������д���%d\n", shuju);
				AddQueue(shuju, &line);
			}
			else
				printf("����������\n");
		}

		else if (choice == 'd')
		{
			if (QueueIsEmpty(&line))
				puts("����Ϊ�գ��޷�ɾ�����ݣ�");
			else
			{
				DeQueue(&shuju,&line);
				printf("�ڶ��еĵ�һ���ڵ�ɾ�������ݣ�%d\n",shuju);
			}
		}

		printf("�����д���%d������\n",QueueItemCount(&line));
		puts("����a��������ݣ�����d��ɾ�����ݣ�����q�˳�����");
	}

	EmptyTheQueue(&line);
	puts("�ټ���");

	return 0;
}
#endif


//�ö��а���ģ��	��ѯSigmund�Ĺ˿�	����
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
	Queue line;//����һ���˿Ͷ���
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways = 0;//����нڵ����������ܵĹ˿�����
	int customers = 0;//������еĹ˿�����
	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	int wait_process_finished_time = 0;//��ǰ����ȴ��˿���ѯ��ϵ�ʱ��
	int in_queue_wait_time = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��
	int served = 0;//����Ĺ˿�����
	int sum_nodes = 0;//�ۼƶ��нڵ���

	InitializeQueue(&line);

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d",&hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d",&customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//�ж�ÿ�����Ƿ��й˿���
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//�ڵ�ǰ���������¹˿͵Ĳ���
				AddQueue(temp,&line);
			}
		}

		if (wait_process_finished_time <= 0 && !QueueIsEmpty(&line))//���������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp,&line);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��
		
			served++;
		}

		if (wait_process_finished_time > 0)
			wait_process_finished_time--;

		sum_nodes += QueueItemCount(&line);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n", "��̯λ�Ĺ˿�������", customers);
		printf("%-10s%d\n", "����Ĺ˿�������", served);
		printf("%-10s%d\n", "���ܵĹ˿�������", turnaways);

		printf("%-10s%.2lf\n", "����ƽ���ڵ�����", (double)sum_nodes / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n", "����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time / served);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��
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


//������ADT
#if 1
#endif