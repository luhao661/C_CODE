#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_5_5_H
#define CODE_5_5_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 40 /* 存储空间初始分配量 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;	/* ElemType类型根据实际情况而定，这里假设为int */

//把定义了一种类型(而不是变量！！)，类型的名字叫String，
//这种类型是长度为MAXSIZE+1的char数组。
typedef char String[MAXSIZE + 1]; /*  0号单元存放串的长度 */

//***注***不能拆开来写：
//typedef char String;
//String[MAXSIZE + 1];

Status StrAssign(String T, char* chars);
Status StrCopy(char T[MAXSIZE + 1], String S);
//等价于
//Status StrCopy(String, String S);
//***注***(补充知识)
//1、形参中的数组，不是数组元素，它是普通的数组指针变量
//2、形参数组:int a[100000],int a[], int *a对编译器而言，没有任何区别。编译器都是当做int *处理
//3、形参中的数组和非形参数组区别：形参中的数组时指针变量，非形参数组就是数组

Status StrEmpty(String S);
int StrCompare(String S, String T);
int StrLength(String S);
Status ClearString(String S);
Status Concat(String T, String S1, String S2);
Status SubString(String Sub, String S, int pos, int len);
int Index(String S, String T, int pos);
int Index2(String S, String T, int pos);
Status StrInsert(String S, int pos, String T);
Status StrDelete(String S, int pos, int len);
Status Replace(String S, String T, String V);
void StrPrint(String T);

#endif