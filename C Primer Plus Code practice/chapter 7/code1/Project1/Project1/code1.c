#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//分支结构if
//int main(void)
//{
//	const int FREEZING = 0;
//	float wendu;
//	int cold_days=0;
//	int all_days=0;
//
//	printf("请输入这几天的温度：（按q以结束键入）");
//	while (scanf("%f", &wendu) == 1)
//	{
//		all_days++;
//		if (wendu < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("共%d天，有%d天温度低于0摄氏度，占总天数的%.1f%%。\n",all_days,cold_days,100*(float)cold_days/all_days);
//	if (all_days == 0)
//		printf("没有数据！\n");
//	return 0;
//}


//用getchar putchar
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


//使用ctype.h区分字母与非字母
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


//计算电费
//#define BREAK1 360
//#define BREAK2 468
//#define BREAK3 720
//#define RATE1 0.13230
//#define RATE2 0.15040
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BASE1 (RATE1*BREAK1)//第一档费用吃满
//#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))//第二档费用吃满
//#define BASE3 (BASE2+RATE3*(BREAK3-BREAK2))//第三档费用吃满
//
//int main(void)
//{
//	double yongliang;
//	double money;
//
//	printf("请输入用的电量（单位：千瓦时）：");
//	scanf("%lf",&yongliang);
//	if (yongliang <= BREAK1)
//		money = RATE1 * yongliang;
//	else if (yongliang <= BREAK2)
//		money = BASE1 + RATE2 * (yongliang - BREAK1);
//	else if (yongliang <= BREAK3)
//		money = BASE2 + RATE3 * (yongliang - BREAK2);
//	else 
//		money = BASE3 + RATE4 * (yongliang - BREAK3);//第四档的用费
//	printf("%.1lf度电要交费%.1lf元",yongliang,money);
//
//	return 0;
//}


//给定输入的整数的所有约数
//int main(void)
//{
//	long num;
//	long  div;
//	int biaoji;
//
//	printf("请输入一个整数：(按q以退出)");
//	while (scanf("%ld", &num)==1)
//	{
//		 for (div=2,biaoji=1;(div*div)<=num;div++)
//			if (num % div == 0)
//		{
//			if ((div * div) != num)
//				printf("%ld的两个约数是：%ld和%ld\n", num, div, num / div);
//			else
//				printf("%ld的两个约数是：%ld\n",num,div);
//			biaoji = 0;
//		}
//		if (biaoji)                                               //标记，这能判断某数是否进入了for循环。
//		{
//		 printf("%ld是素数\n",num);
//		}
//		printf("请再输入一个整数：(按q以退出)");
//	}
//	printf("再见！\n\n");
//
//	return 0;
//}


//使用逻辑与运算符
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
//	printf("有%d个非单/双引号的字符(含空格)\n",charcount);
//
//	return 0;
//}


//统计单词
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

	printf("请输入待测试的文本：（键入|以结束文本写入）\n");
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
		printf("字符数：%ld，单词数：%ld，行数：%ld，不完整行数：%ld。\n\n",zifushu,dancishu,hangshu,buwanzhenghangshu);

	return 0;
}