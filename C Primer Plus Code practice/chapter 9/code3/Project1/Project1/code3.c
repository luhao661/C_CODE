#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�鿴�������洢�ںδ�
#if 0
void beidiaohanshu(void);
int main(void)
{
	int a, b;
	a = 1, b = 2;

	printf("��main�����У�a��ַΪ%p��b��ַΪ%p\n",&a,&b);
	beidiaohanshu();

	return 0;
}
void beidiaohanshu(void)
{
	int a, b;
	a = 1, b = 2;

	printf("�ڱ��������У�a��ַΪ%p��b��ַΪ%p\n", &a, &b);
}

#endif


//ʹ��returnֻ�ܴ���һ��������ֵ���޷���������������ֵ������
//ʹ��ָ������������������ֵ������
#if 1
void jiaohuan(int *, int *);  //��д��void jiaohuan(int, int);    �򱻵�����������Ч��
int main(void)
{
	int x = 5, y = 10;
	printf("ԭ����x=%d��y=%d\n",x,y);
	jiaohuan(&x,&y);
	printf("���ڣ�x=%d��y=%d\n",x,y);

	return 0;
}
void jiaohuan(int * x, int * y)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}
#endif
