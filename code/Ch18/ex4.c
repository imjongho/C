#include <stdio.h>

int main(vod)
{
    int a, b;

#ifdef MAX      // MAX가 있는 경우
    a = 3;
#else
    a = 5;
#endif


#ifndef MAX     // MAX가 없는 경우(#ifdef와 정반대 개념)
    b = 3;
#else
    b = 5;
#endif


    printf("%d\n", a);
    printf("%d", b);

    return 0;
}