#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include "3.6.h"
#include "stdlib.h"   //malloc(), rand()
#include "time.h"     //time()

static Status visit(ElemType c)//����Ϊstatic˵���ⲻ�ǽӿڵ�һ���֣���main�����������ļ����ɼ�
{
    printf("%d ", c);
    return OK;
}

/* ��ʼ����ʽ���Ա� */
Status InitList(LinkList* L)
{
    *L = (LinkList)malloc(sizeof(Node)); /* ����ͷ���,��ʹLָ���ͷ��� */

    if (!(*L)) /* �洢����ʧ�� */
        return ERROR;

    (*L)->next = NULL; /* ָ����Ϊ�� */

    return OK;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
Status ListEmpty(LinkList L)
{
    if (L->next)
        return FALSE;
    else
        return TRUE;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
Status ClearList(LinkList* L)
{
    LinkList temp1, temp2;

    temp1 = (*L)->next;           /*  pָ���һ����� */

    while (temp1)                /*  û����β */
    {
        temp2 = temp1->next;
        free(temp1);
        temp1 = temp2;
    }

    (*L)->next = NULL;        /* ͷ���ָ����Ϊ�� */

    return OK;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(LinkList L)
{
    int i = 0;
    LinkList p = L->next; /* pָ���һ����� */

    while (p)
    {
        i++;
        p = p->next;
    }
    return i;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* �����������e����L�е�i������Ԫ�ص�ֵ */
Status GetElem(LinkList L, int i, ElemType* e)
{
    int j;
    LinkList p;		/* ����һ���p */
    p = L->next;		/* ��pָ������L�ĵ�һ����� */
    j = 1;		/*  jΪ������ */

    while (p && j < i)  /* p��Ϊ�ջ��߼�����j��û�е���iʱ��ѭ������ */
    {
        p = p->next;  /* ��pָ����һ����� */
        ++j;
    }

    if (!p || j > i)
        return ERROR;  /*  ��i��Ԫ�ز����� */

    *e = p->data;   /*  ȡ��i��Ԫ�ص����� */
    
    return OK;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��� */
/* �������������L�е�1����e�����ϵ������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0 */
int LocateElem(LinkList L, ElemType e)
{
    int i = 0;
    LinkList p = L->next;

    while (p)
    {
        i++;
        if (p->data == e) /* �ҵ�����������Ԫ�� */
            return i;
        p = p->next;
    }

    return 0;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ���,1��i��ListLength(L)�� */
/* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
Status ListInsert(LinkList* L, int i, ElemType e)
{
    LinkList temp, s;
    int j;

    temp = *L;//tempһ��ʼ�����ָ��ͷ����ָ������
    j = 1;                                //��ͷ�ڵ����ʽ�洢�ṹ

    while (temp && j < i)     /* Ѱ�ҵ�i����� */
    {
        temp = temp->next;
        ++j;
    }
    //temp���i-1���ڵ�ĵ�ַ

    if (!temp || j > i)
        return ERROR;   /* ��i��Ԫ�ز����� */

    s = (LinkList)malloc(sizeof(Node));  /*  �����½��(C���Ա�׼����) */
    s->data = e;

    //�½ڵ��ָ�����ָ���ԭ����i���ڵ�ĵ�ַ
    //temp->next�����ԭ����i���ڵ�ĵ�ַ
    s->next = temp->next;      /* ��p�ĺ�̽��ĵ�ַ��ֵ��s�ĺ��  */

    //*****************ע**********************
    //�½ڵ�ĵ�ַ����ԭ����i��1���ڵ��ָ�����ָ��
    //temp->next���ڴ���ǲ�������Ľڵ�ĵ�ַ
    temp->next = s;          /* ��s��ֵ��p�ĺ�� */

    return OK;
}

/* ��ʼ��������ʽ���Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
/* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
Status ListDelete(LinkList* L, int i, ElemType* e)
{
    int j;
    LinkList temp, q;

    temp = *L;
    j = 1;
    
    while (temp->next && j < i)	/* ����Ѱ�ҵ�i��Ԫ�� */
    {
        temp = temp->next;
        ++j;
    }

    if (!(temp->next) || j > i)
        return ERROR;           /* ��i��Ԫ�ز����� */

    q = temp->next;
    temp->next = q->next;			/* ��q�ĺ�̸�ֵ��p�ĺ�� */
    *e = q->data;                        /* ��q����е����ݸ�e */

    free(q);                    /* ��ϵͳ���մ˽�㣬�ͷ��ڴ� */

    return OK;
}


/* ��ʼ��������ʽ���Ա�L�Ѵ��� */
/* ������������ζ�L��ÿ������Ԫ����� */
Status ListTraverse(LinkList L)
{
    LinkList p = L->next;

    while (p)
    {
        visit(p->data);
        p = p->next;
    }

    printf("\n");
    return OK;
}

/*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��ͷ�巨�� */
void CreateListHead(LinkList* L, int n)
{
    LinkList p;
    int i;

    srand(time(0));                         /* ��ʼ����������� */
    *L = (LinkList)malloc(sizeof(Node));
    //ͷ����ָ�����ָ������������Ϊ��
    (*L)->next = NULL;                      /*  �Ƚ���һ����ͷ���ĵ����� */

    for (i = 0; i < n; i++)
    {
        p = (LinkList)malloc(sizeof(Node)); /*  �����½�� */
        p->data = rand() % 100 + 1;             /*  �������100���ڵ����� */

        //ʼ�����½ڵ��ڵ�һ��λ��
        p->next = (*L)->next;
        (*L)->next = p;						/*  ���뵽��ͷ */
    }
}

/*  �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��β�巨�� */
void CreateListTail(LinkList* L, int n)
{
    LinkList p, r;
    int i;

    srand(time(0));                      /* ��ʼ����������� */
    *L = (LinkList)malloc(sizeof(Node)); /* LΪ�������Ա� */

    r = *L;                                /* rΪָ��β���Ľ�� */
    
    for (i = 0; i < n; i++)
    {
        p = (Node*)malloc(sizeof(Node)); /*  �����½�� */
        p->data = rand() % 100 + 1;           /*  �������100���ڵ����� */

        r->next = p;                        /* ����β�ն˽���ָ��ָ���½�� */
        //***ע***�ṹ������ĸ�ֵ����
        r = p;                            /* ����ǰ���½�㶨��Ϊ��β�ն˽�� */
    }
    r->next = NULL;                       /* ��ʾ��ǰ������� */
}

#endif