#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��֧�ṹif
//int main(void)
//{
//	const int FREEZING = 0;
//	float wendu;
//	int cold_days=0;
//	int all_days=0;
//
//	printf("�������⼸����¶ȣ�����q�Խ������룩");
//	while (scanf("%f", &wendu) == 1)
//	{
//		all_days++;
//		if (wendu < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("��%d�죬��%d���¶ȵ���0���϶ȣ�ռ��������%.1f%%��\n",all_days,cold_days,100*(float)cold_days/all_days);
//	if (all_days == 0)
//		printf("û�����ݣ�\n");
//	return 0;
//}


//��getchar putchar
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == ' ')
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//	putchar(ch);
//
//	return 0;
//}


//ʹ��ctype.h������ĸ�����ĸ
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	putchar(ch);
//
//	return 0;
//}


//������
//#define BREAK1 360
//#define BREAK2 468
//#define BREAK3 720
//#define RATE1 0.13230
//#define RATE2 0.15040
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BASE1 (RATE1*BREAK1)//��һ�����ó���
//#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))//�ڶ������ó���
//#define BASE3 (BASE2+RATE3*(BREAK3-BREAK2))//���������ó���
//
//int main(void)
//{
//	double yongliang;
//	double money;
//
//	printf("�������õĵ�������λ��ǧ��ʱ����");
//	scanf("%lf",&yongliang);
//	if (yongliang <= BREAK1)
//		money = RATE1 * yongliang;
//	else if (yongliang <= BREAK2)
//		money = BASE1 + RATE2 * (yongliang - BREAK1);
//	else if (yongliang <= BREAK3)
//		money = BASE2 + RATE3 * (yongliang - BREAK2);
//	else 
//		money = BASE3 + RATE4 * (yongliang - BREAK3);//���ĵ����÷�
//	printf("%.1lf�ȵ�Ҫ����%.1lfԪ",yongliang,money);
//
//	return 0;
//}


//�������������������Լ��
//int main(void)
//{
//	long num;
//	long  div;
//	int biaoji;
//
//	printf("������һ��������(��q���˳�)");
//	while (scanf("%ld", &num)==1)
//	{
//		 for (div=2,biaoji=1;(div*div)<=num;div++)
//			if (num % div == 0)
//		{
//			if ((div * div) != num)
//				printf("%ld������Լ���ǣ�%ld��%ld\n", num, div, num / div);
//			else
//				printf("%ld������Լ���ǣ�%ld\n",num,div);
//			biaoji = 0;
//		}
//		if (biaoji)                                               //��ǣ������ж�ĳ���Ƿ������forѭ����
//		{
//		 printf("%ld������\n",num);
//		}
//		printf("��������һ��������(��q���˳�)");
//	}
//	printf("�ټ���\n\n");
//
//	return 0;
//}


//ʹ���߼��������
//#define PERIOD '.'
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '\"' && ch != '\'')
//			charcount++;
//	}
//	printf("��%d���ǵ�/˫���ŵ��ַ�(���ո�)\n",charcount);
//
//	return 0;
//}


//ͳ�Ƶ���
#define STOP '|'
int main(void)
{
	char ch;
	char qianyigezifu;
	long zifushu=0;
	long dancishu=0;
	long hangshu=0;
	long buwanzhenghangshu=0;
	int biaoji = 0;

	printf("����������Ե��ı���������|�Խ����ı�д�룩\n");
	qianyigezifu = '\n';
		while ((ch = getchar()) != STOP)
		{
			zifushu++;
			if (ch == '\n')
				hangshu++;
			if (ch != ' ' && ch != '\n' && ch != '\t' && !biaoji)
			{
				biaoji = 1;
				dancishu++;
			}
			if (ch ==' ' || ch== '\n' || ch == '\t' && biaoji)
				biaoji = 0;
			qianyigezifu = ch;
		}
		if (qianyigezifu != '\n')
			buwanzhenghangshu = 1;
		printf("�ַ�����%ld����������%ld��������%ld��������������%ld��\n\n",zifushu,dancishu,hangshu,buwanzhenghangshu);

	return 0;
}