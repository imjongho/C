#include <stdio.h>

int main(void)
{
   int x;
   
   printf("정수를 하나 입력하세요 >> ");
   scanf("%d", &x);

   if(x % 3 == 0)   // 나머지 = 0 --> 나눈값의 배수를 뜻함
   {
      printf("3의 배수입니다.\n");
   }
   else
   {
      printf("3의 배수가 아닙니다.\n");
   }
   return 0;
}