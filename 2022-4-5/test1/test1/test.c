#define _CRT_SECURE_NO_WARNINGS 1//必须放在第一行
//#include <stdio.h>
//
//int main()
//{
//	printf("严路昊\n");
//		return 0;
//
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n\n", sizeof(int));
//}

#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 70.2;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//}
//%d -整型
//%f  -float
//%lf -double
//当全局变量和局部变量冲突时，局部变量优先

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a ,&b);
	sum = a + b;
	printf("sum=%d\n",sum);
	return 0;
}