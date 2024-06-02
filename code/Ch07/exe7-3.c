#include <stdio.h>

#define PHI 3.14  // 매크로 이용

double area(double r);           // area = 원의 면적, 함수원형
double circumference(double r);  // circumference = 원의 둘레

int main(void)
{
   double r;

   printf("반지름 r 입력(실수): ");
   scanf("%lf", &r);

   printf("area = %.3lf\n", area(r));
   printf("circumference = %.3lf\n", circumference(r));
   // 함수 호출

   return 0;
}

double area(double r)   // area 함수정의
{
   return (PHI * r * r);
}

double circumference(double r)   // cirsumference 함수정의
{
   return (2 * PHI * r);
}