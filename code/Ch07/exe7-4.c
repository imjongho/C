#include <stdio.h>
#include <math.h>    // pow 사용

double S(int a, int n, double r);   // S = 총액

int main(void)
{
   int a, n;   // n = 기간(년), a = 원금
   double r;   // r = 이자율(실수)

   printf("원금, 기간, 이자율을 순서대로 입력: ");
   scanf("%d %d %lf", &a, &n, &r);

   printf("복리 총액 = %lf", S(a, n, r));  // 함수 S 호출

   return 0;
}

double S(int a, int n, double r)
{
   double result;
   result = a * pow((1 + r), n);
   return result;
}