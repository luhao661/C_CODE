#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0

#endif


//�����ϰ
//1.
#if 0
double min(double x, double y);
int main(void)
{
	double a, b;
	printf("�˳���Ƚ���������ֵ�Ľ�Сֵ\n");
	printf("��������������ֵ��_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf",&a,&b);
	printf("��Сֵ�ǣ�%.3lf",min(a,b));

	return 0;
}
double min(double x, double y)
{
	if (x >= y)
		x = y;

		return x;
}
#endif


//2.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("�˳����ӡָ���ַ�������������\n");
	printf("������Ҫ��ӡ���ַ���_________\b\b\b\b\b\b\b\b");
	scanf("%c",&ch);
	printf("������Ҫ��ӡ��������������_________\b\b\b\b\b\b\b\b");
	scanf("%d%d",&i,&j);
	chline(ch,i,j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//3.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("�˳����ӡָ���ַ�������������\n");
	printf("������Ҫ��ӡ���ַ���_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("������Ҫ��ӡ��������������_________\b\b\b\b\b\b\b\b");
	scanf("%d%d", &i, &j);//i��   j��
	chline(ch, i, j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//4.
#if 0
double tiaohepinjunshu(double x, double y);
int main(void)
{
	double a, b;
	printf("�˳����ӡ�������ĵ���ƽ����\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf",&a,&b);
	printf(	"����ƽ������%.3lf\n",tiaohepinjunshu(a, b));

	return 0;
}
double tiaohepinjunshu(double x, double y)
{
	double jieguo1,jieguo2;
	double daoshu_x = 1 / x, daoshu_y = 1 / y;

	jieguo1 = (daoshu_x + daoshu_y) / 2;
	jieguo2 = 1 / jieguo1;

	return jieguo2;
}
#endif


//5.
#if 0
void larger_of(double *x, double *y);
int main(void)
{
	double a, b;
	printf("�˳�����������Ľϴ��߸�ֵ��������\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	larger_of(&a,&b);
	printf("���ڣ�������Ϊ%.3lf��%.3f%\n",a,b);

	return 0;
}
void larger_of(double *x, double *y)
{
	if (*x >= *y)
		*y = *x;
	else
		*x = *y;

	return;
}
#endif


//6.
#if 0
void paidaxiao(double *x, double *y, double *z);//�Ŵ�С
int main(void)
{
	double a, b,c;
	printf("�˳����������������С��������\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf%lf", &a, &b,&c);
	paidaxiao(&a,&b,&c);
	printf("���ڣ�����������%.3lf��%.3f��%.3f\n", a, b,c);

	return 0;
}
void paidaxiao(double* x, double* y, double* z)
{
	double min, middle, max;
	if (*x <= *y && *x <= *z)
		min = *x;
	else if (*y <= *x && *y <= *z)
		min = *y;
	else if (*z <= *x && *z <= *y)
		min = *z;

	if (*x >= *y && *x >= *z)
		max = *x;
	else if (*y >= *x && *y >= *z)
		max = *y;
	else if (*z >= *x && *z >= *y)
		max = *z;

	if (min < *x && *x < max)// (min <= *x && *x <= max)���У���������� 1 2 3��������� 1 1 3
		middle = *x;
	else if (min < *y && *y < max)
		middle = *y;
	else if (min < *z && *z < max)
		middle = *z;


	*x = min;
	*y = middle;//覴ã�������������ֵ����ȵ�ʱ����������
	*z = max;
}
#endif


//7.
#if 1
int panduanzimu(int ch);//�ж���ĸ
int main(void)
{
	int ch;
	printf("�˳����ܱ��������ÿ���ַ��Ƿ�����ĸ\n");
	printf("�������ַ���\n");
	while ((ch = getchar())!=EOF)//ch=getchar()���С����Ҫ��
	{
		if (panduanzimu(ch) == -1)//�������ĸʱ
			printf("��");

		else if (panduanzimu(ch) == -2)//����س�ʱ
		{
			printf("��(������\\n)");
			printf("\n����������ַ���\n");
		}

		else
			printf("%-3d",panduanzimu(ch));

	}

	return 0;
}
int panduanzimu(int ch)
{
	int weizhi;

	if (ch >= 65 && ch <= 90)
	{
		weizhi = ch - 64;
	}
	else if (ch >= 'a' && ch <= 'z')
		weizhi = ch - 96;
	else if (ch =='\n')
		weizhi = -2;
	else
		weizhi = -1;

	return weizhi;
}
#endif