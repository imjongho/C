#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
   int a = 0, b = 0;

   printf("�� ���� �Է�: ");
   scanf("%d %d", &a, &b);

   printf("swap ��: %d\t%d\n", a, b);
   swap(&a, &b);    // �Լ� ȣ��
   printf("swap ��: %d\t%d\n", a, b);

   return 0;
}

// �������� �� ������ �ٲٴ� ����� ���� �Լ�
void swap(int* x, int* y)
{
   *x ^= *y;   // Ch05���� ������ ����
   *y ^= *x;   // x, y�� ���ڰ� ���� �ٲ�
   *x ^= *y;
}