#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>//提供明示常量(也叫符号常量)CHAR_BIT 即char类型的位数
//
#if 1
#endif


//用位操作（按位运算符+移位运算符）显示计算机上存储的十进制数对应的二进制数据
#if 1
char* i_to_bs(int zhengshu, char *string);//声明一个整数转换成二进制数的函数(二进制数被存放于字符数组中)，形参是整数和指向char型的指针，返回值与传入指针的地址值相同，以便作为printf()的参数。
void show(int number,char *string);

int main(void)
{
	printf("本系统1字节的位数为%d\n", CHAR_BIT);
	printf("本系统int型数据占%zd个字节\n",sizeof(int));
	char erjinzhi[CHAR_BIT*sizeof(int)+1];//CHAR_BIT*sizeof(int),得出当前系统下的int型整数的二进制位数即8*4(该系统环境下1字节的位数乘以int的字节数)。这样写的好处是可移植性。
																	//+1是留给'\0'的空间
	int number;
	printf("请输入要显示为二进制数的整数：");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number,erjinzhi);
		show(number,erjinzhi);
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)
{
	int i;
	const static int size =CHAR_BIT * sizeof(int);

	for (i = size - 1;				 i >= 0;				 i--, zhengshu>>=1)
	{
		*(string + i) = (1 & zhengshu) + '0';//从数组的最后一个元素开始赋值
	}
	*(string + size) = '\0';

	return string;
}
void show(int number,char* string)
{
	printf("%d对应的二进制数据是：",number);

	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}
}
#endif