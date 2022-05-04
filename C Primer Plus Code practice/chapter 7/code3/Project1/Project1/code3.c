#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//复习题10.
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'b')
//	{
//		if (ch =='q')
//		{
//			printf("Step 1\n");
//			printf("Step 2\n");
//		}
//		if (ch == 'c')
//			printf("Step 1\n");
//		if (ch=='h')
//		{
//			printf("Step 1\n");
//			printf("Step 3\n");
//			printf("Step 2\n");
//		}
//		
//		scanf("%c", &ch);
//	}
//	printf("Done\n");
//
//	return 0;
//}

//复习题10.改正
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		printf("Step 1\n");

		if (ch == 'b')
			break;

		if (ch != 'c')
		{
			if (ch == 'h')
				;
			else if (ch == 'q')
				printf("Step 2\n");
			printf("Step 3\n");
		}
	}
	printf("Done\n");

	return 0;
}


//编程练习
//1.
//#define STOP '#'
//int main(void)
//{
//	printf("请输入字符：（按#停止）");
//	char ch;
//	int space=0;
//	int huanhang=0;
//	int others=0;
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == ' ')
//			space++;
//		if (ch == '\n')
//			huanhang++;
//		else if (ch != ' ')
//			others++;
//	}
//	printf("您输入的字符中有%d个空格%d个换行符和%d个其他字符。",space,huanhang,others);
//	
//	return 0;
//}


//2.
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu=0;
//	printf("请输入字符：（输入#字符时停止）\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '\n')
//			continue;
//		//jishu++;                如果放在此处，第一行会到第七个就换行，此后的行才是每8个换行
//		if (jishu % 8 == 0)
//			printf("\n");
//		jishu++;
//		printf("%c-%-5d",ch,ch);
//
//	}
//	printf("\nDone ！\n");
//	return 0;
//}


//3.
//int main(void)
//{
//	int num;
//	int oushu=0;
//	int sum1=0;
//	int jishu = 0;
//	int sum2=0;
//	printf("请输入数字（输入0以结束）：\n");
//	
//
//	while (scanf("%d", &num)&&num != 0)
//	{
//
//		if (num != 0 && num % 2 == 0)
//		{
//			oushu++;
//			sum1 += num;
//		}
//		if (num % 2 != 0)
//		{
//			jishu++;
//			sum2 += num;
//		}
//	}
//	printf("输入偶数%d个，奇数%d个，\n",oushu,jishu);
//	printf("偶数的平均值：%.2f\n奇数的平均值：%.2f\n",(float)sum1/oushu,(float)sum2/jishu);
//	return 0;
//}


//4.
//int main(void)
//{
//	char ch;
//	int num=0;
//	printf("请输入字符：（输入#以停止）");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '。')
//		{
//			ch = '!';
//			num++;
//		}
//		else
//
//		if (ch == '!')
//		{
//				ch = '!!';
//				num++;
//		}
//			
//	}
//	printf("%c",ch);
//	printf("进行了%d次替换",num);
//	
//	return 0;
//}

//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("请输入字符：（输入#以停止）");
//	do
//	{
//		index++;
//		scanf("%c",&ch[index]);
//		if (ch[index] == '.')
//		{
//			ch[index] = '!';
//			cishu++;
//		}
//		else if (ch[index] == '!')
//		{
//			ch[index] = '!';
//			index++;
//			ch[index] = '!';
//			cishu++;
//		}
//	} while (ch[index]!='#');
//
//	int a = index;
//	for(index=0;index<=a-1;index++)
//	printf("%c",ch[index]);
//	printf("\n");
//	printf("进行了%d次替换\n\n",cishu);
//
//	return 0;
//}


//5.
//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("请输入字符：（输入#以停止）");
//	do
//	{
//		index++;
//		scanf("%c", &ch[index]);
//		switch (ch[index])
//		{
//		case '.':
//
//			ch[index] = '!';
//			cishu++;
//			break;
//		case '!':
//
//			ch[index] = '!';
//			index++;
//			ch[index] = '!';
//			cishu++;
//			break;
//		}
//	} while (ch[index] != '#');
//
//	int a = index;
//	for (index = 0; index <= a - 1; index++)
//		printf("%c", ch[index]);
//	printf("\n");
//	printf("进行了%d次替换\n\n", cishu);
//
//	return 0;
//}


//6.
//int main(void)
//{
//	printf("请输入字符：（键入#以停止）");
//	char ch;
//	int biaoji = 0;
//	int cishu = 0;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == 'e' && !biaoji)
//		biaoji = 1;//输入e，标记打开，输入i，标记关闭。         输入e后输入非i，标记关闭。
//		
//		if (biaoji && ch == 'i')
//			{
//				cishu++;
//				biaoji = 0;
//			}
//		else if(ch!='e')
//				biaoji = 0;
//		
//	}
//	printf("ei出现%d次",cishu);
//
//	return 0;
//}


//7.
//#define BREAK1 300
//#define BREAK2 450
//#define RATE1 0.15
//#define RATE2 0.2
//#define RATE3 0.25
//
//#define BASE1 (RATE1*BREAK1)
//#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
//int main(void)
//{
//	float hours;
//	float shui;
//	float zonge;
//	float jinshouru;
//	printf("请输入您一周工作的小时数：\n");
//	scanf("%f",&hours);
//	if (hours >= 40)//是否有加班时间
//		hours = (hours - 40) * 1.5 + 40;
//
//	zonge = hours * 10.0;
//
//	if (zonge <= BREAK1)
//		shui = zonge * RATE1;
//	else if (zonge <= BREAK2)
//		shui = BASE1 + (zonge - BREAK1) * RATE2;
//	else
//		shui = BASE2 + (zonge - BREAK2) * RATE3;
//		
//	jinshouru = zonge - shui;
//
//	printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n",zonge,shui,jinshouru);
//
//	return 0;
//}


//8.
//#define BREAK1 300
//#define BREAK2 450
//#define RATE1 0.15
//#define RATE2 0.2
//#define RATE3 0.25
//
//#define BASE1 (RATE1*BREAK1)
//#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
//int main(void)
//{
//	float hours;
//	float zonge;
//	float shui;
//	float jinshouru;
//	int num;
//	float meixiaoshi;
//
//	printf("********************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	printf("1) $8.75/hr				2)$9.33/hr\n");
//	printf("3) $10.00/hr				4)$11.20/hr\n");
//	printf("5) quit\n");
//	printf("********************************************************************\n");
//
//	while (scanf("%d", &num)==1)
//	{
//		if (num < 1 || num > 5)
//		{
//			printf("输入非法！请重新输入！");
//			continue;
//		}
//		switch (num)
//		{
//		case 1:
//			meixiaoshi = 8.75;
//			break;
//		case 2:
//			meixiaoshi = 9.33;
//			break;
//		case 3:
//			meixiaoshi = 10.0;
//			break;
//		case 4:
//			meixiaoshi = 11.20;
//			break;
//		case 5:
//			goto tuichu;
//		}
//
//		printf("\n请输入您一周工作的小时数：\n");
//		scanf("%f", &hours);
//
//		if (hours >= 40)//是否有加班时间
//			hours = (hours - 40) * 1.5 + 40;
//
//		zonge = hours * meixiaoshi;
//
//		if (zonge <= BREAK1)
//			shui = zonge * RATE1;
//		else if (zonge <= BREAK2)
//			shui = BASE1 + (zonge - BREAK1) * RATE2;
//		else
//			shui = BASE2 + (zonge - BREAK2) * RATE3;
//
//		jinshouru = zonge - shui;
//
//		printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n", zonge, shui, jinshouru);
//	
//	tuichu:break;
//	}
//
//	return 0;
//}