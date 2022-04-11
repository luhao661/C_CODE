#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void main(void)
//{
//	/*float a = 6.0f;
//	printf("%.1f",a);
//	return 0;*/
//	long a = 100000;
//	printf("%ld\n",a);
//	printf("\\040\n");
//	float log = 2.71828;
//	printf("%.5f",log);
//}


//第一题
//int main(void)
//{
//	int a=2147483647;
//	float b = 3e38f;
//	float c = 0.123e-10f;
//	printf("a=%d,a+1=%d\n",a,a+1);//整数上溢（超过了long型表示的范围）
//	printf("b=%f\n",b);							//浮点数上溢
//	printf("c/2=%f\n\n",c/2);				//浮点数下溢
//	return 0;
//}


//第二题
//int main(void)
//{
//	int a;
//	printf("请输入一个ASCII码值:____\b\b\b\b");
//	scanf("%d",&a);
//	printf("\n\t对应的字符是%c",a);
//	printf("\r哈哈!\n\n\n");
//	return 0;
//}

//第三题
//int main(void)
//{
//	printf("\aStartled by the sudden sound, Sally shouted,");      //或：char ch='\a';   printf("%c",ch);
//	printf("\n\"By the Great Pumpkin, What was that!\"");
//	return 0;
//}


//第四题
//int main(void)
//{
//	float a;
//	printf("Enter a floating-point value:");
//	scanf("%f",&a);
//	printf("fixed-point notation :%f",a);
//	printf("\nexponential notation :%e",a);
//	printf("\np notation :%.2a\n\n\n",a);
//	return 0;
//}


//第五题
/*int main(void)
{
	float a;
	float b=3.156e7f;
	
	printf("请输入你的年龄：____\b\b\b");
	scanf("%f",&a);
	printf("该年龄对应的秒数是：%.0f秒\n\n",a*b);

	return 0;
}*/


//第六题
int main(void)                                                              //法二：在开头用#define 
{
	float a;
	
	printf("请输入水的夸脱数：_____\b\b\b\b\b");
	scanf("%f",&a);
	float b = a * 950;
	float c = 3.0e-23;
	printf("\n其中水分子的数量是%e\n\n",b/c);

	return 0;
}


//第七题
//int main(void)
//{
//	float a;
//	printf("请输入身高（英寸）：______\b\b\b\b\b");
//	scanf("%f",&a);
//	printf("你的身高是%.2f厘米\n\n",a*2.54);
//
//	return 0;
//}


//第八题
//int main(void)
//{
//	//float a;
//	//printf("请输入杯数：______\b\b\b\b\b");
//	//scanf("%f",&a);
//	//printf("%.1f品脱\n",a/2);
//	//printf("%.1f盎司\n",a*8);
//	//printf("%.1f汤勺\n", a*16);
//	//printf("%.1f茶勺\n", a*16*3);
//	//getchar();
//	//return 0;
//	
//}

