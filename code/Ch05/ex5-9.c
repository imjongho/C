#include <stdio.h>

int main(void)
{
   int a, b, c;

   printf("���� 3�� �Է�: ");
   scanf("%d %d %d", &a, &b, &c);

   printf("���� ū ��: %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
   // a, b�� ���� �� ū ���� �ٽ� c�� �񱳽�Ŵ

   return 0;
}