#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>//�ṩ��ʾ����(Ҳ�з��ų���)CHAR_BIT ��char���͵�λ��
//
#if 1
#endif


//��λ��������λ�����+��λ���������ʾ������ϴ洢��ʮ��������Ӧ�Ķ���������
#if 1
char* i_to_bs(int zhengshu, char *string);//����һ������ת���ɶ��������ĺ���(����������������ַ�������)���β���������ָ��char�͵�ָ�룬����ֵ�봫��ָ��ĵ�ֵַ��ͬ���Ա���Ϊprintf()�Ĳ�����
void show(int number,char *string);

int main(void)
{
	printf("��ϵͳ1�ֽڵ�λ��Ϊ%d\n", CHAR_BIT);
	printf("��ϵͳint������ռ%zd���ֽ�\n",sizeof(int));
	char erjinzhi[CHAR_BIT*sizeof(int)+1];//CHAR_BIT*sizeof(int),�ó���ǰϵͳ�µ�int�������Ķ�����λ����8*4(��ϵͳ������1�ֽڵ�λ������int���ֽ���)������д�ĺô��ǿ���ֲ�ԡ�
																	//+1������'\0'�Ŀռ�
	int number;
	printf("������Ҫ��ʾΪ����������������");
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
		*(string + i) = (1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ
	}
	*(string + size) = '\0';

	return string;
}
void show(int number,char* string)
{
	printf("%d��Ӧ�Ķ����������ǣ�",number);

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