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
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCII value for %c is %d.\n",ch,ch);

	return 0;
}



