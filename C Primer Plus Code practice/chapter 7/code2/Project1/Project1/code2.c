#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������
//#define yitong 350//һͰ������ˢ�����
//int main(void)
//{
//	int fenshuamianji;
//	int cans;
//
//	printf("������Ҫ��ˢ�������");
//	while (scanf("%d", &fenshuamianji) == 1)
//	{
//		cans = fenshuamianji / yitong;
//		cans += fenshuamianji % yitong == 0 ? 0 : 1;
//		printf("You need %d %s of paint.\n",cans,cans==1?"can":"cans");
//		printf("������Ҫ��ˢ�������(��q���˳�����)");
//	}
//
//	return 0;
//}


//ʹ��continue ��������ѭ��
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
//	printf("�������һ������������q���˳���");
//	while (scanf("%f", &fenshu) == 1)
//	{
//		if (fenshu<MIN || fenshu>MAX)
//		{
//			printf("%.1f�Ǹ���Ч��ֵ,���������룡", fenshu);
//			continue;
//		}
//		printf("�ѽ�����ֵ%.1f",fenshu);
//		min = fenshu < min ? fenshu : min;
//		max = fenshu > max ? fenshu : max;
//		zongfen += fenshu;
//		n++;
//		printf("��������һ������������q�Խ������룩");
//	}
//	if (n > 0)
//	{
//		printf("%d��������ƽ������%.1f\n", n, zongfen / n);
//		printf("������ͷ��ǣ�%.1f��߷��ǣ�%.1f", min, max);
//	}
//	else
//		printf("û����Чֵ���룡");
//
//	return 0;
//}


//continue �Ӻδ�����ѭ����
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

//ʹ��break�˳�ѭ��
//int main(void)
//{
//	float length, width;
//	printf("�����볤���εĳ���");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("�������");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("�����%.1f\n",length*width);
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
	printf("������һ����ĸ���һ�����Ը���ĸ��ͷ�Ķ������ƣ�\n");
	printf("(����#���˳�)                                                         ");
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
			printf("��ֻ�ܽ���Сд��ĸ~\n");
		while ((getchar()) != '\n')
			continue;
		printf("��������룺\n");
	}
	printf("�ټ���\n");

	return 0;
}
