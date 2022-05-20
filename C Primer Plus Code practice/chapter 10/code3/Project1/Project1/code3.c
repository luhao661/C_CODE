#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编程练习
//1.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(* ar)[MONTHS], int years);
void sumyue(int(*ar)[MONTHS], int years);

int main(void)
{
	const double rain[YEARS][MONTHS] =                                            //此处若写成const float rain    则计算的数据会很大，发生错误
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain,YEARS);
	printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
    sumyue(rain, YEARS);
	
	//int year, month;
	//float yuezonghe, nianzonghe;

	//printf("  年           降水量\n");
	//for (year = 0, nianzonghe = 0; year < YEARS; year++)
	//{
	//	for (month = 0, yuezonghe = 0; month < MONTHS; month++)
	//		yuezonghe += rain[year][month];
	//	printf("%5d%15.1f\n", 2010 + year, yuezonghe);
	//	nianzonghe += yuezonghe;
	//}
	//printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	//printf("月降水量平均值为：\n");
	//printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	//for (month = 0; month < MONTHS; month++)
	//{
	//	for (year = 0, yuezonghe = 0; year < YEARS; year++)
	//		yuezonghe += rain[year][month];//例:5年来的每个1月份的降水量之和
	//	printf("%-5.1f", yuezonghe / YEARS);
	//}
	//printf("\n");

	return 0;
}
double sumnian(double (*ar)[MONTHS], int years)                                          //计算每年的降水量    注意写的两个double的含义
{
	int i, j;
	double sum,   sumsum=0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{
			
			sum += ar[i][j];  //sum += *(*(ar + i) + j);  也可
			/*sumsum += sum;*/                                                                //注意：sumsum放在此处不行，这存的是sum每次增加后的值
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->每年的
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
			sum += *(*(ar+j)+i);																							          //只要每个月的总和，不用所有月的总和
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
	p4 = p2;																															//必须要加个中间值来存储p2
																																			//因为p2后来会作为判断循环终止的条件
	for ( i=0   ;p2<p3;p2++,i++)
	{
		*(p1 + i) = *(p4 + i);																								      //写成*(p1 + i) = *(p2 + i); 错误！！     
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
	printf("请输入整数数字(按q结束)：\n");

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

	printf("最大值是：%d",search_max_value(num,index+1));

	return 0;
}
int search_max_value(int* p,int n)//找出数组中的最大值
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("最大值的下标是：[%d]", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(double * p, int n)//找出数组中的最大值的下标
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("最大值与最小值的差值是%.2f", search_max_value(num, index + 1));

	return 0;
}
double max-min_value(double* p, int n)//返回数组中的最大值和最小值的差值
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	int yuansugeshu = index + 1;//元素个数

	printf("输入的数组元素是：");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f",num[index]);

	putchar('\n');

	reverse_value(num,yuansugeshu);
	printf("    倒序排列后是：");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);


	return 0;
}
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//思路1：把num数组拷贝到一个新数组中，然后对num中的元素重新赋值
	//double temp[] = {};															// temp[n]不行，n不是常量

	for (index = 0; index < n; index++)
	{
		p[index] = p[n - index-1];											//思路2：直接用指针
	}																						//						   1.10  2.20  3.30  4.40  5.50
																				           //倒序排列后是：5.50  4.40  3.30  4.40  5.50
		return;																		   //如何解决??
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