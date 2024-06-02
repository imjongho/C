#include <stdio.h>

int main(void)
{
   double a;

   printf("무게를 킬로그램으로 입력(소수): ");
   scanf("%lf", &a);
   printf("%lf킬로그램은 %6.3lf파운드이다.\n", a, a / 0.453502);
   // 파운드 공식 이용, 소수점 3자리까지 출력

   return 0;
}