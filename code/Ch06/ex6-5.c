#include <stdio.h>

int main(void)
{
   double temp; // temp = 온도
   
   printf("온도 입력(실수): ");
   scanf("%lf", &temp);

   if(temp > 12 && temp < 18)   // 사이 => 12 < temp < 18
   {
      printf("좋은 날씨입니다.\n");      
   }
   return 0;
}