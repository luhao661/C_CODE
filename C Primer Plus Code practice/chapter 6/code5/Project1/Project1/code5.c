#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//10.
//int jisuan(int x, int y);
//int main(void)
//{
//	int a, b;
//	
//	printf("Enter lower and upper integer limits:");
//	scanf("%d%d",&a,&b);
//	while (a < b)
//	{
//		printf("The sums of the squares from %d to %d is %d\n", a * a, b * b, jisuan(a , b ));
//		printf("Enter next set of limits:");
//		scanf("%d%d", &a, &b);
//	}
//	printf("Done\n");
//	return 0;
//}
//int jisuan(int x, int y)
//{
//	int i;
//	int sum=x*x;
//	for (i = x+1 ; i <= y; i++)
//		sum += i*i;
//	return sum;
//}


//11.
//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("请输入八个整数：");
//	scanf("%s",shuzu);                            //不能处理成字符串，否则123算一个数，1 2 3 （中间用空格隔开）才算3个数
//	last=strlen(shuzu)-1;
//	for (i = last; i >= 0; i--)
//		printf("%d",shuzu[i]);
//	return 0;
//}

//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("请输入八个整数：");
//	for (i = 0; i <= 7; i++)
//		scanf("%d", &shuzu[i]);
////	last = strlen(shuzu) - 1;
//	for (i = 7; i >= 0; i--)
//		printf("%d", shuzu[i]);
//
//	printf("\n\nDone !");
//
//	return 0;
//}


//12.1
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("请输入次数：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum += i / j;
//		}
//		printf("1.0+1.0/2.0+1.0/3.0+....(加到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
//	}
//
//	return 0;
//}
//12.2
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("请输入次数：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum = sum+ (     zhengfuhao(k)    )* i / j;
//		}
//		printf("1.0-1.0/2.0+1.0/3.0-....(到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
//	}
//
//	return 0;
//}
//int zhengfuhao(int a)
//{
//	int l,m;
//	for (l =-1,m=1; m <= a; m++)
//		l *= (-1);
//
//	return l;
//}
//12.3两个数列的总和
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum=2.0;
//
//	printf("请输入项数（>=3）：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 2.0, j = 1.0, k = 3;			k <= number;			j += 1.0, k++)
//		{
//			sum += i / (2*j+1.0);
//		}
//		printf("1.0+1.0+2.0/3.0+2.0/5.0+2.0/7.0+....(加到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
//	}
//
//	return 0;
//}


//13.
//int main(void)
//{
//	int shuzu[8];
//	int i,index;
//	for (i = 1, index = 0;		 index <= 7;			index++)
//	{
//		i = i * 2;
//		shuzu[index] = i;
//	}
//
//	/*int a;
//	do
//	{
//		for (index = 0; index <= 7; index++)
//		printf("%5d",shuzu[index]);
//		printf("\n按下q以结束程序：\n");
//
//	} while (scanf("%d",&a)  ==1);*/
//	//法二
//	index = 0;
//	do
//	{
//		printf("%5d",shuzu[index++]);
//	} while (index<8);
//
//	printf("\nDone!");
//
//	return 0;
//}


//14.
//int main(void)
//{
//	double shuzu1[8], shuzu2[8];
//	int index;
//
//	printf("请输入8个值：");
//	for(index=0;index<=7;index++)
//		scanf("%lf",&shuzu1[index]);//若写的是%f，则输出会有错误。要注意数据类型匹配
//	
//	shuzu2[0] = shuzu1[0];
//	for (index = 1; index <= 7; index++)
//		shuzu2[index] = shuzu1[index] + shuzu2[index - 1];               //法二：P80 嵌套循环
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf",shuzu1[index]);
//	printf("\n");
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf", shuzu2[index]);
//	printf("\n");
//
//	return 0;
//}


//15.
//int main(void)
//{
//	char ch[256];
//	int index;
//
//	printf("请输入内容：");
//	do
//	{
//		for (index = 0; index <= 255; index++)
//		scanf("%c", &ch[index]);								//这样会一直在for循环中，直到不满足测试条件
//	} while (ch[index] != '\n');
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//int main(void)
//{
//	char ch[255];
//	int index;
//
//	printf("请输入内容：");
//
//	for (index = 0; index <= 255; index++)
//	{
//		
//		
//			scanf("%c", &ch[index]);//如何用do while 检测'\n'
//		
//	}
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//
//15.改正
//#include <string.h>
//int main(void)
//{
//	char ch[256];
//	int index=-1;
//
//	printf("请输入内容：");
//	/*do
//	{
//	  scanf("%c", &ch[index]);								
//	} while (++index, ch[index-1] != '\n');
//	  */
//	do
//	{
//		index++;
//		scanf("%c", &ch[index]);
//	} while (ch[index] != '\n');
//
//	/*do
//	{
//		scanf("%c", &ch[index]);
//		index++;
//	} while (ch[index] != '\n' );*/  //这样检测不到'\n'，因为index又向后移动了一位
//
//	printf("内容倒叙后是：");
//	for (index--; index >= 0; index--)					//若写成index=strlen(ch)-1,则输出的第一项是数组中偏移地址为255
//		printf("%c", ch[index]);								//的单元存储的内容。
//
//	return 0;
//}


//16.
//int main(void)
//{
//	float Da=100.0, De=100.0;
//	int n,i;
//	/*printf("输入年数：");
//	scanf("%d",&n);
//
//	printf("Da:\n");
//	for (i = 1; i <= n; i++)
//	{
//		Da += 10;
//		printf("第%d年是%8.2f\n", i,Da);
//	}
//
//	printf("De:\n");
//	for (i = 1; i <= n; i++)
//	{
//		De += De*0.05;
//		printf("第%d年是%8.2f\n", i, De);
//	}*/
//	n = 0;
//	do
//	{
//		Da += 10;
//		De += De * 0.05;
//		n++;
//	}while(Da > De);
//	printf("过%d年De比Da投资额更多，Da：%8.2f De：%8.2f",n,Da,De);
//
//	return 0;
//}


//17.
//int main(void)
//{
//	float money=1000000.0;
//	int i,n;
//	printf("输入年数：");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		money += money * 0.08;
//		money -= 100000;
//		printf("%d年后还剩下%.2f\n",i,money);
//	}
//
//	return 0;
//}
//法二：do while循环


//18.
//int main(void)
//{
//	int friends;
//	int n,i;
//
//	printf("请输入周数：");
//	scanf("%d",&n);
//
//	for (i = 1, friends = 5; friends <= 150&&i<=n; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("第%d周有%d个朋友\n",i,friends);
//	}
//
//	return 0;
//}
// 
//int main(void)
//{
//	int friends;
//	int i;
//
//	for (i = 1, friends = 5; friends <= 150; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("第%d周有%d个朋友\n",i,friends);
//	}
//
//	return 0;
//}


