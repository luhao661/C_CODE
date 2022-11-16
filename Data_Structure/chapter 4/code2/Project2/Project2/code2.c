#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//顺序存储结构的两栈(顺序栈)共享存储空间
//链接4.5.c
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

    printf("栈中元素依次为：");
    StackTraverse(s);

    printf("当前栈中元素有：%d \n", StackLength(s));

    Pop(&s, &e, 2);
    printf("弹出的栈顶元素 e=%d\n", e);
    printf("栈空否：%d(1:空 0:否)\n", StackEmpty(s));

    for (j = 6; j <= MAXSIZE - 2; j++)
        Push(&s, j, 1);

    printf("栈中元素依次为：");
    StackTraverse(s);

    printf("栈满否：%d(1:否 0:满)\n", Push(&s, 100, 1));


    ClearStack(&s);
    printf("清空栈后，栈空否：%d(1:空 0:否)\n", StackEmpty(s));

    return 0;
}
#endif
