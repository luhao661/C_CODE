#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("������һ��������");
//	status = scanf("%ld",&num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("����������һ������������q���˳����򣩣�");
//		status = scanf("%ld", &num);
//	}
//	printf("��Щ�����ĺ�Ϊ%ld",sum);
//	return 0;
//}


//ע��while()�ֺŵ�λ��
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d",n);
//
//	return 0;
//}


//�������Ƚ�
//#include <math.h>
//int main(void)
//{
//	const double PI = 3.1415927;
//	double response;
//
//	printf("What is the value of pi ?\n");
//	scanf("%lf",&response);
//
//	while (fabs(response - PI) > 0.0001)
//	{
//		printf("Try it again !\n");
//		scanf("%lf",&response);
//	}
//	printf("Close enough !\n");
//
//	return 0;
//}


//��ЩֵΪ��
//int main(void)
//{
//	int n = 3;
//
//	while (n)
//	{
//		printf("%2d is ture\n", n--);
//	}
//	printf("%2d is false\n",n);
//
//	n = -3;
//	while (n)
//	{
//		printf("%2d is true\n",n++);
//	}
//	printf("%2d is false\n",n);
//
//	return 0;
//}


//����=���ᵼ������ѭ��
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("������һ��������");
//	status = scanf("%ld",&num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("����������һ������������q���˳����򣩣�");
//		status = scanf("%ld", &num);
//	}
//	printf("��Щ�����ĺ�Ϊ%ld",sum);
//	return 0;
//}


//ʹ��_Bool
int main(void)
{
	long num;
	long sum=0L;
	_Bool input;

	printf("������һ��������");
	input = scanf("%ld",&num);
	while (input)
	{
		sum = sum + num;
		printf("����������һ������������q���˳����򣩣�");
		input = scanf("%ld", &num);
	}
	printf("��Щ�����ĺ�Ϊ%ld",sum);
	return 0;
}