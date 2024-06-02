#include <stdio.h>

int main(void)
{
   int i, sum = 0;

   int a[6] = { 14, 28, 57, 94, 19, 9 };  // 배열 초기화

   for (i = 0; i < 6; i++)    
   {
      sum += a[i];                        // 배열의 총합
      printf("a[%d] = %d\n", i, a[i]);    // 배열을 출력
   }

   printf("\n총합 = %d, 평균 = %.2lf이다.\n", sum, (double)sum / 6);
   // 배열의 평균 = 총합 / 원소 수

   return 0;
}