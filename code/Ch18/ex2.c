#include "ex2.h"

int main(void)
{
    printf("학번 : %d\n", SNO);
    printf("성명 : %s\n", NAME);
    printf("나이 : %d\n", AGE);

#undef AGE
#define AGE 19

    printf("나이 : %d\n", AGE);

    return 0;
}