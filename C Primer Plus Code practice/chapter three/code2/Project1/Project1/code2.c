#define _CRT_SECURE_NO_WARNINGS 1
//��ʾ��ĸ�Ĵ�����
#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c",&ch);
//	printf("The code for %c is %d.\n",ch,ch);
//	return 0;
//}

//�����ַ�ʽ��ʾfloat���͵�ֵ
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

//�������������
//int main(void)
//{
//	float a, b;
//	b = 2.0e20 + 1;
//	a = 2.0e20;
//	printf("b-a=%lf\n",b-a);
//	return 0;
//}


//��ӡ���ʹ�С
//int main(void)
//{
//	printf("int�Ĵ�С��%zd bytes.\n",sizeof(int));
//	printf("char�Ĵ�С��%zd bytes.\n",sizeof(char));
//	printf("short�Ĵ�С��%zd bytes.\n",sizeof(short));
//	printf("long�Ĵ�С��%zd bytes.\n", sizeof(long));
//	printf("long long�Ĵ�С��%zd bytes.\n", sizeof(long long));
//	printf("float�Ĵ�С��%zd bytes.\n", sizeof(float));
//	printf("double�Ĵ�С��%zd bytes.\n", sizeof(double));
//	printf("long double�Ĵ�С��%zd bytes.\n", sizeof(long double));
//	printf("int�Ĵ�С��%zd bytes.\n", 
//		sizeof(int));
//	float a = 31415.92653589;
//	printf("%f",a);
//	return 0;
//}


//������������
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

//ʹ��ת������
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