#include <stdio.h>

#define PI 3.141592
#define AREA PI * r * r
#define swap1(a)(a * a)
#define swap2(a)((a) * (a))

int main(void)
{
    float r;
    int num;

    printf("반지름 입력 : ");
    scanf_s("%f", &r);

    printf("원의 넓이 : %f\n", AREA);

    printf("정수 입력 : ");
    scanf_s("%d", &num);

    printf("\n괄호 없는 %d의 제곱은 %d\n", num, swap1(num));
    printf("괄호 있는 %d의 제곱은 %d\n", num, swap2(num));
    printf("\n괄호 없는 (%d + 5)의 제곱은 %d\n", num, swap1(num + 5));  // num + 5 * num + 5
    printf("괄호 있는 (%d + 5)의 제곱은 %d\n", num, swap2(num + 5));    // (num + 5) * (num + 5)

    return 0;
}