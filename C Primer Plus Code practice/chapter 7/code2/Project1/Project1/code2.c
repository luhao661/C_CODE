#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//条件运算符
//#define yitong 350//一桶油漆能刷的面积
//int main(void)
//{
//	int fenshuamianji;
//	int cans;
//
//	printf("请输入要粉刷的面积：");
//	while (scanf("%d", &fenshuamianji) == 1)
//	{
//		cans = fenshuamianji / yitong;
//		cans += fenshuamianji % yitong == 0 ? 0 : 1;
//		printf("You need %d %s of paint.\n",cans,cans==1?"can":"cans");
//		printf("请输入要粉刷的面积：(按q以退出程序)");
//	}
//
//	return 0;
//}


//使用continue 跳过部分循环
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//	float fenshu;
//	float zongfen=0.0f;
//	float min=MAX;
//	float max= MIN;
//	int n=0;
//
//	printf("请输入第一个分数：（按q以退出）");
//	while (scanf("%f", &fenshu) == 1)
//	{
//		if (fenshu<MIN || fenshu>MAX)
//		{
//			printf("%.1f是个无效数值,请重新输入！", fenshu);
//			continue;
//		}
//		printf("已接受数值%.1f",fenshu);
//		min = fenshu < min ? fenshu : min;
//		max = fenshu > max ? fenshu : max;
//		zongfen += fenshu;
//		n++;
//		printf("请输入下一个分数：（按q以结束输入）");
//	}
//	if (n > 0)
//	{
//		printf("%d个分数的平均分是%.1f\n", n, zongfen / n);
//		printf("其中最低分是：%.1f最高分是：%.1f", min, max);
//	}
//	else
//		printf("没有有效值输入！");
//
//	return 0;
//}


//continue 从何处继续循环？
//1.
//int main(void)
//{
//	char ch;
//	int count = 0;
//	while (count < 5)
//	{
//		ch = getchar();
//		if (ch == '\n')
//			continue;
//		putchar(ch);
//		count++;
//	}
//	printf("\nDone!\n\n");
//
//	return 0;
//}
//2.
//int main(void)
//{
//	char ch;
//	int count;
//	for (count=0;count < 5;count++)
//	{
//		ch = getchar();
//		if (ch == '\n')
//			continue;
//		putchar(ch);
//	}
//	printf("\nDone!\n\n");
//
//	return 0;
//}
//

//使用break退出循环
//int main(void)
//{
//	float length, width;
//	printf("请输入长方形的长：");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("请输入宽：");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("面积是%.1f\n",length*width);
//	}
//	printf("Done !");
//
//	return 0;
//}


//switch
#include<ctype.h>
int main(void)
{
	char ch;
	printf("请输入一个字母，我会给出以该字母开头的动物名称：\n");
	printf("(键入#以退出)                                                         ");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
			{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			default:
				printf("That's a stumper !\n");
			}
		else
			printf("我只能接受小写字母~\n");
		while ((getchar()) != '\n')
			continue;
		printf("请继续输入：\n");
	}
	printf("再见！\n");

	return 0;
}
