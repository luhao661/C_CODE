#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0
#endif


//��ʼ������
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n",index+1,days[index]);

	return 0;
}
#endif


//δ��ʼ������ĺ��
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS];

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//���ֳ�ʼ������ĺ��
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//�ñ���������Ԫ�ظ���
#if 0
int main(void)
{
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	printf("%zd\n",sizeof days);//����daysռ48���ֽڣ�intռ32λ��4���ֽڣ�
	for (index = 0; index < sizeof days; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	putchar('\n');

	for (index = 0; index < sizeof days/sizeof days[0]; index++)//sizeof days/sizeof days[0]=12
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//ʹ�ó�ʼ����
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,    [4]=31,    30,   [1]=29};//29�Ḳ�ǵ�28��30��������ֵΪ5����

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//ʹ�ö�λ�������ÿ����ܽ�ˮ������ƽ����ˮ����ÿ�¶�ƽ����ˮ��
#if 0
#define MONTHS 12
#define YEARS 5
int main(void)
{
	const float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	int year, month;
	float yuezonghe, nianzonghe;

	printf("  ��           ��ˮ��\n");
	for (year = 0, nianzonghe = 0; year < YEARS; year++)
	{
		for (month = 0, yuezonghe = 0; month < MONTHS; month++)
			yuezonghe += rain[year][month];
		printf("%5d%15.1f\n",2010+year,yuezonghe);
		nianzonghe += yuezonghe;
	}
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n",nianzonghe/YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, yuezonghe = 0; year < YEARS; year++)
			yuezonghe += rain[year][month];//��:5������ÿ��1�·ݵĽ�ˮ��֮��
		printf("%-5.1f",yuezonghe/YEARS);
	}
	printf("\n");

	return 0;
}
#endif


//ָ�����һ�������Ե�ַ��Ӱ��
#if 0
#define SIZE   4
int main(void)
{
	short a[SIZE];
	short* pti;//ָ��short���͵�ָ��
	double b[SIZE];
	double* ptd;

	pti = a;//�������Ǹ�������Ԫ�صĵ�ַ
	ptd = b;
	printf("%23s%23s\n","short","double");

	for (int index = 0; index < SIZE; index++)
		printf("pointer+%d:%10p%20p\n",index,pti+index,ptd+index);

	return 0;
}
#endif


//ʹ��ָ���������洢�������е�ֵ
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, *(days+index));

	return 0;
}
#endif


//ʹ��ָ����������е�Ԫ�صĺ�
#if 0
#define SIZE 10
int sum(int* ar, int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("������ܺ�Ϊ��%ld\n",answer);
	printf("����ռ%zd���ֽ�\n",sizeof marbles);

	return 0;
}
int sum(int* ar, int n)
{
	int index;
	int sum=0;

	for (index = 0; index < n; index++)
		sum += *(ar + index);
	printf("arռ%zd���ֽ�\n",sizeof ar);

	return sum;
}
#endif


//ʹ��ָ����������е�Ԫ�صĺ�(����)
#if 0
#define SIZE 10
int sum(int* start, int *end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, marbles+SIZE);
	printf("������ܺ�Ϊ��%ld\n", answer);
	printf("����ռ%zd���ֽ�\n", sizeof marbles);

	return 0;
}
int sum(int* start, int*end)
{
	int sum = 0;

	/*while (start < end)
	{
		sum += *start;
		start++;
	}*/
	for (           ; start < end; start++)
		sum += *start;

	return sum;
}
#endif


//ָ�������е����ȼ�
#if 0
int data[2] = { 100,200 };
int moredata[2] = { 300,400 };
int main(void)
{
	int* p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;

	printf("*p1=%d,         *p2=%d,         *p3=%d\n",*p1,*p2,*p3);
	printf("*p1++=%d,       *++p2=%d,      (*p3)++=%d\n", *p1++, *++p2, ( * p3)++);
	printf("*p1=%d,         *p2=%d,         *p3=%d\n", *p1, *p2, *p3);

	return 0;
}
#endif


//ָ�����
#if 0
int main(void)
{
	int shuzu[5] = { 100,200,300,400,500 };
	int* p1, * p2, * p3;

	printf("     shuzu=%p\n",shuzu);                                //ע�⣡ ���������ȼۣ�
	printf("    &shuzu=%p\n",&shuzu);
	printf(" &shuzu[0]=%p\n", &shuzu[0]);

	p1 = shuzu;
	p2 = &shuzu[2];

	printf("ָ��ָ��ĵ�ַ			ָ��ָ���ַ�е�ֵ			ָ�뱾��ĵ�ַ\n");
	printf("p1=%p		*p1=%d					&p1=%p\n",p1,*p1,&p1	);

	//ָ��ӷ�
	p3 = p1 + 4;
	printf("p1+4=%p		*(p1+4)=%d\n", p1+4, *(p1+4));
	p1++;
	printf("p1++��\n");
	printf("p1=%p		*p1=%d			  	        &p1=%p\n", p1, *p1,&p1);

	p2--;
	printf("p2��1��\n");
	printf("p2=%p		*p2=%d			  	        &p2=%p\n", p2, *p2, &p2);

	--p1;
	++p2;
	printf("p1,p2��ԭ\n");

	printf("p1=%p,p2=%p\n",p1,p2);

	//ָ�����
	printf("p1=%p,p2=%p,p2-p1=%td\n", p1, p2,p2-p1);
	//ָ���ȥһ������
	printf("p3=%p,p3-2=%p\n",p3,p3-2);

	//ָ���ĸ�ֵ
	//p1 = p1 + p2;��Ч

	return 0;
}
#endif


//��������ĺ���
#if 0
#define SIZE 5
void show_array(const double* ar, int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};

	printf("ԭʼ�������е������ǣ�\n");
	show_array(dip,SIZE);
	printf("����������е������ǣ�\n");
	mult_array(dip,SIZE,2.5);
	show_array(dip,SIZE);

	return 0;
}
void show_array(const double* ar, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%8.3f",*(ar+i));

	putchar('\n');
}
void mult_array(double ar[], int n, double mult)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] *= mult;
	//*(ar + i) *= mult;
}
#endif


//���ָ����α�ʾ��ά����
#if 0
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };

	printf("       zippo=%p\n",zippo);                                //��Ҫ����������
	printf("      &zippo=%p\n", &zippo);
	printf("    zippo[0]=%p\n", zippo[0]);
	printf("   &zippo[0]=%p\n", &zippo[0]);
	printf("&zippo[0][0]=%p\n\n\n", &zippo[0][0]);
	
	printf("zippo=%p, zippo+1=%p\n",zippo,zippo+1);
	printf("zippo[0]=%p, zippo[0]+1=%p\n",zippo[0],zippo[0]+1);
	printf("*zippo=%p, *zippo+1=%p\n\n",*zippo,*zippo+1);

	printf("zippo[0][0]=%d\n",zippo[0][0]);
	printf("*zippo[0]=%d\n",*zippo[0]);
	printf("**zippo=%d\n\n", **zippo);

	printf("zippo[2][1]=%d\n",zippo[2][1]);
	printf("*(*(zippo+2)+1)=%d\n\n",*(*(zippo+2)+1));


	return 0;
}
#endif


//ͨ��ָ���ȡ��ά�������Ϣ
#if 0
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
	int(*p)[2];

	p = zippo;
	printf("p=%p, p+1=%p\n",p,p+1);
	printf("p[0]=%p, p[0]+1=%p\n", p[0], p[0] + 1);

	printf("*p=%p, *p+1=%p\n",*p,*p+1);
	printf("p[0][0]=%d\n",p[0][0]);
	printf("*p[0]=%d\n",*p[0]);
	printf("**p=%d\n",**p);
	printf("p[2][1]=%d\n",p[2][1]);
	printf("*(*(p+2)+1)=%d\n", *(*(p + 2) + 1));

	return 0;
}
#endif


//ָ���ָ��
#if 1
int main(void)
{
	int num = 2;
	int* p1;
	int** p2;

	p1 = &num;
	p2 = &p1;

	printf("num=%d\n",num);
	printf("&num=%p\n",&num);
	printf("p1=%p\n", p1);
	printf("&p1=%p\n", &p1);
	printf("p2=%p\n",p2);
	printf("&p2=%p\n\n", &p2);

	printf("*p1=%d\n", *p1);//��д��%p,��Ϊ0000000002
	printf("*p2=%p\n", *p2);
	printf("**p2=%d\n", **p2);

	return 0;
}
#endif