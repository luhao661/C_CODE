#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 0
extern int count;//����ʽ����
static int total = 0;//����ʽ�������ļ��������ڲ����Ӿ�̬�洢��-->�ڲ����ӵľ�̬����

//void qiuhe(int k);//�ٴ�������Ҳ���Բ�д����Ϊcode1.c���Ѿ��������ˣ�

void qiuhe(int k)
{
	static int subtotal = 0;//�������������Ӿ�̬�洢��-->��������ľ�̬����
	if (k <= 0)
	{
		printf("ִ�г���%d��\n",count);
		printf("subtotal=%d  total=%d\n",subtotal,total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}
#endif