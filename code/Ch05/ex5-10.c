#include <stdio.h>

int main(void)
{
   int x, y;

   printf("�� ���� �Է�: ");
   scanf("%d %d", &x, &y);
   
   printf("�Է� �� x: %d, y: %d\n", x, y);
   x ^= y; // x = x ^ y
   y ^= x; // y = y ^ x
   x ^= y; // x = x ^ y
   printf("���� �� x: %d, y: %d\n", x, y);

   return 0;
}