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
void copy_ptrs(double(*p1), double(*p2), double *p3)//ʵ�Σ�target3, source, source+5
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
//������(���ö���һ���м�ֵ)
//for ( i=0   ;p3-p2>i;    i++)
//{
//	*(p1 + i) = *(p2 + i);																								      //д��*(p1 + i) = *(p2 + i); ���󣡣�     
//}
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
#endif
#if 0
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//˼·1����num���鿽����һ���������У�Ȼ���num�е�Ԫ�����¸�ֵ
	//double temp[] = {};															// temp[n]���У�n���ǳ���

	double temp;
	for (index = 0; index < n; index++)
	{
		temp = p[n - index - 1];
		p[index] =temp;											//˼·2��ֱ����ָ��
	}																						//						   1.10  2.20  3.30  4.40  5.50
																				           //�������к��ǣ�5.50  4.40  3.30  4.40  5.50
		return;																		   //��ν��??
}																							//���м�������ݴ�ֵ  ʧ�ܣ�    ��β�ཻ���ķ�������
#elif 0
//����
//������������ķ������Ƚ�����
//�Ƚ���������Ԫ�صĴ�С��ϵ��ͨ������Ԫ��λ��������������Ҫ�������Ԫ�ء�
//����Ԫ�������Ƚϣ���Ҫͨ��n-1�αȽϲ��ܱ�֤һ��Ԫ�ص�������λ�á�
void reverse_value(double* p, int n)
{
	double temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)//��for (int j = 0; j < n - 1-i; j++)	//�ӵ�һ��Ԫ�ؿ�ʼ�������Աȣ�����ֱ���������Ԫ�رȽ��ꡣ
		{																									//	ע���ڲ�ѭ��������в���Ԫ��δ�źá��磺����Ԫ��������λ��
			if (p[j] < p[j + 1])						//�ڲ�ѭ��һ�Σ��ܱ�֤һ��Ԫ�ص���������λ�ã�
			{													//�����ѭ����󣬱�֤����Ԫ�ص���ȷλ�á�
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	return;																		 
}
#endif


//7.
#if 0
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows);
//void show(double *p1[3],int rows);  ���󣡣�
void show(double(* p1)[3], int rows);

//������һά���鸴�ƺ���+ѭ��
void copy_ptr_yiwei (double(*p1), double(*p2), int n);

int main(void)
{
	double source[2][3] = { {1.1,2.2,3.3},{4.4,5.5,6.6} };
	double target[2][3];
	//copy_ptr(target,source,2);

	for(int i=0;i<2;i++)
	copy_ptr_yiwei(target[i], source[i], 3);

	show(target,2);

	return 0;
}
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows)
{
	int i,j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 3; j++)
			*(*(p1 + i) + j) = *(*(p2 + i) + j);
	}
}
void copy_ptr_yiwei(double(*p1), double(*p2), int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p1 + index) = *(p2 + index);
	}
}
void show(double(* p1)[3], int rows)
{
	//printf("%5.2lf", p1[0][0]);//Ϊʲô����ʾ��  ��Ϊ (* p1)[3] ��д��*p1 [3]
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5.2lf",p1[i][j]);
		putchar('\n');
	}
}
#endif


//8.
#if 0
void copy_ptr(double(*p1), double(*p2), int n);
void show(double(*p1), int n);

int main(void)
{
	double source[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	double target[3] = {0,0,0};
	copy_ptr(&target[0], &source[0], 3);//����Ԫ�صĵ�ַ��������Ԫ�صĸ���
	show(target,3);

	return 0;
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i <  n; i++)
	{
		*(p1 + i) = *(p2 +2+ i);//p1������0��1��2  ������ p2������2��3��4����3��4��5��Ԫ�ص�ֵ
	}
}
void show(double(*p1), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5.2lf",p1[i]);
	}
}
#endif


//9.
#if 0
#define N 3
void copy(double (*p1)[5],double (*p2)[5],int rows);
void show(double (*p1)[5],int rows);
//void show(int rows,int cols,double p1[rows][cols]);		//�䳤�����޷�ʵ��

int main(void)
{
	double num[N][5] = {
		{1.0,    2.0,  3.0,  4.0,  5.0},
		{6.0,   7.0,   8.0,  9.0, 10.0},
		{11.0,12.0,13.0,14.0,15.0}
	};
	double target[N][5];
	copy(target,num,N);
	show(target,N);

	return 0;
}
void copy(double(*p1)[5], double(*p2)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			*(*(p1 + i) + j) = *(*(p2 + i) + j);
	}
}
void show(double(*p1)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%-5.2lf",p1[i][j]);
		putchar('\n');
	}
}
#endif


//10.
#if 0
void chuli(int *p1,int *p2,int *p3,int n);
void show(int *p1,int n);
int main(void)
{
	int shuzu1[4] = {2,4,5,8};
	int shuzu2[4] = { 1,0,4,6 };
	int shuzu3[4] ;

	show(shuzu1,4);
	show(shuzu2,4);
	chuli(shuzu3,shuzu2,shuzu1,4);
	show(shuzu3,4);

	return 0;
}
void chuli(int* p1, int* p2, int* p3, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(p1+i) = *(p2+i) + *(p3+i);
}
void show(int* p1, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%3d",p1[i]);
	putchar('\n');
}
#endif


//11.
#if 0
void show(int(*p)[5], int rows);
void chuli(int(*p)[5], int rows);
int main(void)
{
	int shuzu1[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	show(shuzu1,3);
	chuli(shuzu1,3);
	printf("��ֵ������\n");
	show(shuzu1,3);

	return 0;
}
void show(int(*p)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d",p[i][j]);
		putchar('\n');
	}
}
void chuli(int(*p)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			*(*(p + i) + j)    *=    2;
	}
}
#endif


//12.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(*ar)[MONTHS], int years);
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
	nianzonghe = sumnian(rain, YEARS);
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //����ÿ��Ľ�ˮ��    ע��д������double�ĺ���
{
	int i, j;
	double sum, sumsum = 0.0;

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
		for (j = 0, sum = 0.0; j < years; j++)
		{
			sum += *(*(ar + j) + i);																							          //ֻҪÿ���µ��ܺͣ����������µ��ܺ�
		}
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//13.
#if 1
void input_data(double(*p)[5], int rows);//����a
double row_average(double *p,int n);//����b�����㲢����һά����ƽ��ֵ������ѭ�������øú���3��
double total_average(double (*p)[5],int rows);//����c
double find_max_value(double (*p)[5],int rows);//����d
void show(double(*p)[5], int rows, double (*p1), double total_average, double find_max_value);//����e

int main(void)
{
	printf("������3��С������,ÿ����5��С��(�����а�ctrl+Z�Խ�������)��\n");
	double shuzu[3][5];
	input_data(shuzu,3);

	int i;
	double rowaverage[3];
	for (i = 0; i < 3; i++)
	{
	rowaverage[i]=row_average(shuzu[i], 5);
	}

	double totalaverage=total_average(shuzu, 3);

	double max=find_max_value(shuzu, 3);

	show(shuzu,3,rowaverage,totalaverage,max);
	
	return 0;
}
#if 0
void input_data(double(*p)[5], int rows)
{
	int i =0;
	int j =0;
	double num;
	
//	while (scanf("%lf", &num) ==1)									//Ϊʲôscanf("%lf", &num) !=EOF  �������ã�
//	{																						//����ĸ�ֵ���飡
//		for (i = 0; i < rows; i++)
//		{
//			for (j = 0; j < 5; j++)
//				p[i][j] = num;
//		}
//	}

	//һά��
	/*while (scanf("%d", &num1) == 1)   //index=-1;
	{
		index++;
		num[index] = num1;
	}*/

	//��ά��
	while (scanf("%lf", &num) == 1)//��������1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 ��������Щֵ�����Գ���
{
		p[i][j] = num;
		j++;

			if (j ==5)
			{
				i++;
				j = 0;
			}
	}

}
#endif
//��ά������������루������
#if 1
void input_data(double(*p)[5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		//scanf("%lf",p[i][j]);     //����
		scanf("%lf", &p[i][j]);

	}
}
#endif
double row_average(double* p, int n)	//pָ��shuzu[i]��p�����shuzu[i]�ĵ�ַ����shuzu[i][0]�ĵ�ַ
{
	int i;
	double row_sum=0.0;
	for (i = 0; i < n; i++)
		row_sum += *(p + i);

	return row_sum/5;
}
double total_average(double(*p)[5], int rows)
{
	int i, j;
	double sum1, sum2;
	sum2 = 0.0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0,sum1=0.0; j < 5; j++)
			sum1 += p[i][j];

		sum2 += sum1;
	}
	//sum2 += sum1;																																					//����λ�ô���

	return sum2 / 15;
}
double find_max_value(double(*p)[5], int rows)
{
	int i, j;
	double max=p[0][0];
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			max = (max > p[i][j]) ? max : p[i][j];
	}
	
	return max;
}
void show(double(*p)[5], int rows, double(*p1), double total_average, double find_max_value)
{
	//how(shuzu, 3, rowaverage(����), totalaverage, max);

	printf("�����ֵ�ǣ�\n");
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5.2f",p[i][j]);
		putchar('\n');
	}

	putchar('\n');

	for (i = 0; i < rows; i++)
		printf("һά����%d��ƽ��ֵ-->%5.2f\n",i, p1[i]);

	printf("\n�������ݵ�ƽ��ֵ��%.2lf\n", total_average);

	printf("���ֵ��%.2lf\n", find_max_value);
}
#endif
//������
//��show�������ٵ�����ÿ�����ݵ�ƽ��ֵ���������������ݵ�ƽ��ֵ�����������ֵ������