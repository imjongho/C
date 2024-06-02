#include "sum.h"

int main(void)
{
    int a, b, result;

    printf("첫번째 정수 입력 : ");
    scanf_s("%d", &a);
    printf("두번째 정수 입력 : ");
    scanf_s("%d", &b);

    result = sum(a, b);
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}