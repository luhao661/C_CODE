#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//9.
//int main(void)
//{
//	unsigned int num;
//	unsigned long div;
//	int biaoji;
//	int num1;
//
//	printf("������һ����������");
//	scanf("%d",&num);
//
//	printf("С�ڻ����%d�����������������ǣ�", num);
//	printf("%5d",2);
//
//	for (num1 = 3; num1 <= num; num1++)
//	{
//		for (div = 2, biaoji = 1; (div * div) <= num1; div++)
//		{
//			if (num1 % div == 0)
//			{
//				biaoji = 0;
//			}
//		}
//		if (biaoji)
//			printf("%5d",num1);
//	}
//
//	return 0;
//}


//10.
//#define DANSHEN_BREAK 17850
//#define HUZHU_BREAK 23900
//#define YIHUN_GONGYOU_BREAK 29750
//#define YIHUN_LIYI_BREAK 14875
//#define RATE1 0.15
//#define RATE2 0.28
//#define DANSHEN_BASE						       (DANSHEN_BREAK*RATE1)
//#define HUZHU_BASE							     	   (HUZHU_BREAK*RATE1)
//#define YIHUN_GONGYOU_BASE	               (YIHUN_GONGYOU_BREAK*RATE1)
//#define YIHUN_LIYI_BASE                              (YIHUN_LIYI_BREAK*RATE1)
//int main(void)
//{
//START:	printf("*****************************************************\n");
//	printf("������������״̬��Ӧ�����֣�\n");
//	printf("1)����		2)����\n3)�ѻ飬����	4)�ѻ飬����\n");
//	printf("*****************************************************\n");
//
//	int choice;
//	float shui;
//	float gongzi;
//
//	while (scanf("%d", &choice) == 1)
//	{
//		if (choice < 1 || choice>4)
//		{
//			printf("�����������ٴ����룺\n");
//			continue;
//		}
//
//		printf("���������Ĺ��ʣ�");
//		while (scanf("%f", &gongzi) != 1)
//		{
//			printf("�����������ٴ����룺\n");
//			break;//��Ϊcontinue,������qʱ������ѭ������Ϊscanfһֱ�����Ǳ�������q
//		}
//
//		switch (choice)
//		{
//		case 1:
//		if (gongzi <= DANSHEN_BREAK)
//			shui = gongzi * RATE1;
//		else
//			shui = DANSHEN_BASE + (gongzi - DANSHEN_BREAK) * RATE2;
//		break;
//
//		case 2:
//			if (gongzi <= HUZHU_BREAK)
//			shui = gongzi * RATE1;
//			else
//			shui = HUZHU_BASE + (gongzi - HUZHU_BREAK) * RATE2;
//			break;
//
//		case 3:
//				if (gongzi <= YIHUN_GONGYOU_BREAK)
//					shui = gongzi * RATE1;
//				else
//					shui = YIHUN_GONGYOU_BASE + (gongzi - YIHUN_GONGYOU_BREAK) * RATE2;
//				break;
//
//		case 4:
//			if (gongzi <= YIHUN_LIYI_BREAK)
//				shui = gongzi * RATE1;
//			else
//				shui = YIHUN_LIYI_BASE + (gongzi - YIHUN_LIYI_BREAK) * RATE2;
//			break;
//		}
//
//	printf("��Ӧ��˰��%.2fԪ\n\n\n", shui);
//	goto START;
//	}
//
//	printf("�ټ���\n");
//	return 0;
//}


//11.
#define yangjijiage 2.05
#define tiancaijiage 1.15
#define huluobojiage 1.09
int main(void)
{
	char choice;
	float yangji=0,tiancai=0,huluobo=0;
	float bangshu,shoujia,zhekou=0;
	float yunfeibaozhuangfei;

	printf("****************************************************\n");
	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");
	printf("(a ��			��b���\n");
	printf("(c ���ܲ�		\n");
	printf("****************************************************\n");
	
	
	while (1)
	{
		scanf("%c", &choice);

		switch (choice)
		{
		case 'a':
			printf("�����������\n");
			scanf("%f", &yangji);
			break;
		case 'b':
			printf("�����������\n");
			scanf("%f", &tiancai);
			break;
		case 'c':
			printf("�����������\n");
			scanf("%f", &huluobo);
			break;
		}
			
		if (choice == 'q')
			break;
		
    	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");//Ϊʲô��λ���ִ�����飿��������
		//if (choice == '\n')
			//continue;
	} 

		bangshu = yangji + tiancai + huluobo;
		shoujia = yangji * yangjijiage + tiancai * tiancaijiage + huluobo * huluobojiage;

		if (shoujia >= 100)
			zhekou = shoujia * 0.95;

		if (bangshu == 0)
			yunfeibaozhuangfei = 0.0;
		else if (bangshu <= 5)
			yunfeibaozhuangfei = 6.5;
		else if (bangshu <= 20)
			yunfeibaozhuangfei = 14;
		else 
			yunfeibaozhuangfei = 14 + (bangshu - 20) * 0.5;


		printf("�󼻵��ۣ�		2.05\n��˵��ۣ�		1.15\n���ܲ����ۣ�		1.09\n");
		printf("*****************************\n");
		printf("��������������λ��������%.2f\n",bangshu);
		printf("�������߲˷��ã�	%.2f\n",shoujia);
		printf("�������ܷ��ã�		%.2f\n",shoujia-zhekou);
		printf("�ۿۣ�			%.2f\n",zhekou);
		printf("�˷ѺͰ�װ�ѣ�		%.2f\n",yunfeibaozhuangfei);
		printf("�ܼƣ�			%.2f\n",shoujia-zhekou+yunfeibaozhuangfei);
		printf("*****************************\n");

	printf("�ټ���\n");

	return 0;
}