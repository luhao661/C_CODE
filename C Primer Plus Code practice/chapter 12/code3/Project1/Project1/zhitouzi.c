#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//#include <stdio.h>
#include "zhitouzi.h"
//#include <stdlib.h>//�ṩ�⺯��rand()��ԭ��					���Բ�д

int zhitouzicishu = 0;//����ʽ�����ⲿ���ӵľ�̬����

static int touzishuzi(int mianshu)//�����涨������������������������
{
	int touzishuzi;

	touzishuzi = rand() % mianshu + 1;
	zhitouzicishu++;

	return touzishuzi;
}
int touzishuzizongshu(int geshu, int mianshu)//���������������ֵ�����		�βΣ����Ӹ�������������
{
	int i;
	int total = 0;

	if (mianshu < 2)
	{
		puts("������Ҫ��������ӣ�");
		return -2;
	}
	if (geshu < 1)
	{
		puts("������Ҫһ�����ӣ�");
		return -1;
	}
	for (i = 0; i < geshu; i++)
		total += touzishuzi(mianshu);

	return total;
}
#endif