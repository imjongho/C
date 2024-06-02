#include <stdio.h>

double degree(double C);   // 함수원형

int main(void)
{
   double C;

   for (C = -20; C <= 100; C += 10)
   {
      printf("섭씨 %.2lf도는 화씨 %.2lf도\n", C, degree(C));
      // 함수 degree 호출
   }

   return 0;
}

double degree(double C)    // 함수 정의
{
   double F;
   F = ((double)9/5) * C + 32;   // 화씨온도 계산식
   return F;
}
