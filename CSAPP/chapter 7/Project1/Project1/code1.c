//P472
//��֤�������һ��ģ����xδ����ʼ��
//��ô��������ѡ����һ��ģ���ж����ǿ����
//����mokuai1.c
#if 0
#include <stdio.h>

void f(void);

int x=15213;

int main(void)
{
	f();

	printf("x=%d\n",x);

	return 0;
}
#endif


//P473
//��֤�����������ģ����x��δ����ʼ��
//��ô������������ѡ��һ��������
//����mokuai1.c
#if 0
#include <stdio.h>

void f(void);

int x;

int main(void)
{
	f();

	printf("x=%d\n", x);

	return 0;
}
#endif


//P473 �ظ��ķ��Ŷ��廹�в�ͬ������
//����mokuai2.c
#if 1
#include <stdio.h>

void f(void);

int y = 15212;
int x = 15213;

int main(void)
{
	f();

	printf("x=0x%x    y=0x%x \n",x,y);

	return 0;
}
#endif