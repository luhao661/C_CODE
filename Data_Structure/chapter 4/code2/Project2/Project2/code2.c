#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//˳��洢�ṹ����ջ(˳��ջ)����洢�ռ�
//����4.5.c
#if 0
#include "4.5.h"

int main()
{
    int j;
    SqDoubleStack s;
    int e;
    if (InitStack(&s) == OK)
    {
        for (j = 1; j <= 5; j++)
            Push(&s, j, 1);
        for (j = MAXSIZE; j >= MAXSIZE - 2; j--)
            Push(&s, j, 2);
    }

    printf("ջ��Ԫ������Ϊ��");
    StackTraverse(s);

    printf("��ǰջ��Ԫ���У�%d \n", StackLength(s));

    Pop(&s, &e, 2);
    printf("������ջ��Ԫ�� e=%d\n", e);
    printf("ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

    for (j = 6; j <= MAXSIZE - 2; j++)
        Push(&s, j, 1);

    printf("ջ��Ԫ������Ϊ��");
    StackTraverse(s);

    printf("ջ����%d(1:�� 0:��)\n", Push(&s, 100, 1));


    ClearStack(&s);
    printf("���ջ��ջ�շ�%d(1:�� 0:��)\n", StackEmpty(s));

    return 0;
}
#endif
