#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <stdio.h>
#include "3.12.h"

static Status visit(ElemType c)
{
    printf("%c ", c);
    return OK;
}

/* ��һά����space�и���������һ����������space[0].curΪͷָ�룬"0"��ʾ��ָ�� */
Status InitList(StaticLinkList space)
{
    int i;
    for (i = 0; i < MAXSIZE - 1; i++)
        space[i].cur = i + 1;

    space[MAXSIZE - 1].cur = 0; /* Ŀǰ��̬����Ϊ�գ����һ��Ԫ�ص�curΪ0 */
    return OK;
}


/* �����ÿռ�����ǿգ��򷵻ط���Ľ���±꣬���򷵻�0 */
int Malloc_SSL(StaticLinkList space)
{
    int i = space[0].cur;           		/* ��ǰ�����һ��Ԫ�ص�cur���ֵ */
                                            /* ����Ҫ���صĵ�һ�����ÿ��е��±� */
    if (space[0].cur)
        space[0].cur = space[i].cur;       /* ����Ҫ�ó�һ��������ʹ���ˣ� */
                                            /* �������Ǿ͵ð�������һ�� */
                                            /* �������������� */
    return i;
}


/*  ���±�Ϊk�Ŀ��н����յ��������� */
void Free_SSL(StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;    /* �ѵ�һ��Ԫ�ص�curֵ����Ҫɾ���ķ���cur */
    space[0].cur = k;               /* ��Ҫɾ���ķ����±긳ֵ����һ��Ԫ�ص�cur */
}

/* ��ʼ��������̬����L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(StaticLinkList L)
{
    int j = 0;
    int i = L[MAXSIZE - 1].cur;
    while (i)
    {
        i = L[i].cur;
        j++;
    }
    return j;
}

/*  ��L�е�i��Ԫ��֮ǰ�����µ�����Ԫ��e   */
Status ListInsert(StaticLinkList L, int i, ElemType e)
{
    int free_element_index, find_element_index, j;

    find_element_index = MAXSIZE - 1;   /* ע��find_element_index���������һ��Ԫ�ص��±� */

    if (i < 1 || i > ListLength(L) + 1)
        return ERROR;

    free_element_index = Malloc_SSL(L);   /* ��ÿ��з������±� */

    if (free_element_index)
    {
        L[free_element_index].data = e;   /* �����ݸ�ֵ���˷�����data */

        for (j = 1; j <= i - 1; j++)   /* �ҵ���i��Ԫ��֮ǰ��λ�� */
            find_element_index = L[find_element_index].cur;

        L[free_element_index].cur = L[find_element_index].cur;    /* �ѵ�i��Ԫ��֮ǰ��cur��ֵ����Ԫ�ص�cur */
        L[find_element_index].cur = free_element_index;           /* ����Ԫ�ص��±긳ֵ����i��Ԫ��֮ǰԪ�ص�ur */
        return OK;
    }
    return ERROR;
}

/*  ɾ����L�е�i������Ԫ��   */
Status ListDelete(StaticLinkList L, int i)
{
    int j, find_element_index;

    if (i < 1 || i > ListLength(L))
        return ERROR;

    find_element_index = MAXSIZE - 1;

    for (j = 1; j <= i - 1; j++)
        find_element_index = L[find_element_index].cur;

    j = L[find_element_index].cur;
    L[find_element_index].cur = L[j].cur;

    Free_SSL(L, j);

    return OK;
}

Status ListTraverse(StaticLinkList L)
{
    int j = 0;
    int i = L[MAXSIZE - 1].cur;
    while (i)
    {
        visit(L[i].data);
        i = L[i].cur;
        j++;
    }

    printf("\n");
    return OK;
}

#endif