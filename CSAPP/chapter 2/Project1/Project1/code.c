#define _CRT_SECURE_NO_WARNINGS 1

//2.1.3��ͬ����ֵ���ֽڱ�ʾ
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
//����д�ɣ�
//void show_pointer(int* x)
void show_pointer(void* x)
{
	show_bytes((byte_pointer)&x, sizeof(x));
}
//C++���԰��������͵�ָ�븳��ָ�� void��ָ�룬�����C��ͬ��
//���ǲ�ͬ���ǣ�ֻ��ʹ����ʽǿ������ת�����ܰ�ָ��void��ָ�븳���������͵�ָ�롣
#endif