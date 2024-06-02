#include <stdio.h>

int sum(int n);

int main(void)
{
   int i;
   for (i = 1; i <= 20; i++)
   {
      printf("1~%d까지의 합은 %d입니다.\n", i, sum(i));
   }
   
   return 0;
}

int sum(int n)    // 재귀 함수
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      return n + sum(n - 1);
   }
}