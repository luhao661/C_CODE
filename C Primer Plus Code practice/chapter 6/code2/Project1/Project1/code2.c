#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//forѭ��
//int main (void)
//{
//	const int NUMBER = 10;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("123\n");
//
//	return 0;
//}


//ʹ��forѭ������һ��������
//int main(void)
//{
//	int num;
//
//	printf("   n    n�����η�\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %6d\n",num,num*num*num);
//
//	return 0;
//}


//���ַ��������ּ���
//int main(void)
//{
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n",ch,ch);
//
//	return 0;
//}


//��һ�����ʽҲ����ʹ��printf()
//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers ! \n"); num != 6; )
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}


//�����ʷ�
//int main(void)
//{
//	const int FIRST = 46;
//	const int NEXT = 20;
//	int kg, cost ;
//	for (kg = 1, cost = FIRST; kg <= 16; kg++, cost += NEXT)
//		printf("%5d $%4.2f \n",kg, cost/100.0);
//
//
//	return 0;
//}


//���ű��ʽ
//int main(void)
//{
//	int house1, house2;
//	house1 = 249, 500;
//	house2 = (249, 500);
//	printf("%d   %d",house1,house2);
//
//
//	return 0;
//}


//�����еĺ�
//int main(void)
//{
//	int count;
//	double time, yiersiliuba;
//	int limit;
//	printf("Enter the number of terms you want :");
//	scanf("%d",&limit);
//	for (count = 1, time = 0 , yiersiliuba = 1 ; count <= limit ; count++ , yiersiliuba *= 2)
//	{
//		time += 1.0 / yiersiliuba;
//		printf("time = %f when terms = %d.\n",time,count);
//	}
//	 
//	return 0;
//}


//��������ѭ��do while
//int main(void)
//{
//	const int secret_code = 13;
//	int a;
//	do
//	{
//		printf("������²�����֣�");
//		scanf("%d",&a);
//	} while (a!= secret_code); 
//	printf("��ϲ�㣬�¶��ˣ�\n");
//
//	return 0;
//}


//ʹ��Ƕ��ѭ��
//#define ROWS 6
//#define COLUMN 10
//int main(void)
//{
//	int row;
//	char ch;
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (ch = 'a'; ch < 'a' + COLUMN; ch++)
//			printf("%c",ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//�����ⲿѭ����Ƕ��ѭ��
//int main(void)
//{
//	const int ROWS = 6;
//	const int COLUMN = 6;
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'a'+row; ch < 'a' + COLUMN; ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//ʹ��ѭ����������
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;

	printf("������%d���߶��������\n",SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d",&score[index]);
	printf("������������ǣ�\n");
	for (index = 0; index < SIZE; index++)
		printf("%3d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	float average = (float)sum / SIZE;
	printf("�ܷ���%d��ƽ������%.2f\n",sum,average);
	printf("��㣨ƽ���ֺͱ�׼��֮���%.0f\n",average-PAR);

	return 0;
}