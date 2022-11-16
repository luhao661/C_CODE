#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//“‘À≥–Ú¥Ê¥¢Ω·ππ µœ÷’ª(À≥–Ú’ª)
//¡¥Ω”4.4.c
#if 0
#include "4.4.h"

int main()
{
    int j;
    SqStack s;
    int e;

    if (InitStack(&s) == OK)
        for (j = 1; j <= 10; j++)
            Push(&s, j);

    printf("’ª÷–‘™Àÿ“¿¥ŒŒ™£∫");
    StackTraverse(s);

    Pop(&s, &e);
    printf("µØ≥ˆµƒ’ª∂•‘™Àÿ e=%d\n", e);

    printf("’ªø’∑Ò£∫%d(1:ø’ 0:∑Ò)\n", StackEmpty(s));

    GetTop(s, &e);
    printf("’ª∂•‘™Àÿ e=%d ’ªµƒ≥§∂»Œ™%d\n", e, StackLength(s));

    ClearStack(&s);
    printf("«Âø’’ª∫Û£¨’ªø’∑Ò£∫%d(1:ø’ 0:∑Ò)\n", StackEmpty(s));

    return 0;
}
#endif