#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//2.1.3��ͬ����ֵ���ֽڱ�ʾ
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
//����д�ɣ�
//void show_pointer(int* x)
void show_pointer(void* x)
{
	show_bytes((byte_pointer)&x, sizeof(x));
}
//C++���԰��������͵�ָ�븳��ָ�� void��ָ�룬�����C��ͬ��
//���ǲ�ͬ���ǣ�ֻ��ʹ����ʽǿ������ת�����ܰ�ָ��void��ָ�븳���������͵�ָ�롣
#endif


//2.2.8.1�޷�����������           
//�ҳ������bug
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
{								//unsigned�޷�����
	int i = 0;
	float result = 0;

	for (i = 0; i <= length - 1; i++)//length - 1��ʹ���޷��������㣬��lengthΪ0ʱ
	{												//0-1�൱��0��+(-1��)�õ�UMax
		result += a[i];						//�������ıȽ����㣬Ҳʹ���޷������Ƚ�
	}												//�����Ϊ��
	//�޸ģ�length����Ϊint
	//���޸�Ϊi<length
	return result;
}
//***ע***
//�洢�ڼ�����е�������һ���ģ���ν���޷�������
//ֻ�Ƕ������ݵĽ����ʽ��һ��������Ӱ������֮��ļ��㡣
//���޷�����֮����еļӼ������㣬��ͨ�����������еġ�
//����a - b��ʵ������a�� + (-b��)��
//https://blog.csdn.net/LightInDarkness/article/details/105582031
#endif


//2.2.8.2 size_t����ɵ�bug
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
	return strlen(s) - strlen(t) > 0;//strlen()���ص�size_t���޷�������
													//������޷�������������㣬�����޷������ıȽ�
													//Ȼ������2.2.8.1�����
//�޸ģ�
	//return strlen(s) - strlen(t);
}
#endif		