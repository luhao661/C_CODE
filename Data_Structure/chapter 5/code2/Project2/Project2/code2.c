#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ��KMPģʽƥ���㷨
//����5.7.c
#if 1
#include "5.7.h"
#include <stdlib.h>

int main()
{
	int i, * p;
	String s1, s2;

	StrAssign(s1, "abcdex");
	printf("�Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("NextΪ: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "abcabx");
	printf("�Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("NextΪ: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "ababaaaba");
	printf("�Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("NextΪ: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "aaaaaaaab");
	printf("�Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("NextΪ: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "ababaaaba");
	printf("   �Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("   NextΪ: ");
	NextPrint(p, StrLength(s1));
	get_nextval(s1, p);
	printf("NextValΪ: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "aaaaaaaab");
	printf("   �Ӵ�Ϊ: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("   NextΪ: ");
	NextPrint(p, StrLength(s1));
	get_nextval(s1, p);
	printf("NextValΪ: ");
	NextPrint(p, StrLength(s1));

	printf("\n");

	StrAssign(s1, "00000000000000000000000000000000000000000000000001");
	printf("����Ϊ: ");
	StrPrint(s1);
	StrAssign(s2, "0000000001");
	printf("�Ӵ�Ϊ: ");
	StrPrint(s2);
	printf("\n");
	printf("�������Ӵ��ڵ�%d���ַ����״�ƥ�䣨����ģʽƥ���㷨��\n", Index(s1, s2, 1));
	printf("�������Ӵ��ڵ�%d���ַ����״�ƥ�䣨KMP�㷨�� \n", Index_KMP(s1, s2, 1));
	printf("�������Ӵ��ڵ�%d���ַ����״�ƥ�䣨KMP�����㷨�� \n", Index_KMP1(s1, s2, 1));

	return 0;
}
#endif
