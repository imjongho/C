#include <stdio.h>
#include <math.h>    // sqrt와 pow 사용

double c(double a, double b);    // 함수원형

int main(void)    // 프로그램 시작인 메인 함수
{
   double a, b;

   printf("밑변 = a와 높이 = b를 순서대로 입력(정수): ");
   scanf("%lf %lf", &a, &b);

   printf("빗변의 길이 = %lf", c(a, b));    // 함수 c 호출

   return 0;
}

double c(double a, double b)     // 함수정의
{
   double c;
   c = sqrt(pow(a, 2) + pow(b, 2));
   return c;
}
