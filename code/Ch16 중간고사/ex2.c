#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    int x;
    int y;
}P;

int line(P s1);

int main(void)
{
    P a;
    int result;

    printf("������ : ");
    scanf_s("%d", &a.x);
    printf("���� : ");
    scanf_s("%d", &a.y);

    result = line(a);
    printf("������ ���� = %d", result);

}

int line(P s1)
{
    int result;
    result = s1.x - s1.y;
    return abs(result);
}