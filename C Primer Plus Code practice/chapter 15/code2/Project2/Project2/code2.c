#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 0
//��ϰ��
//7.a
struct muban1							//�����������ṹλ�ֶΣ����ѵ�һλ�ֶ��������λ��
{
	unsigned int ruanpan : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int yinban : 2;
};
//7.b
struct muban2							//�����������ṹλ�ֶΣ����ѵ�һλ�ֶ��������λ��
{
	unsigned int yinban : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int ruanpan : 2;
};
#endif