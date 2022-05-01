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
//	printf("请输入一个正整数：");
//	scanf("%d",&num);
//
//	printf("小于或等于%d的数，且是素数的是：", num);
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
//	printf("请输入与您的状态对应的数字：\n");
//	printf("1)单身		2)户主\n3)已婚，共有	4)已婚，离异\n");
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
//			printf("输入有误！请再次输入：\n");
//			continue;
//		}
//
//		printf("请输入您的工资：");
//		while (scanf("%f", &gongzi) != 1)
//		{
//			printf("输入有误！请再次输入：\n");
//			break;//若为continue,则输入q时会无限循环，因为scanf一直读的是被丢弃的q
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
//	printf("您应缴税：%.2f元\n\n\n", shui);
//	goto START;
//	}
//
//	printf("再见！\n");
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
	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");
	printf("(a 洋蓟			（b甜菜\n");
	printf("(c 胡萝卜		\n");
	printf("****************************************************\n");
	
	
	while (1)
	{
		scanf("%c", &choice);

		switch (choice)
		{
		case 'a':
			printf("请输入磅数：\n");
			scanf("%f", &yangji);
			break;
		case 'b':
			printf("请输入磅数：\n");
			scanf("%f", &tiancai);
			break;
		case 'c':
			printf("请输入磅数：\n");
			scanf("%f", &huluobo);
			break;
		}
			
		if (choice == 'q')
			break;
		
    	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");//为什么这段话会执行两遍？？？？？
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


		printf("洋蓟单价：		2.05\n甜菜单价：		1.15\n胡萝卜单价：		1.09\n");
		printf("*****************************\n");
		printf("订购的重量（单位：磅）：%.2f\n",bangshu);
		printf("订购的蔬菜费用：	%.2f\n",shoujia);
		printf("订单的总费用：		%.2f\n",shoujia-zhekou);
		printf("折扣：			%.2f\n",zhekou);
		printf("运费和包装费：		%.2f\n",yunfeibaozhuangfei);
		printf("总计：			%.2f\n",shoujia-zhekou+yunfeibaozhuangfei);
		printf("*****************************\n");

	printf("再见！\n");

	return 0;
}