#include <stdio.h>

int F(int n);  // F = 피보나치 수

int main(void)
{
   int i;

   for (i = 0; i <= 21; i++)
   {
      printf("피보나치 수열 %d번째 수는 %d\n", i, F(i));
   }

   return 0;
}

int F(int n)   // 재귀 함수
{
   if (n == 0)
   {
      return 0;   // 0번째는 0
   }
   else if (n == 1)
   {
      return 1;   // 1번째는 1
   }
   else
   {
      return F(n - 1) + F(n - 2);   // 2부터 F(n-1)+F(n-2)
   }      
}