#include <stdio.h>

int main(vod)
{
    int a, b;

#ifdef MAX      // MAX�� �ִ� ���
    a = 3;
#else
    a = 5;
#endif


#ifndef MAX     // MAX�� ���� ���(#ifdef�� ���ݴ� ����)
    b = 3;
#else
    b = 5;
#endif


    printf("%d\n", a);
    printf("%d", b);

    return 0;
}