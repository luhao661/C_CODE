#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����������á�����Ԥ����֮ǰ�Գ�����з��룬��1.�ַ�ӳ�䵽Դ�ַ���2.ɾ����б��+[Enter]��ʵ��3.���ı����ֳ���������
#if 0
int/*�⿴��������һ���ո�*/ceshi;
int main(void)
{
	printf("����һ��\
���ı�");

	return 0;
}
#endif


//#defineԤ����ָ����÷�
#if 1
#define TWO 2
#define FOUR TWO*TWO
#define DAYIN1 printf("X��ֵΪ%d\n",X)
#define DAYIN2 "X��ֵ��%d\n"
#define MINYAN "consistency is the last refuge of the unimag\
native"																													//��б��+[Enter]�Ѹö������쵽��һ��


int main(void)
{
	int X = TWO;
	DAYIN1;

	X = FOUR;
	printf(DAYIN2,X);

	printf("%s\n",MINYAN);
	printf("TWO:MINYAN\n");

	return 0;
}
#endif
