#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_5_7_H
#define CODE_5_7_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;	/* ElemType���͸���ʵ������������������Ϊint */

typedef char String[MAXSIZE + 1]; /*  0�ŵ�Ԫ��Ŵ��ĳ��� */

Status StrAssign(String T, char* chars);
Status ClearString(String S);
void StrPrint(String T);
void NextPrint(int next[], int length);
int StrLength(String S);
int Index(String S, String T, int pos);
void get_next(String T, int* next);
int Index_KMP(String S, String T, int pos);
void get_nextval(String T, int* nextval);
int Index_KMP1(String S, String T, int pos);

#endif