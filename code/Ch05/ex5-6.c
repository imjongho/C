#include <stdio.h>

int main(void)
{
   double a;
   
   printf("길이를 센티미터로 입력(소수): ");
   scanf("%lf", &a);
   printf("%lf센티미터는 %6.3lf피트이다.\n", a, a / 30.48);
   // 피트 공식 이용, 소수점 3자리까지 출력

   return 0;
}