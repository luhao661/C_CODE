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
void copy_ptrs(double(*p1), double(*p2), double *p3)//实参：target3, source, source+5
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
//法二：(不用定义一个中间值)
//for ( i=0   ;p3-p2>i;    i++)
//{
//	*(p1 + i) = *(p2 + i);																								      //写成*(p1 + i) = *(p2 + i); 错误！！     
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
#endif
#if 0
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//思路1：把num数组拷贝到一个新数组中，然后对num中的元素重新赋值
	//double temp[] = {};															// temp[n]不行，n不是常量

	double temp;
	for (index = 0; index < n; index++)
	{
		temp = p[n - index - 1];
		p[index] =temp;											//思路2：直接用指针
	}																						//						   1.10  2.20  3.30  4.40  5.50
																				           //倒序排列后是：5.50  4.40  3.30  4.40  5.50
		return;																		   //如何解决??
}																							//用中间变量来暂存值  失败，    首尾相交换的方法不行
#elif 0
//改正
//排序中最基础的方法：比较排序法
//比较相邻两个元素的大小关系，通过交换元素位置来调整不符合要求的相邻元素。
//相邻元素两两比较，需要通过n-1次比较才能保证一个元素到达最终位置。
void reverse_value(double* p, int n)
{
	double temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)//或：for (int j = 0; j < n - 1-i; j++)	//从第一个元素开始，两两对比，处理，直到最后两个元素比较完。
		{																									//	注：内层循环完后，仍有部分元素未排好。如：最大的元素在最后的位置
			if (p[j] < p[j + 1])						//内层循环一次，能保证一个元素调整到合适位置，
			{													//在外层循环完后，保证所有元素到正确位置。
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
//void show(double *p1[3],int rows);  错误！！
void show(double(* p1)[3], int rows);

//法二：一维数组复制函数+循环
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
	//printf("%5.2lf", p1[0][0]);//为什么不显示？  因为 (* p1)[3] 错写成*p1 [3]
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
	copy_ptr(&target[0], &source[0], 3);//数组元素的地址，待处理元素的个数
	show(target,3);

	return 0;
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i <  n; i++)
	{
		*(p1 + i) = *(p2 +2+ i);//p1的索引0，1，2  被赋上 p2的索引2，3，4即第3，4，5个元素的值
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
//void show(int rows,int cols,double p1[rows][cols]);		//变长数组无法实现

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
	printf("各值翻倍后\n");
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
	const double rain[YEARS][MONTHS] =                                            //此处若写成const float rain    则计算的数据会很大，发生错误
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain, YEARS);
	printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //计算每年的降水量    注意写的两个double的含义
{
	int i, j;
	double sum, sumsum = 0.0;

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
		for (j = 0, sum = 0.0; j < years; j++)
		{
			sum += *(*(ar + j) + i);																							          //只要每个月的总和，不用所有月的总和
		}
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//13.
#if 1
void input_data(double(*p)[5], int rows);//任务a
double row_average(double *p,int n);//任务b：计算并返回一维数组平均值，利用循环，调用该函数3次
double total_average(double (*p)[5],int rows);//任务c
double find_max_value(double (*p)[5],int rows);//任务d
void show(double(*p)[5], int rows, double (*p1), double total_average, double find_max_value);//任务e

int main(void)
{
	printf("请输入3组小数数字,每组有5个小数(在新行按ctrl+Z以结束输入)：\n");
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
	
//	while (scanf("%lf", &num) ==1)									//为什么scanf("%lf", &num) !=EOF  不起作用？
//	{																						//错误的赋值语句块！
//		for (i = 0; i < rows; i++)
//		{
//			for (j = 0; j < 5; j++)
//				p[i][j] = num;
//		}
//	}

	//一维：
	/*while (scanf("%d", &num1) == 1)   //index=-1;
	{
		index++;
		num[index] = num1;
	}*/

	//二维：
	while (scanf("%lf", &num) == 1)//假设输入1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 （复制这些值来调试程序）
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
//二维数组的数据输入（法二）
#if 1
void input_data(double(*p)[5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		//scanf("%lf",p[i][j]);     //错误！
		scanf("%lf", &p[i][j]);

	}
}
#endif
double row_average(double* p, int n)	//p指向shuzu[i]，p存的是shuzu[i]的地址，即shuzu[i][0]的地址
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
	//sum2 += sum1;																																					//放置位置错误

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
	//how(shuzu, 3, rowaverage(数组), totalaverage, max);

	printf("输入的值是：\n");
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5.2f",p[i][j]);
		putchar('\n');
	}

	putchar('\n');

	for (i = 0; i < rows; i++)
		printf("一维数组%d的平均值-->%5.2f\n",i, p1[i]);

	printf("\n所有数据的平均值：%.2lf\n", total_average);

	printf("最大值：%.2lf\n", find_max_value);
}
#endif
//法二：
//在show函数中再调用求每组数据的平均值函数，求所有数据的平均值函数，求最大值函数。