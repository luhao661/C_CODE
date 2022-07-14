#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//复习题
//2.(修改前)
#if 0
#define NEW(X)			X+5
int main(void)
{
	int y = 1,berg=2,lob=3,est,nilp;
	printf(" y = %d, berg = %d, lob = %d\n",y,berg,lob);
	y = NEW(y);
	printf(" y = %d\n", y);

	berg = NEW(berg) * lob;						//berg=2+5*3
	printf(" berg = %d\n", berg);

	est = NEW(berg) / NEW(y);					//17+5/6+5
	printf(" est = %d\n", est);

	nilp = lob * NEW(-berg);						//3*-17+5=-46
	printf(" nilp = %d\n", nilp);

	return 0;
}
#endif
//2.(修改后)
#if 0
#define NEW(X)			((X)+5)
int main(void)
{
	int y = 1, berg = 2, lob = 3, est, nilp;
	printf(" y = %d, berg = %d, lob = %d\n", y, berg, lob);
	y = NEW(y);
	printf(" y = %d\n", y);

	berg = NEW(berg) * lob;						//berg=(2+5)*3
	printf(" berg = %d\n", berg);

	est = NEW(berg) / NEW(y);					//(21+5)/(6+5)
	printf(" est = %d\n", est);

	nilp = lob * NEW(-berg);						//3*(-21+5)=-48
	printf(" nilp = %d\n", nilp);

	return 0;
}
#endif


//3.
#if 0
#define	MIN(X,Y)			((X)>(Y))?(Y):(X)
#endif


//4.
#if 0
#define EVEN_GT(X,Y)		(	(	(X)%2==0	)&&(	 (X)>(Y) 	)	)?1:0
#endif


//5.
#if 0
#define PRINT(X,Y)				printf(#X" is %d and "#Y" is %d",X,Y)
int main(void)
{
	PRINT(3+4,4*12);

	return 0;
}
#endif


//6.
#if 0
#define SIZE					25
#define SPACE				' '
#define PS()					putchar(' ')
#define BIG(X)				((X)+3)
#define SUMSQ(X,Y)		((X)*(X)+(Y)*(Y))
#endif


//7.
#if 0
#define PRINT(X)				printf("name: "#X"; value: %d; address: %p",X,&X)
int main(void)
{
	int fop = 23;
	PRINT(fop);

	return 0;
}
#endif


//9.
#if 0

#define PR_DATE		printf("日期是：%s",__DATE__)
#ifdef PR_DATE
int main(void)
{
	PR_DATE;

	return 0;
}
#endif

#endif


//11.
#if 0
#define MYTYPE(X)			_Generic((X),\
_Bool:"boolean",\
default:"not boolean")
#endif


//13.
#if 0
#include <stdlib.h>//srand(),qsort() 
#include <time.h>

#define SIZE 1000
void fill_array(int *p,int num);
void show_array(int *p,int num);
int mycompare(void *p1,void *p2);

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* 随机种子 */

	fill_array(shuzu, SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("数组中的随机数排序完成后如下");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(int* p, int num)
{
	for (int index = 0; index < num; index++)
	{
		*(p + index) = (int)rand() %1000+1;//值控制在1至1000
	}
}
void show_array(int* p, int num)
{
	int index;
	for (index = 0; index < num; index++)
	{
		printf("%6d", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
int mycompare(void* p1, void* p2)
{
	const int* a1 = (const int*)p1;
	const int* a2 = (const int*)p2;

	if (*a1 < *a2)										//要求降序排序
		return 1;
	else if (*a1 == *a2)
		return 0;
	else
		return -1;
}
#endif


//14.
#if 1
#include <string.h>
#include <stdlib.h>
#define SIZE 300
void fill_array(double* p, int num);
void show_array(const double* p, int n);

int main(void)
{
	double data1[SIZE/3];
	double data2[SIZE];

	srand((double)time(0));			/* 随机种子 */
	fill_array(data2, SIZE);

	puts("data2数组内容：");
	show_array(data2, SIZE);

	puts("把data2的前100个元素拷贝到data1中：");
	memcpy(data1, data2, SIZE/3 * sizeof(double));
	puts("data1数组内容：");
	show_array(data1, SIZE/3);
	puts("把data2的后100个元素拷贝到data1中：");					//*****注*****后100个元素即第201至第300个元素
	memcpy(data1, data2+200, SIZE / 3 * sizeof(double));
	puts("data1数组内容：");
	show_array(data1, SIZE / 3);

	return 0;
}
void fill_array(double* p, int num)
{
	for (int index = 0; index < num; index++)
	{
		*(p + index) = (double)rand()/ 1000.0 + 1;
	}
}
void show_array(const double* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%8.2lf", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
#endif
