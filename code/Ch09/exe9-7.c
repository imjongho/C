#include <stdio.h>

int callCountReturn(void);

int main(void)
{
   int n = 0, i = 0, count = 0;

   printf("몇 번 함수를 호출할 것인가?\n");
   scanf("%d", &n);
   
   for (i = 0; i < n; i++)
   {
      printf("%d번째 호출\n", i + 1);
      count = callCountReturn();
   }

   printf("함수 자신이 호출된 총 횟수 = %d\n", count);

   return 0;
}

int callCountReturn(void)     // 함수 자신?
{
   static int callCount = 0;  // 정적 지역변수
   return ++callCount;        // 값이 유지됨
}