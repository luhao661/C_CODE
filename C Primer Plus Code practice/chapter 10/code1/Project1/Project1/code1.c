#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0
#endif


//初始化数组
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


//未初始化数组的后果
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


//部分初始化数组的后果
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


//让编译器计算元素个数
#if 0
int main(void)
{
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	printf("%zd\n",sizeof days);//数组days占48个字节（int占32位即4个字节）
	for (index = 0; index < sizeof days; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	putchar('\n');

	for (index = 0; index < sizeof days/sizeof days[0]; index++)//sizeof days/sizeof days[0]=12
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//使用初始化器
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,    [4]=31,    30,   [1]=29};//29会覆盖掉28，30赋给索引值为5的项

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//使用二位数组计算每年的总降水量，年平均降水量，每月都平均降水量
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

	printf("  年           降水量\n");
	for (year = 0, nianzonghe = 0; year < YEARS; year++)
	{
		for (month = 0, yuezonghe = 0; month < MONTHS; month++)
			yuezonghe += rain[year][month];
		printf("%5d%15.1f\n",2010+year,yuezonghe);
		nianzonghe += yuezonghe;
	}
	printf("每年的平均降水量为%.1f\n",nianzonghe/YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, yuezonghe = 0; year < YEARS; year++)
			yuezonghe += rain[year][month];//例:5年来的每个1月份的降水量之和
		printf("%-5.1f",yuezonghe/YEARS);
	}
	printf("\n");

	return 0;
}
#endif


//指针加上一个数，对地址的影响
#if 0
#define SIZE   4
int main(void)
{
	short a[SIZE];
	short* pti;//指向short类型的指针
	double b[SIZE];
	double* ptd;

	pti = a;//数组名是该数组首元素的地址
	ptd = b;
	printf("%23s%23s\n","short","double");

	for (int index = 0; index < SIZE; index++)
		printf("pointer+%d:%10p%20p\n",index,pti+index,ptd+index);

	return 0;
}
#endif


//使用指针来检索存储在数组中的值
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


//使用指针计算数组中的元素的和
#if 0
#define SIZE 10
int sum(int* ar, int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("数组的总和为：%ld\n",answer);
	printf("数组占%zd个字节\n",sizeof marbles);

	return 0;
}
int sum(int* ar, int n)
{
	int index;
	int sum=0;

	for (index = 0; index < n; index++)
		sum += *(ar + index);
	printf("ar占%zd个字节\n",sizeof ar);

	return sum;
}
#endif


//使用指针计算数组中的元素的和(法二)
#if 1
#define SIZE 10
int sum(int* start, int *end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, marbles+SIZE);
	printf("数组的总和为：%ld\n", answer);
	printf("数组占%zd个字节\n", sizeof marbles);

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
