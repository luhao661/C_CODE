#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//使用limit.h和float.h头文件中定义的符号常量（明示常量）
//#include<limits.h>
//#include<float.h>
//int main(void)
//{
//	printf("Some numer limits for this system:\n");
//	printf("Biggest int:%d\n",INT_MAX);
//	printf("Smallest long long:%lld\n",LLONG_MIN);
//	printf("One byte = %d bits on this system.\n",CHAR_BIT);
//	printf("Largest double=%e\n",DBL_MAX);
//	printf("Smallest normal float:%e\n",FLT_MIN);
//	printf("float precision = %d digits\n",FLT_DIG);
//	printf("float epsilon = %e\n",FLT_EPSILON);
//	return 0;
//}


//使用%g
//int main(void)
//{
//	printf("%g\n",123.45);
//	printf("%g\n",3.141);
//	printf("%g\n", 3.1415); 
//	printf("%g\n", 3.14159); 
//	printf("%g\n", 3.141592); 
//	printf("%g\n", 3.1415926e2); 
//
//	return 0;
//}


//使用转换说明
//#define PI 3.141593
//int main(void)
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("The %d contestants ate %f berry pies.\n",number,pies);
//	printf("The value of pi is %.2f.\n",PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n",'$',2*cost);
//	printf("%zu\n",sizeof(number));
//	printf("%-20s\n",   "abc");
//	printf("%+6.2f\n", -3.14159);
//	printf("%+6.2f\n", 3.14159);
//	printf("% 6.2f\n", -3.14159);
//	printf("%02d\n", -3);
//	printf("%6d\n", 3);
//	printf("%06d\n", 3);
//
//	printf("%#8.0f\n",12345.6789);
//	printf("%#8.0g\n", 12345.6789);
//	return 0;
//}


//字符宽度
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n",PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//
//	return 0;
//}


//浮点型修饰符的组合
//int main(void)
//{
//	const double RENT = 3852.99;
//
//	printf("*%f*\n",RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3e*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
//	return 0;
//}


//字符串格式
#define 字符串 "Authentic imitation"
int main(void)
{
	printf("[%2s]\n",字符串);
	printf("[%24s]\n", 字符串);
	printf("[%24.5s]\n", 字符串);
	printf("[%-24.5s]\n", 字符串);
	
	return 0;
}