#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ϰ��10.
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


//�����ϰ
//1.
//#define STOP '#'
//int main(void)
//{
//	printf("�������ַ�������#ֹͣ��");
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
//	printf("��������ַ�����%d���ո�%d�����з���%d�������ַ���",space,huanhang,others);
//	
//	return 0;
//}


//2.
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu=0;
//	printf("�������ַ���������#�ַ�ʱֹͣ��\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '\n')
//			continue;
//		//jishu++;                ������ڴ˴�����һ�лᵽ���߸��ͻ��У��˺���в���ÿ8������
//		if (jishu % 8 == 0)
//			printf("\n");
//		jishu++;
//		printf("%c-%-5d",ch,ch);
//
//	}
//	printf("\nDone ��\n");
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
//	printf("���������֣�����0�Խ�������\n");
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
//	printf("����ż��%d��������%d����\n",oushu,jishu);
//	printf("ż����ƽ��ֵ��%.2f\n������ƽ��ֵ��%.2f\n",(float)sum1/oushu,(float)sum2/jishu);
//	return 0;
//}


//4.
//int main(void)
//{
//	char ch;
//	int num=0;
//	printf("�������ַ���������#��ֹͣ��");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '��')
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
//	printf("������%d���滻",num);
//	
//	return 0;
//}

//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("�������ַ���������#��ֹͣ��");
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
//	printf("������%d���滻\n\n",cishu);
//
//	return 0;
//}


//5.
int main(void)
{
	int index = -1;
	char ch[256];
	int cishu = 0;

	printf("�������ַ���������#��ֹͣ��");
	do
	{
		index++;
		scanf("%c", &ch[index]);
		switch (ch[index])
		{
		case '.':

			ch[index] = '!';
			cishu++;
			break;
		case '!':

			ch[index] = '!';
			index++;
			ch[index] = '!';
			cishu++;
			break;
		}
	} while (ch[index] != '#');

	int a = index;
	for (index = 0; index <= a - 1; index++)
		printf("%c", ch[index]);
	printf("\n");
	printf("������%d���滻\n\n", cishu);

	return 0;
}