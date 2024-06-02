#include <stdio.h>

int main(void)
{
   int a, b, c;

   printf("정수 3개 입력: ");
   scanf("%d %d %d", &a, &b, &c);

   printf("가장 큰 수: %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
   // a, b를 비교한 후 큰 쪽을 다시 c와 비교시킴

   return 0;
}