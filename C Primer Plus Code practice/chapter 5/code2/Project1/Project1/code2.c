#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//++��ǰ׺�ͺ�׺������
//int main(void)
//{
//	int a, b;
//	a = b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a   a_post   b    pre_b\n");
//	printf("%1d%5d%8d%5d\n",a,a_post,b,pre_b);
//
//	return 0;
//}


//�ݼ������
//int main(void)
//{
//	int count = 101;
//	while (--count > 0)
//	{
//		printf("������%d��\n",count);
//		printf("����1��,\n");
//		printf("��ʣ%d��\n\n",count-1);
//			
//	}
//
//		return 0;
//}


//��������
//int main(void)
//{
//	int n,y;
//	n = 3;
//	y = n+++n++;
//	printf("y=%d, n=%d",y,n);
//
//	return 0;
//}


//����ǰ20�������ĺ�
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//	{
//		sum = sum + count;
//		printf("sum=%d\n",sum);
//
//	}
//
//	return 0;
//}


//�����͸������
//int main(void)
//{
//	int index, sam;
//	index = 0;
//	//while (index++ < 10)
//	//	sam = 10 * index + 2;
//	//printf("sam=%d\n",sam);
//	while (index++ < 10)
//	{
//		sam = 10 * index + 2;
//		printf("sam=%d\n",sam);
//	}
//	return 0;
//}


//�Զ�����ת��
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch = %c, i = % d, fl = %2.2f\n ",ch,i,fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n",ch,i,fl);
//	ch = 1107;
//	printf("Now ch = %c\n",ch);
//	ch = 80.89;
//	printf("Now ch = %c\n",ch);
//
//	return 0;
//}


//ǿ������ת��
//int main(void)
//{
//	int mice1, mice2;
//	mice1 = 1.6 + 1.7;
//	printf("%d\n",mice1);
//	mice2 = (int)1.6  + (int)1.7;
//	printf("%d\n", mice2);
//
//	return 0;
//}


//����һ����һ�������ĺ���
//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//}
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//	}
//	printf("\n");
//}