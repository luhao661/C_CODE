#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(* ar)[MONTHS], int years);
void sumyue(int(*ar)[MONTHS], int years);

int main(void)
{
	const double rain[YEARS][MONTHS] =                                            //�˴���д��const float rain    ���������ݻ�ܴ󣬷�������
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain,YEARS);
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
    sumyue(rain, YEARS);
	
	//int year, month;
	//float yuezonghe, nianzonghe;

	//printf("  ��           ��ˮ��\n");
	//for (year = 0, nianzonghe = 0; year < YEARS; year++)
	//{
	//	for (month = 0, yuezonghe = 0; month < MONTHS; month++)
	//		yuezonghe += rain[year][month];
	//	printf("%5d%15.1f\n", 2010 + year, yuezonghe);
	//	nianzonghe += yuezonghe;
	//}
	//printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	//printf("�½�ˮ��ƽ��ֵΪ��\n");
	//printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	//for (month = 0; month < MONTHS; month++)
	//{
	//	for (year = 0, yuezonghe = 0; year < YEARS; year++)
	//		yuezonghe += rain[year][month];//��:5������ÿ��1�·ݵĽ�ˮ��֮��
	//	printf("%-5.1f", yuezonghe / YEARS);
	//}
	//printf("\n");

	return 0;
}
double sumnian(double (*ar)[MONTHS], int years)                                          //����ÿ��Ľ�ˮ��    ע��д������double�ĺ���
{
	int i, j;
	double sum,   sumsum=0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{
			
			sum += ar[i][j];  //sum += *(*(ar + i) + j);  Ҳ��
			/*sumsum += sum;*/                                                                //ע�⣺sumsum���ڴ˴����У�������sumÿ�����Ӻ��ֵ
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->ÿ���
			sumsum += sum;

	}
	return sumsum;
}
void sumyue(double(*ar)[MONTHS], int years)
{
	int i, j;
	double sum;

	for (i = 0; i < MONTHS; i++)
	{
		for (j = 0, sum = 0.0; j <years; j++)
		{
			sum += *(*(ar+j)+i);																							          //ֻҪÿ���µ��ܺͣ����������µ��ܺ�
		}			
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//2.
#if 0
void copy_arr(double(*p1), double(*p2), int n);
void copy_ptr(double(*p1), double(*p2), int n);
void copy_ptrs(double(*p1), double(*p2), double*p3);
void show(double *p,int n);

int main(void)
{
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1,source,5);
	show(target1, 5);
	copy_ptr(target2, source, 5);
	show(target2, 5);
	copy_ptrs(target3, source, source+5);
	show(target3, 5);

	return 0;
}
void copy_arr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		p1[i] = p2[i];
	}
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(p1+i) = *(p2+i);
	}
}
void copy_ptrs(double(*p1), double(*p2), double *p3)
{
	int i;
	double* p4;
	p4 = p2;																															//����Ҫ�Ӹ��м�ֵ���洢p2
																																			//��Ϊp2��������Ϊ�ж�ѭ����ֹ������
	for ( i=0   ;p2<p3;p2++,i++)
	{
		*(p1 + i) = *(p4 + i);																								      //д��*(p1 + i) = *(p2 + i); ���󣡣�     
	}
}
void show(double* p,int n)
{
	int index;
	for (index = 0; index < n; index++)
			printf("%-4.1f", *(p+index));
	        //printf("%3.1f", p[index]);
	printf("\n");
}
#endif


//3.
#if 0
int search_max_value(int* p,int n);
int main(void)
{
	printf("��������������(��q����)��\n");

	int num[256];
	int index = -1;
	int num1;
	//int status;
	// 
	//do
	//{
	//	status=scanf("%d", num1);
	//	index++;
	//	num[index] = num1;
	//} while (status== 1);

	while (scanf("%d", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ�ǣ�%d",search_max_value(num,index+1));

	return 0;
}
int search_max_value(int* p,int n)//�ҳ������е����ֵ
{
	int max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}
	return max;
}
#endif


//4.
#if 0
int search_max_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ���±��ǣ�[%d]", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(double * p, int n)//�ҳ������е����ֵ���±�
{
	double max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}

	
	
		for (index = 0; index < n; index++)
		{
			if (p[index] == max)
			{
				break;
			}
			else
				continue;
		}
	

	return index;
}
#endif


//5.
#if 0
double max-min_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ����Сֵ�Ĳ�ֵ��%.2f", search_max_value(num, index + 1));

	return 0;
}
double max-min_value(double* p, int n)//���������е����ֵ����Сֵ�Ĳ�ֵ
{
	double max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}

	double min = p[0];
	
	for (index = 0; index < n; index++)
	{
		min = ((*(p + index)) < min) ? *(p + index) : min;
	}

	double sub = max - min;

	return sub;
}
#endif


//6.
#if 0
void reverse_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	int yuansugeshu = index + 1;//Ԫ�ظ���

	printf("���������Ԫ���ǣ�");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f",num[index]);

	putchar('\n');

	reverse_value(num,yuansugeshu);
	printf("    �������к��ǣ�");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);


	return 0;
}
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//˼·1����num���鿽����һ���������У�Ȼ���num�е�Ԫ�����¸�ֵ
	//double temp[] = {};															// temp[n]���У�n���ǳ���

	for (index = 0; index < n; index++)
	{
		p[index] = p[n - index-1];											//˼·2��ֱ����ָ��
	}																						//						   1.10  2.20  3.30  4.40  5.50
																				           //�������к��ǣ�5.50  4.40  3.30  4.40  5.50
		return;																		   //��ν��??
}
#endif


//7.
#if 1
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows);
int main(void)
{
	double source[2][3] = { {1.1,2.2,3.3},{4.4,5.5,6.6} };
	double target[2][3];
	copy_ptr(target,source,2);

	return 0;
}
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows)
{

}
#endif