#include <stdio.h>

int main(void)
{
   int x, y;

   printf("두 정수 입력: ");
   scanf("%d %d", &x, &y);
   
   printf("입력 후 x: %d, y: %d\n", x, y);
   x ^= y; // x = x ^ y
   y ^= x; // y = y ^ x
   x ^= y; // x = x ^ y
   printf("연산 후 x: %d, y: %d\n", x, y);

   return 0;
}