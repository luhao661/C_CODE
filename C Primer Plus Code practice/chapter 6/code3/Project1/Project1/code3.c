#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������ݣ������ؼ�������ʹ�ú�������ֵ��ѭ����
//double power(double n, int p);
//int main(void)
//{
//	double x;
//	int exp;
//	
//	printf("������һ�����ֺ͸����ֵ�������������\n");
//	printf("������q���˳�����                 ");
//	while (scanf("%lf%d", &x,& exp) == 2)
//	{
//		printf("%f��%d�η���%f",x,exp, power(x, exp));
//		printf("������һ�����֣�");
//	}
//	printf("Done!");
//
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}


//��ϰ��6.
#define ROWS 4
#define COLUMNS 8
int main(void)
{
	int i,j;
	for (i = 1; i <= ROWS; i++)
	{
		for (j = 1; j <= COLUMNS; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}