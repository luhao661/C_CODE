#define _CRT_SECURE_NO_WARNINGS 1
#include "touwenjian.h"
//
#if 1
#endif


//�����ϰ
//1.
#if 0
int main(void)
{
	printf("touwenjian.h�а�����stdio.hͷ�ļ�\n");

	return 0;
}
#endif


//2.
#if 0
#define TIAOHE_PINJUNSHU(X,Y)			(	2*(x)*(y)	)/(		 (x)+(y)	)
int main(void)
{
	double x, y,result;

	printf("������x��y��ֵ(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		result = TIAOHE_PINJUNSHU(x,y);
		printf("%.2lf��%.2lf�ĵ���ƽ������%.2lf\n",x,y,result);
		printf("������x��y��ֵ(����0 0���˳�����)��");	
	}

	return 0;
}
#endif


//3.
#if 0
#include <math.h>
#define DEG_TO_RAD				((4*atan(1))/180)				//�Ƕ�ת���ɻ��ȵĹ�ʽ
typedef struct
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao);

int main(void)
{
	JIZUOBIAO input;																							//�ṹ1
	ZHIJIAOZUOBIAO result;																				//�ṹ2

	puts("�����뼫������������ģ�ͽǶ�(��λ����)��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.jijin, &input.jijiao) == 2)
	{
		result = zhuanhuan(input);
		printf("x���꣺%.2lf		y���꣺%.2lf\n", result.x, result.y);
		puts("�����뼫������������ģ�ͽǶ�(��λ����)��ֵ(����q���˳�)��");
	}

	return 0;
}
ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao)									//�ṹ3
{
	ZHIJIAOZUOBIAO temp;																				//�ṹ4
	temp.x = jizuobiao.jijin * cos(jizuobiao.jijiao*DEG_TO_RAD);
	temp.y = jizuobiao.jijin * sin(jizuobiao.jijiao * DEG_TO_RAD);

	return temp;
}
#endif


//4.
#if 0
#include <time.h>
void delay(double time);
int main(void)
{
	double time;
	printf("������Ҫ��ʱ��ʱ��(��λ����)��");
	scanf("%lf",&time);
	delay(time);
	printf("\n��ʱ����ɣ�\n");

	return 0;
}
void delay(double time)
{
	double tick1 =(double) clock();
	int i;

	while (((double)clock() - tick1)/ CLOCKS_PER_SEC <time)//CLOCKS_PER_SEC��ÿ���Ӵ�����ʱ�ӵδ����(ÿ���Ӵ�������ʱ������)
	{
		for (i = 0; i < 0xfff; i++)
			continue;
	}
}
//������
#if 0
void delay(double a)
{
	double s = (double)clock();
	double f = 0;
	while ((a - f) > 0.00000001)
	{
		f = ((double)clock() - s) / CLOCKS_PER_SEC;
	}
	printf("%.10lf s have passed\n", f);
}
//https ://blog.csdn.net/asdgyy/article/details/82973533
#endif
#endif


//5.
#if 0
#include <stdlib.h>//srand(),qsort() 
#include <time.h>	  //time()
#include <stdlib.h>//malloc()
#define SIZE 6
void dayin(int* p, int num, int cishu);
int main(void)
{
	int shuzu[SIZE] = {5,10,15,20,25,30};

	int cishu;
	printf("������ѡȡ����(1~6)��");
	while (scanf("%d", &cishu)==1 )
	{
		if (cishu < 1 || cishu>6)
		{
			printf("����������ѡȡ����(1~6)��");
			continue;
		}
		srand((int)time(0));
		dayin(shuzu, SIZE, cishu);
	}

	return 0;
}
void dayin(int* p, int num, int cishu)
{
	int* temp = (int*)malloc(cishu * sizeof(int));//�ö�̬�ڴ���䣬����temp[cishu]

step1:	for (int index = 0; index < cishu; index++)
	{
		*(temp + index) =( (int)rand() % num );//����ֵ������0��num(��SIZE��ֵ)
		//printf("%3d", *(temp + index));	//���ֵ
	}

	//putchar('\n');

	int index1,index2,biaoji=0;
	for ( index1 = 0; index1 < cishu-1; index1++)					//���������е�Ԫ�أ������ظ�ֵ�������1
	{
		for ( index2 = index1+1; index2 < cishu; index2++)
			if (*(temp + index1) == *(temp + index2))
				biaoji=1;
	}

	if (biaoji)
		goto step1;

	printf("����ֵ�����ս����\n");
	for (int index = 0; index < cishu; index++)
	{
		printf("%3d", *(temp + index));
	}
	putchar('\n');

	printf("��������ѡ�����ֵΪ��\n");
	for (int index = 0; index < cishu; index++)
	{
		printf("%3d", *(p+ * (temp + index)));
	}
	putchar('\n');

	free(temp);
}
#endif


//6.
#if 0
#include <stdlib.h>
#include <string.h>// strcmp()
#define SIZE 40
struct names
{
	char first[SIZE];
	char last[SIZE];
};
void show(const struct names* p, int n);
int mycompare(const void* p1, const void* p2);
int main(void)
{
	struct names staff[6] = {
		{"Aaa","Bbb"},
		{"Baa","Bbb"},
		{"Daa","Bbb"},
		{"Zaa","Abb"},
		{"Baa","Abb"},
		{"Aaa","Cbb"},
	};

	puts("�ṹ�����е���������");
	show(staff, 6);

	qsort(staff, 6, sizeof(struct names), mycompare);

	puts("�ṹ�����е�����������ɺ�����");
	show(staff, 6);

	return 0;
}
void show(const struct names* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%-6s%-6s\n",(p+index)->first, (p + index)->last);
	}

}
int mycompare(const void* p1, const void* p2)
{
	const struct names* a1 = (const struct names*)p1;
	const struct names* a2 = (const struct names*)p2;

	int a;
	if (a = strcmp(a1->last, a2->last))//�ȱȽ���
	{
		if (a == 1)
			return 1;
		else
			return -1;
		//������
		//return a;
	}
	return strcmp(a1->first, a2->first);//��Ƚ���
}
#endif


//7.
#if 1
#include <stdlib.h>
#include <stdarg.h>
void show_array(const double *ar,int n);
double* new_d_array(int n,...);

int main(void)
{
	double* p1;
	double* p2;

	p1 = new_d_array(5,1.2,2.3,3.4,4.5,5.6);
	p2 = new_d_array(4,100.0,20.00,8.08,-1890.0);

	show_array(p1,5);
	show_array(p2,4);

	free(p1);
	free(p2);

	return 0;
}
void show_array(const double* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %-9.2lf",*(ar+i));
	}
	putchar('\n');
}
double* new_d_array(int n, ...)				//1.����ԭ�͡�������������һ���βκ�һ��ʡ�Ժ�
{
	double* p = (double*)malloc(n * sizeof(double));

	va_list temp;										//2.����һ���洢ʡ�ԺŲ��ֵ����ݶ���temp
	va_start(temp, n);								//3.ʵ�ε����ݿ�����temp(��temp��ʼ��Ϊ�����б�)

	for (int i = 0; i < n; i++)
		*(p+i) = va_arg(temp, double);		//4.���ʲ����б������

	va_end(temp);										//5.�ú����������(�ͷŶ�̬��������ڴ洢�������ڴ�)

	return p;
}
#endif
