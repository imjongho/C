#include <stdio.h>

#define PI 3.141592
#define AREA PI * r * r
#define swap1(a)(a * a)
#define swap2(a)((a) * (a))

int main(void)
{
    float r;
    int num;

    printf("������ �Է� : ");
    scanf_s("%f", &r);

    printf("���� ���� : %f\n", AREA);

    printf("���� �Է� : ");
    scanf_s("%d", &num);

    printf("\n��ȣ ���� %d�� ������ %d\n", num, swap1(num));
    printf("��ȣ �ִ� %d�� ������ %d\n", num, swap2(num));
    printf("\n��ȣ ���� (%d + 5)�� ������ %d\n", num, swap1(num + 5));  // num + 5 * num + 5
    printf("��ȣ �ִ� (%d + 5)�� ������ %d\n", num, swap2(num + 5));    // (num + 5) * (num + 5)

    return 0;
}