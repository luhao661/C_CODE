#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用KMP模式匹配算法
//链接5.7.c
#if 1
#include "5.7.h"
#include <stdlib.h>

int main()
{
	int i, * p;
	String s1, s2;

	StrAssign(s1, "abcdex");
	printf("子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("Next为: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "abcabx");
	printf("子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("Next为: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "ababaaaba");
	printf("子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("Next为: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "aaaaaaaab");
	printf("子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("Next为: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "ababaaaba");
	printf("   子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("   Next为: ");
	NextPrint(p, StrLength(s1));
	get_nextval(s1, p);
	printf("NextVal为: ");
	NextPrint(p, StrLength(s1));
	printf("\n");

	StrAssign(s1, "aaaaaaaab");
	printf("   子串为: ");
	StrPrint(s1);
	i = StrLength(s1);
	p = (int*)malloc((i + 1) * sizeof(int));
	get_next(s1, p);
	printf("   Next为: ");
	NextPrint(p, StrLength(s1));
	get_nextval(s1, p);
	printf("NextVal为: ");
	NextPrint(p, StrLength(s1));

	printf("\n");

	StrAssign(s1, "00000000000000000000000000000000000000000000000001");
	printf("主串为: ");
	StrPrint(s1);
	StrAssign(s2, "0000000001");
	printf("子串为: ");
	StrPrint(s2);
	printf("\n");
	printf("主串和子串在第%d个字符处首次匹配（朴素模式匹配算法）\n", Index(s1, s2, 1));
	printf("主串和子串在第%d个字符处首次匹配（KMP算法） \n", Index_KMP(s1, s2, 1));
	printf("主串和子串在第%d个字符处首次匹配（KMP改良算法） \n", Index_KMP1(s1, s2, 1));

	return 0;
}
#endif
