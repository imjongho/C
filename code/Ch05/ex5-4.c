#include <stdio.h>

int main(void)
{
   const double PHI = 3.14; // 원주율 상수 선언 
   double r, area, circum; // 반지름: r 원의 넓이: area, 원의 둘레: circum

   printf("반지름 입력: ");
   scanf("%lf", &r);
   
   area = PHI * r * r; // 원의 넓이 구하기
   circum = 2 * PHI * r; // 원의 둘레 구하기

   printf("원의 넓이: %lf\n원의 둘레: %lf\n", area, circum);

   return 0;
}