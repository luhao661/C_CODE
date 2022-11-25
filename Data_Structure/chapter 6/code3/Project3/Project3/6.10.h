#define _CRT_SECURE_NO_WARNINGS 1

#ifndef CODE_6_7_2_H
#define CODE_6_7_2_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* �洢�ռ��ʼ������ */

typedef int Status;	/* Status�Ǻ���������,��ֵ�Ǻ������״̬����,��OK�� */
typedef char TElemType;
typedef enum { Link, Thread } PointerTag;	
					/* Link=0��ʾָ�����Һ���ָ��, */
					/* Thread=1��ʾָ��ǰ�����̵����� */
typedef  struct BiThrNode	/* ���������洢���ṹ */
{
	TElemType data;	/* ������� */
	struct BiThrNode* lchild, * rchild;	/* ���Һ���ָ�룬��ǰ����̵�ָ�� */
	PointerTag LTag;
	PointerTag RTag;		/* ���ұ�־ */
} BiThrNode, * BiThrTree;//�ڵ�ı�����ָ��ڵ��ָ��ı���

									//�ڵ��ָ���ָ��
Status CreateBiThrTree(BiThrTree* T);
Status InOrderThreading(BiThrTree* Thrt, BiThrTree T);
Status InOrderTraverse_Thr(BiThrTree T);
#endif