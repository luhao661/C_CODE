#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include "3.4.h"

/* ��ʼ��˳�����Ա� */
Status InitList(SqList* L)
{
    L->length = 0;
    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
Status ListIsEmpty(SqList L)
{
    if (L.length == 0)
        return TRUE;
    else
        return FALSE;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(SqList* L)
{
    L->length = 0;
    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(SqList L)
{
    return L.length;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* �����������e����L�е�i������Ԫ�ص�ֵ,ע��i��ָλ�ã���1��λ�õ������Ǵ�0��ʼ */
Status GetElem(SqList L, int i, ElemType* e)
{
    if (L.length == 0 || i<1 || i>L.length)
        return ERROR;

    *e = L.data[i - 1];

    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
int LocateElem(SqList L, ElemType e)
{
    int i;
    if (L.length == 0)
        return 0;

    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
            break;//�ҵ�Ԫ��e�����˳�ѭ�������� i ��ֵ��������1
    }
    if (i >= L.length)
        return 0;

    return i + 1;
}

/* ��ʼ������˳�����Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(SqList* L, int i, ElemType e)
{
    int k;

    //�ܲ���������
    if (L->length == MAXSIZE)  /* ˳�����Ա��Ѿ��� */
        return ERROR;
    //�������ݵ��ĸ�λ��
    if (i<1 || i>L->length + 1)/* ��i�ȵ�һλ��С���߱����һλ�ú�һλ�û�Ҫ��ʱ */
        return ERROR;

    //***ע***
    //������ʵ������Ԫ�صĴ洢����������Ԫ�غ�Ҫ��ĳЩԪ�ؽ�����λ����
    if (i <= L->length)        /* ����������λ�ò��ڱ�β */
    {       //�����һ������Ԫ�ؿ�ʼ��λ
        for (k = L->length - 1; k >= i - 1; k--)  /* ��Ҫ����λ��֮�������Ԫ������ƶ�һλ */
            L->data[k + 1] = L->data[k];
    }

    L->data[i - 1] = e;          /* ����Ԫ�ز��� */
    L->length++;

    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(SqList* L, int i, ElemType* e)
{
    int k;
    //��ɾ����
    if (L->length == 0)               /* ���Ա�Ϊ�� */
        return ERROR;
    //ɾ�ĸ�λ��
    if (i<1 || i>L->length)         /* ɾ��λ�ò���ȷ */
        return ERROR;

    *e = L->data[i - 1];

    if (i < L->length)                /* ���ɾ���������λ�� */
    {   //��ɾ����Ԫ�صĺ�һ��Ԫ�ؿ�ʼ��λ
        for (k = i; k < L->length; k++)/* ��ɾ��λ�ú��Ԫ��ǰ�� */
            L->data[k - 1] = L->data[k];
    }

    L->length--;
    return OK;
}

Status visit(ElemType c)
{
    printf("%d ", c);
    return OK;
}

/* ��ʼ������˳�����Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(SqList L)
{
    int i;
    for (i = 0; i < L.length; i++)
        visit(L.data[i]);

    printf("\n");
    return OK;
}

/*�����е������Ա�Lb�е�����La�е�����Ԫ�ز��뵽La��*/
void unionL(SqList* La, SqList Lb)
{
    int La_len, Lb_len, i;

    ElemType e;                        /*������La��Lb��ͬ������Ԫ��e*/

    La_len = ListLength(*La);            /*�����Ա�ĳ��� */
    Lb_len = ListLength(Lb);

    for (i = 1; i <= Lb_len; i++)
    {
        GetElem(Lb, i, &e);              /*ȡLb�е�i������Ԫ�ظ���e*/

        if (!LocateElem(*La, e))        /*La�в����ں�e��ͬ����Ԫ��*/
        {
            ListInsert(La, ++La_len, e); /*����*/
            //La->length++; //***ע***ListInsert()�����ܵ�������
        }
    }
}

#endif