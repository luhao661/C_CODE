#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������ݣ������ؼ�����
double power(double n, int p);
int main(void)
{
	double x;
	int exp;
	double xpow;

	printf("������һ�����ֺ͸����ֵ�������������\n");
	printf("������q���˳�����                 ");
	while (scanf("%lf%d", &x,& exp) == 2)
	{
		xpow = power(x, exp);
		printf("%f��%d�η���%f",x,exp,xpow);
		printf("������һ�����֣�");
	}
	printf("Done!");

	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;
}