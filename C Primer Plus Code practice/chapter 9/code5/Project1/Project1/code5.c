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
	if (x >= y)															//if(x<y)   return x;                                  //return x<y? x:y;
		x = y;														    	//else    return y;

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
	jieguo2 = 1 / jieguo1;                                                 //�����������Ϊ  return 2/(1/x+1/y);

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
	if (*x >= *y)                                                         //���������ű��ʽ
		*y = *x;                                                            //           return *x>*y? (*y=*x) : (*x=*y);
	else
		*x = *y;

	return;
}
#endif


//6.
#if 0
void paidaxiao(double* x, double* y, double* z);//�Ŵ�С
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
/*void paidaxiao(double* x, double* y, double* z)
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
}*/
//����
void paidaxiao(double* x, double* y, double* z)//�����Ƚϼ���
{
	double temp;
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*x = *z;
		*y = temp;
	}
}
#endif


//7.
#if 0
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
//7.��
#if 0
int panduanzimu(int ch);//�ж���ĸ
int main(void)
{
	int ch;
	printf("�˳����ܱ��������ÿ���ַ��Ƿ�����ĸ\n");
	printf("�������ַ���\n");
	while ((ch = getchar()) != EOF)//ch=getchar()���С����Ҫ��
	{
		if (ch =='\n')
			continue;//������з�������

		if (panduanzimu(ch) == -1)//�������ĸʱ
			printf("��");
		else
			printf("%-3d", panduanzimu(ch));

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
	else
		weizhi = -1;

	return weizhi;
}
#endif


//8.
#if 0
double power(double n, int p);
int main(void)
{
	double x;
	int exp;
	
	printf("������һ�����ֺ͸����ֵ�������������\n");
	printf("������q���˳�����                 ");
	while (scanf("%lf%d", &x,& exp) == 2)
	{
		printf("%.2f��%d�η���%.2f\n",x,exp, power(x, exp));

		if (x==0&&exp==0)
			printf("0��0����δ���壬��˴���Ϊ1\n");

		printf("������һ�����֣�");
	}
	printf("Done!");

	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;
	int p1;

	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
	}
	else if (p < 0)
	{
		p1 = -p;
		for (i = 1; i <= p1; i++)
			pow *= n;
		pow = 1 / pow;
	}
	else if (p== 0 && n == 0)
		pow = 1;
	else if (p == 0 && n != 0)
		pow = 1;
	
	return pow;
}
//����
/*double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		printf("0��0����δ���壬�ʷ���ֵ��1\n");
		return 1;
	}
	if (n == 0)
		return 0;
	if (p == 0)
		return 1;
	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
		return pow;
	}
	if(p<0)
	{
		for (i = 1; i <= -p; i++)
			pow *= n;
		return 1/pow;
	}
}*/
#endif


//9.
#if 0
double power(double n, int p);
int main(void)
{
	double x;
	int exp;

	printf("������һ�����ֺ͸����ֵ�������������\n");
	printf("������q���˳�����                 ");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		printf("%.2f��%d�η���%.2f\n", x, exp, power(x, exp));

		if (x == 0 && exp == 0)
			printf("0��0����δ���壬��˴���Ϊ1\n");

		printf("������һ�����֣�");
	}
	printf("Done!");

	return 0;
}
/*double power(double n, int p)
{
	double pow ;
	int i;
	int p1;

	if (p > 0)
	{
		pow = n * power(n, p - 1);//power(2,3)�������pow=2*power(2,2)    power(2,2)�����pow=2*power(2,1)   
		                                            // power(2,1)�����pow=2*power(2,0)    power(2,0)�����pow=1,����power(2,0)�ķ���ֵ��1��
			                                       //�ɴ˿�֪2��3����Ϊ8��
	}


	else if (p == 0)    //�����if (p < 0)��Ҳ���������
	{
		if (n != 0)
		{
			pow = 1;
			return pow;//Ϊʲô��������Ҳ���ԣ�
		}
		else
			return 1;
	}
	

	if (p < 0)
	{
		p1 = -p;
		pow = n * power(n, p1 - 1);   //�ݹ�ʱ��p1-1��ֵ�����β�p����ִ��if(p>0)�ĺ����顣
		pow = 1 / pow;		
		return pow;
	}	
}*/
//����
double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		return 1;
	}
	if (n == 0)
		return 0;
	if (p == 0)
		return 1;

	if (p > 0)
		return n * power(n, p - 1);
	else
		return power(n, p + 1) / n;
}
#endif


//10.
#if 0
void to_base_n(int daichuli, int jinzhi);//������    ����

int main(void)
{
	unsigned long num1,num2;

	printf("������һ�������ͰѴ���ת���ɵ�(2~10)����������q���˳�����\n");

	while (scanf("%d%d", &num1,&num2) == 2)
	{
		printf("ת��Ϊ%d�����ǣ�",num2);
		to_base_n(num1,num2);
		
		printf("\n��������һ�������ͰѴ���ת���ɵ�(2~10)����������q���˳�����\n");
	}

	return 0;
}
void to_base_n(int daichuli, int jinzhi)
{
	int yushupanduan;//�����ж�

	yushupanduan = daichuli % jinzhi;

	if (daichuli >=jinzhi)
		to_base_n(daichuli / jinzhi, jinzhi);

	//putchar(yushupanduan==0 ? '0' : '1');
	printf("%d", yushupanduan);//����

	return;
}
#endif


//11.
#if 0
unsigned long Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("�˳�����ѭ������ݹ����쳲�������\n");
	printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("��%d��쳲���������%ld\n",num,Fibonacci(num));
		printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	}
	printf("�ټ���\n");

	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	int shuzu[256];
	shuzu[0] = 1; 
	shuzu[1] = 1;

	int i;

	for (i = 2; i <= n-1; i++)//i=2��shuzu[2]�൱��쳲������ĵ�3���ֵ
	{
		shuzu[i] = shuzu[i - 1] + shuzu[i - 2];
	}

	unsigned long jieguo = shuzu[i-1];//ע����д��shuzu[i]����ʾ����ȷ����Ϊforѭ������iֵ��i��+1
																//�д���õ����ݴ��������ĳ�������ֵӦ����i-1��
	return jieguo;
}
#endif
//9.����
#if 1
void Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("�˳�����ѭ������ݹ����쳲�������\n");
	printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("��%d��쳲���������\n", num);
		Fibonacci(num);
		printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	}
	printf("�ټ���\n");

	return 0;
}
void Fibonacci(unsigned n)
{
	unsigned long f1, f2, temp;

	f1 = f2 = 1;

	for (int i = 1; i <= n; i++)
	{                                                               // f1   f2
		printf("%lu��",f1);                              //  1    1      2
		temp = f1 + f2;                                 //         f1    f2
		f1 = f2;//��ǰ�����ֵ����
		f2 = temp;
	}
	printf("\n");

	return;
}
#endif