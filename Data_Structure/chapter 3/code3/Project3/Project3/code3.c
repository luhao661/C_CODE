#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���Ա���α�ʵ�ַ�(��̬����)
//����3.12.c
#if 0
#include "3.12.h"

int main()
{
    StaticLinkList L;
    Status i;

    i = InitList(L);
    printf("��ʼ��L��L.length=%d\n", ListLength(L));

    i = ListInsert(L, 1, 'F');
    i = ListInsert(L, 1, 'E');
    i = ListInsert(L, 1, 'D');
    i = ListInsert(L, 1, 'B');
    i = ListInsert(L, 1, 'A');

    printf("\n��L�ı�ͷ���β���FEDBA��\nL.data=");
    ListTraverse(L);

    i = ListInsert(L, 3, 'C');
    printf("\n��L�ġ�B���롰D��֮����롰C����\nL.data=");
    ListTraverse(L);

    i = ListDelete(L, 1);
    printf("\n��L��ɾ����A����\nL.data=");
    ListTraverse(L);

    printf("\n");

    return 0;
}

#endif