#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
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
int critic(int num)//units��num�ĵ�ַ����ͬ��
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&num);

	return num;
}
#endif
//1.������ָ��
#if 0
void critic(int *num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
	{
		critic(&units);//��ָ��num����units�ĵ�ַ��
	}
	printf("You must have looked it up!\n");

	return 0;
}
void critic(int *num)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", num);//�޸�units��ֵ
}
#endif


//2.																						//��pe12-2a.c, pe12-2a.hһ�����
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


//3.																						//��pe12-3a.c, pe12-3a.hһ�����
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
			mode1 = mode;//����0��1�����mode1��ֵ��

		if (mode != 0 && mode != 1)//���벻��0�Ҳ���1������ԭ��mode1��ֵ����mode��
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
//��������main()�ж���mode, distance, fuel��
//����������Ϊ��
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
	puts("Ҫ���ü��Σ�");
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		cishu = ceshi();
		printf("��������%d��\n",cishu);
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
#include<stdlib.h>/*�ṩ rand������ԭ�� */
int tigongshuzi(void);
void paixu(int* p, int num);

int main(void)
{
	srand((unsigned int )time(0));
	int i;
	int shuzu[100];
	for (i = 0; i < 100; i++)
		*(shuzu + i) = tigongshuzi();

	puts("ԭ���֣�");
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	puts("�������к�");
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
//				(p+top)= (p + seek);									//ע���˴��ᱨ���������Ǹ����޸ĵ���ֵ��
//				p + seek= temp;										//ԭ��p+top��ָ���ڴ��ϵ�����  P320		
//			}																		//p=p+1��ȷ     p+1=p����
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

	printf("��������ѡ����������֣�");
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
		printf("\n��������ѡ����������֣�");
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
	printf("���ִ�����1          2            3            4           5           6          7          8          9           10\n");																							
	for (int i = 0; i < 10; i++)													//�ǣ���P79��
		printf("%12d",*(jilu+i));													//scanf()      �����б�ָ�������ָ��
																								//printf()		�����б������������ͱ��ʽ
}
#endif
//6.��ANSI C ��srand()��rand()
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
	printf("���ִ�����1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//�ǣ���P79��
		printf("%12d", *(jilu + i));												//scanf()      �����б�ָ�������ָ��
																								//printf()		�����б������������ͱ��ʽ
}
#endif


//7.
#if 0
#include<stdlib.h>//�ṩsrand()ԭ��
#include <time.h>//�ṩtime()ԭ��
#include"zhitouzi.h"

int main(void)
{
	int cishu,geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//��rand()������������������������

	printf("�����������ӵĴ���(����q���˳�����)��");

	while (scanf("%d", &cishu) == 1)
	{
		printf("���������ӵ������͸�����");		

		if(scanf("%d%d", &mianshu, &geshu)!=2)
		{
				puts("����������һ��");
				while (getchar() != '\n');
				continue;
				printf("���������ӵ������͸�����");
		}
		
		printf("��������%d��%d��%d������ӵ����֣�\n",cishu,geshu,mianshu);

		int i;
		for ( i = 0; i < cishu; i++)
		{
			shuzizongshu = touzishuzizongshu(geshu, mianshu);//ע�������������뺯������ͬ����Ϊ����ͬ����ж����Դ��󣬱�������֪���õ��ñ������Ǻ�����
			printf("%5d", shuzizongshu);

			if (i % 15 == 14)
				putchar('\n');
		}
		if (i % 15 != 0)
			putchar('\n');

		printf("�����������ӵĴ�����(����q���˳�����)");
	}

	printf("\ntouzishuzi()������ִ����%d��", zhitouzicishu);

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
	printf("����Ҫ���뼸�����ʣ�");
	scanf("%d",&dancishu);

	char** p1;
	p1=make_array(dancishu);
	
	printf("����������%d�����ʣ�\n",dancishu);
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
//9.����
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("����Ҫ���뼸�����ʣ�");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);//����һ��ָ�����飬ָ�����Ϊ���ڵ�������ָ�붼ָ��char��p1��ָ���ָ�롣

	printf("����������%d�����ʣ�", dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);//����scanf()ÿ��ֻ�ܶ�һ�����ʵĹ��ܣ�ÿ��ѭ�����ӻ���������һ�����ʡ�

		char* p2 = (char*)malloc((strlen(temp)+1)* sizeof(char));//����ÿ�����ʵĳ��ȣ�����һ�����ʵ��ڴ档

		strcpy(p2,temp);//ÿ�ζ��������ڴ��д���һ�����ʡ�
		*(p1 + i) = p2;//��p1�����ָ�붼ָ���·�����ڴ�ռ䡣
	}
	
	puts("������������ĵ������У�");
	for (int i = 0; i < dancishu; i++)
		puts(*(p1 + i));
	//printf("%s\n", *(p1+i));

	free(p1);
	puts("��ɣ�");

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));//����һ�����飬�����е�ÿ��Ԫ�ض���ָ��char��ָ�룬��˷���ֵӦ��ָ���ָ��
	return p1;
}
#endif