#include "sum.h"

int main(void)
{
    int a, b, result;

    printf("ù��° ���� �Է� : ");
    scanf_s("%d", &a);
    printf("�ι�° ���� �Է� : ");
    scanf_s("%d", &b);

    result = sum(a, b);
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}