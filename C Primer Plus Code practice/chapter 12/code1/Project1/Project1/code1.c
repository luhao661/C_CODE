#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����еı������ڲ���еı���ͬ�������
#if 0
int main(void)
{
	int x = 30;
	printf("x�����飺ֵΪ%d��ַΪ%p\n",x,&x);
	
	{
		int x = 77;
		printf("x���ڲ�飺ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	while (x++ < 33)//�����xΪ30ʱ���룬x��Ϊ31��������������xΪ33ʱ�ж�Ϊ�ٲ����룬x��Ϊ34��
	{
		int x = 100;
		x++;
		printf("x��whileѭ���У�ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	return 0;
}
#endif


//�µ�C99�����
#if 0
int main(void)
{
	int n = 8;
	printf("�����n=%d����ַ��p=%p\n",n,&n);

	for (int n = 1; n < 3; n++)
		printf("��һ��forѭ��������n=%d����ַ��p=%p\n",n,&n);

	printf("��һ��forѭ��������n=%d����ַ��p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);
		int n = 6;
		printf("�ڶ���forѭ�����±���n=%d����ַ��p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);


	return 0;
}
#endif


//ʹ�þֲ���̬��������������ľ�̬���������������������Ӿ�̬�洢�ڣ�
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("��������%d:\n",count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay ;//��δ��ʼ����̬������Ĭ��ֵΪ0
	printf("fade=%d     stay=%d\n",fade++,stay++);
}
#endif


//ʹ���ⲿ�������ⲿ���ӵľ�̬������
#if 0
int shuzi;
void ceshi(void);
int main(void)
{
	puts("����������:");
	scanf("%d",&shuzi);

	while (shuzi != 66)
	{		
		ceshi();
	}
	puts("����ˣ�");

	return 0;
}
void ceshi(void)
{
	printf("��������ֲ��ԣ����������룡\n");
	scanf("%d", &shuzi);
}
#endif


//ʹ�ö��ִ洢��𣬱�дʵ�ּ���Ȳ����еĳ���													//Ҫ��qiuhehanshu.cһ�����
#if 0
void baogao_zhixincishu(void);//�������ִ�д���
extern void qiuhe(int k);//�������ʵ�δ����ĵȲ��������      extern����ǰ�ļ�ʹ�õĺ����������ڱ�

int count = 0;//����ʽ�������ļ��������ⲿ���Ӿ�̬�洢��-->�ⲿ���ӵľ�̬����

int main(void)
{
	int shuzi;//���������������Զ��洢��-->�Զ�����
	register int i;//���������������Զ��洢��-->�Ĵ�������

	printf("������һ��������(����0���˳�����)��");
	while (scanf("%d", &shuzi) == 1 && shuzi > 0)
	{
		count++;//ʹ���ⲿ���ӵľ�̬����
		for (i = shuzi; i >= 0; i--)					//iΪ0ʱ��ӡѭ�������ͼ�����
			qiuhe(i);

		printf("������һ��������(����0���˳�����)��");
	}
	baogao_zhixincishu();

	return 0;
}
void baogao_zhixincishu(void)//�������ִ�д���
{
	printf("����ִ����%d��\n",count);//ʹ���ⲿ���ӵľ�̬����
}
#endif


//ʹ���ڲ����ӵľ�̬������д����α������ĺ���														//Ҫ��rand1.cһ�����
#if 0//��������
#include<time.h>
extern unsigned int rand1(void);
extern void seed_to_next(unsigned int seed);

int main(void)
{
	int count;
	unsigned seed;

	printf("ʹ��ϵͳʱ����Ϊ��������\n");
	seed_to_next((unsigned int )time(0));

	for (count = 0; count < 10; count++)
		printf("%d\n",rand1());

	return 0;
}
#endif


//ʹ���������뵥Ԫ�ļ���������ӳ���																		//Ҫ��zhitouzi.cһ�����
#if 0
#include<stdlib.h>//�ṩsrand()ԭ��
#include <time.h>//�ṩtime()ԭ��
#include"zhitouzi.h"

int main(void)
{
	int geshu,mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//��rand()������������������������
	printf("���������ӵ�������(����0���˳�����)\n");

	while (scanf("%d", &mianshu) == 1 && mianshu > 0)
	{
		puts("�ж��ٸ����ӣ�");
		if ((status = scanf("%d", &geshu)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				puts("��Ӧ������һ��������");
				puts("����������һ��");
				while (getchar()!='\n');
				continue;
				puts("�ж��ٸ����ӣ�");
			}
		}																						 //touzishuzizongshu���ⲿ�����ɱ������ļ��ĺ�������
		shuzizongshu = touzishuzizongshu(geshu, mianshu);//ע�������������뺯������ͬ����Ϊ����ͬ����ж����Դ��󣬱�������֪���õ��ñ������Ǻ�����
		printf("��ʹ��%d��%d�������������%d\n\n",geshu,mianshu,shuzizongshu);

		printf("���������ӵ�������(����0���˳�����)\n");
	}
	printf("touzishuzi()������ִ����%d��", zhitouzicishu);

	return 0;
}
#endif


//ʹ��malloc()ʵ�ֶ�̬�����ڴ�
#if 0
#include<stdlib.h>

int main(void)
{
	double* p;
	int max, number;
	int i = 0;

	puts("Ҫ������ٸ�double���͵�ֵ��");
	if (scanf("%d", &max) != 1)
	{
		puts("��������ֲ���ȷ��");
		exit(EXIT_FAILURE);
	}
	p = (double*)malloc(max * sizeof(double));
	if (p == NULL)
	{
		puts("�����ڴ����ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}

	puts("����������(��q���˳�)��");
	while (i < max && scanf("%lf", p+i) == 1)//����1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10 11.11 12.12 13.13 14.14 15.15
		i++;

	printf("�����������%d�����֣�\n",i);

	number = i;
	for (i = 0; i < number; i++)
	{
		printf("%7.2f",*(p+i));
		if (i % 7 == 6)//ÿ��������7�����֣���һ��iΪ0��6���ڶ���i��7��ʼ��ѭ��������i��ֵ�����������ֵ�����
			putchar('\n');
	}
	if (i % 7 != 0)//��ÿ������û�������ӡ���з�
		putchar('\n');

	puts("Done.");
	free(p);

	return 0;
}
#endif


//�鿴��̬�����Զ����󣬶�̬����Ķ���洢�ںδ�
#if 0
#include<stdlib.h>
#include<string.h>

int waibulianjie_jintai = 30;
const char* p1 = "p1ָ���ַ������������ַ����Ǿ�̬����";

int main(void)
{
	int zidong = 40;
	char* p2 = "p2ָ���ַ������������ַ����Ǿ�̬����";

	char shuzuxinshichuangjian[] = "������ʽ�����ַ���";

	int* p3 = (int*)malloc(1 * sizeof(int));
	*p3 = 35;

	//��char* p4 = (char*)calloc(strlen("abc")+1,sizeof(char));
	char* p4 = (char*)malloc(strlen("abc") + 1);
	strcpy(p4,"abc");

	printf("�ⲿ���ӵľ�̬������%d                                         ��ַ��%p\n",waibulianjie_jintai,&waibulianjie_jintai);
	printf("�ַ����Ǿ�̬����:%s          ��ַ��%p\n",p1,p1);
	printf("�ַ����Ǿ�̬����:%s          ��ַ��%p\n", p2, p2);
	printf("������ʽ�����ַ���:%s		               ��ַ��%p\n", shuzuxinshichuangjian, shuzuxinshichuangjian);
	printf("�Զ�������%d                                                   ��ַ��%p\n",zidong,&zidong);
	printf("��̬����Ķ���%d                                             ��ַ��%p\n",*p3,&p3);
	printf("��̬����Ķ���%s				      	       ��ַ��%p\n", p4, p4);

	free(p3);
	free(p4);

	return 0;
}
#endif