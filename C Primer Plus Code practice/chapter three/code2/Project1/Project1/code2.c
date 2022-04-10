#define _CRT_SECURE_NO_WARNINGS 1
//显示字母的代码编号
#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c",&ch);
//	printf("The code for %c is %d.\n",ch,ch);
//	return 0;
//}

//以两种方式显示float类型的值
//#include <stdio.h>
//int main(void)
//{
//	float aboat = 3200.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	printf("%f  %e\n",aboat,aboat);
//	printf("%f  %e\n",abet,abet);
//	printf("%Lf  %le\n",dip,dip);
//}

//浮点数舍入错误
//int main(void)
//{
//	float a, b;
//	b = 2.0e20 + 1;
//	a = 2.0e20;
//	printf("b-a=%lf\n",b-a);
//	return 0;
//}


//打印类型大小
//int main(void)
//{
//	printf("int的大小是%zd bytes.\n",sizeof(int));
//	printf("char的大小是%zd bytes.\n",sizeof(char));
//	printf("short的大小是%zd bytes.\n",sizeof(short));
//	printf("long的大小是%zd bytes.\n", sizeof(long));
//	printf("long long的大小是%zd bytes.\n", sizeof(long long));
//	printf("float的大小是%zd bytes.\n", sizeof(float));
//	printf("double的大小是%zd bytes.\n", sizeof(double));
//	printf("long double的大小是%zd bytes.\n", sizeof(long double));
//	printf("int的大小是%zd bytes.\n", 
//		sizeof(int));
//	float a = 31415.92653589;
//	printf("%f",a);
//	return 0;
//}


//参数错误的情况
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n",n,m);
//	printf("%d,%d,%d\n",n);
//	printf("%d,%d\n",f,g);
//	return 0;
//}

//使用转义序列
int main(void)
{
	float salary;

	//printf("\aEnter your desired monthly salary:");
	//printf(" $____\b\b\b\b");
	//scanf("%f",&salary);
	//printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
	//printf("\rGee!\n\n\n\n\n");
	char a = '9';
	printf("%C",a);
	return 0;

}