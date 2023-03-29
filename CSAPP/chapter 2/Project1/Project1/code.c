#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//2.1.3不同数据值的字节表示
#if 0
typedef char* byte_pointer;
void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void* x);

int main(void)
{
	int val = 12345;

	float f_val = (float)val;

	int* p = &val;

	show_int(val);
	show_float(f_val);
	show_pointer(p);

	return 0;
}
void show_bytes(byte_pointer start, size_t len)
{
	size_t i;

	for (i = 0; i < len; i++)
	{
		printf(" %.2x",start[i]);
	}

	putchar('\n');
}
void show_int(int x)
{
	show_bytes((byte_pointer)&x,sizeof(x));
}
void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(x));
}
//可以写成：
//void show_pointer(int* x)
void show_pointer(void* x)
{
	show_bytes((byte_pointer)&x, sizeof(x));
}
//C++可以把任意类型的指针赋给指向 void的指针，这点与C相同。
//但是不同的是，只有使用显式强制类型转换才能把指向void的指针赋给其他类型的指针。
#endif


//2.2.8.1无符号数的运算           
//找出代码的bug
#if 0
float sum_elements(float a[], unsigned length);

int main(void)
{
	float data[] = {1.1, 2.2, 3.3};

	float res=sum_elements(data,sizeof data/sizeof (float));

	printf("%.2f",res);

	return 0;
}
float sum_elements(float a[], unsigned length)
{								//unsigned无符号数
	int i = 0;
	float result = 0;

	for (i = 0; i <= length - 1; i++)//length - 1将使用无符号数运算，当length为0时
	{												//0-1相当于0补+(-1补)得到UMax
		result += a[i];						//而后来的比较运算，也使用无符号数比较
	}												//结果总为真
	//修改：length声明为int
	//或修改为i<length
	return result;
}
//***注***
//存储在计算机中的数据是一定的，所谓的无符号数，
//只是对于数据的解读方式不一样，并不影响数据之间的计算。
//而无符号数之间进行的加减法运算，是通过补码来进行的。
//比如a - b，实质上是a补 + (-b补)。
//https://blog.csdn.net/LightInDarkness/article/details/105582031
#endif


//2.2.8.2 size_t会造成的bug
#if 0
#include <string.h>
int strlonger(char *s,char* t);

int main(void)
{
	char* s = "abc";
	char* t = "1234";

	int len = strlonger(s,t);

	printf("%d",len);

	return 0;
}
int strlonger(char* s, char* t)
{
	return strlen(s) - strlen(t) > 0;//strlen()返回的size_t是无符号数，
													//会进行无符号数的相减运算，还有无符号数的比较
													//然后会出现2.2.8.1的情况
//修改：
	//return strlen(s) - strlen(t);
}
#endif		