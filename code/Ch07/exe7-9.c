#include <stdio.h>

int fact(int n);
int factsum(int n);

int main(void)
{
   int n;

   printf("정수 n 입력: ");
   scanf("%d", &n);

   printf("0!~%d!까지의 합은 %d", n, factsum(n));

   return 0;
}

int fact(int n)   // 재귀 함수
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      return n * fact(n - 1);    // n! 구하기
   }
}

int factsum(int n)   // 재귀 함수
{
   if (n == 0)
   {
      return 1;
   }
   else
   {
      return fact(n) + factsum(n - 1);
      // n! + (n-1)! + (n-2)! ... + 1! + 0! 구하기
   }
}