#include "ex2.h"

int main(void)
{
    printf("�й� : %d\n", SNO);
    printf("���� : %s\n", NAME);
    printf("���� : %d\n", AGE);

#undef AGE
#define AGE 19

    printf("���� : %d\n", AGE);

    return 0;
}