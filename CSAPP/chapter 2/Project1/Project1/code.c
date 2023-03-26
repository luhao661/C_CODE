#define _CRT_SECURE_NO_WARNINGS 1

//2.1.3不同数据值的字节表示
#if 1
#include <stdio.h>

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