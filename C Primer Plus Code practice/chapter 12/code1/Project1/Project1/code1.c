#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����еı������ڲ���еı���ͬ�������
#if 0
int main(void)
{
	int x = 30;
	printf("x�����飺ֵΪ%d��ַΪ%p\n",x,&x);
	
	{
		int x = 77;
		printf("x���ڲ�飺ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	while (x++ < 33)//�����xΪ30ʱ���룬x��Ϊ31��������������xΪ33ʱ�ж�Ϊ�ٲ����룬x��Ϊ34��
	{
		int x = 100;
		x++;
		printf("x��whileѭ���У�ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	return 0;
}
#endif


//�µ�C99�����
#if 0
int main(void)
{
	int n = 8;
	printf("�����n=%d����ַ��p=%p\n",n,&n);

	for (int n = 1; n < 3; n++)
		printf("��һ��forѭ��������n=%d����ַ��p=%p\n",n,&n);

	printf("��һ��forѭ��������n=%d����ַ��p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);
		int n = 6;
		printf("�ڶ���forѭ�����±���n=%d����ַ��p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);


	return 0;
}
#endif


//ʹ�þֲ���̬��������������ľ�̬���������������������Ӿ�̬�洢�ڣ�
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("��������%d:\n",count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay ;//��δ��ʼ����̬������Ĭ��ֵΪ0
	printf("fade=%d     stay=%d\n",fade++,stay++);
}
#endif


//ʹ���ⲿ�������ⲿ���ӵľ�̬������
#if 1
int shuzi;
void ceshi(void);
int main(void)
{
	puts("����������:");
	scanf("%d",&shuzi);

	while (shuzi != 66)
	{		
		ceshi();
	}
	puts("����ˣ�");

	return 0;
}
void ceshi(void)
{
	printf("��������ֲ��ԣ����������룡\n");
	scanf("%d", &shuzi);
}
#endif

