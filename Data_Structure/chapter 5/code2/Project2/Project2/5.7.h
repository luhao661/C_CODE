#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_5_7_H
#define CODE_5_7_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;	/* ElemType类型根据实际情况而定，这里假设为int */

typedef char String[MAXSIZE + 1]; /*  0号单元存放串的长度 */

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