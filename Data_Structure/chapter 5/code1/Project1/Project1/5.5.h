#define _CRT_SECURE_NO_WARNINGS 1

#ifndef  CODE_5_5_H
#define CODE_5_5_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 40 /* �洢�ռ��ʼ������ */

typedef int Status;		/* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;	/* ElemType���͸���ʵ������������������Ϊint */

//�Ѷ�����һ������(�����Ǳ�������)�����͵����ֽ�String��
//���������ǳ���ΪMAXSIZE+1��char���顣
typedef char String[MAXSIZE + 1]; /*  0�ŵ�Ԫ��Ŵ��ĳ��� */

//***ע***���ܲ���д��
//typedef char String;
//String[MAXSIZE + 1];

Status StrAssign(String T, char* chars);
Status StrCopy(char T[MAXSIZE + 1], String S);
//�ȼ���
//Status StrCopy(String, String S);
//***ע***(����֪ʶ)
//1���β��е����飬��������Ԫ�أ�������ͨ������ָ�����
//2���β�����:int a[100000],int a[], int *a�Ա��������ԣ�û���κ����𡣱��������ǵ���int *����
//3���β��е�����ͷ��β����������β��е�����ʱָ����������β������������

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