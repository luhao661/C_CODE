#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"hotel.h"
int menu(void)
{
	int xuanze,shuruyanzheng;

	printf("\n%s\n",STARS);
	printf("��������ѡ��ľƵ꣺\n");
	printf("1)Fairfield Arms		2)Hotel Olympic\n");
	printf("3)Chertworthy Plaza		4)The Stockton\n");
	printf("5)quit\n");
	printf("%s\n",STARS);

	while ((shuruyanzheng = scanf("%d", &xuanze)) != 1 || (xuanze < 1 || xuanze>5))
	{
		if (shuruyanzheng != 1)
			scanf("%*s");
		printf("������1~5�����֣�\n");
	}

	return xuanze;
}

int getnights (void)
{
	int nights;

   printf("��������ס����\n");

   while (getchar() != '\n')//������ĵ�һ������֮�����������
	   continue;

	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
	/*	while (putchar() != '\n')
			;*/
		printf("���������룡\n");
	}

	return nights;
}

void showprice(double fangjia, int nights)
{
	int i;
	double total = 0.0;
	double zhekoudu = 1.0;//�ۿ۶�

	for (i = 1;                    i <= nights; i++,              zhekoudu *= DISCOUNT)
		total += fangjia * zhekoudu;

	printf("�ܼ���%.2f\n",total);

	return;
}