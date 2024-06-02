#include <stdio.h>

int main(void)
{
   int number = 0;

   printf("양의 정수 하나를 입력하시오.\n");
   scanf("%d", &number);
   printf("입력한 수 %d는 ", number);

   if (number % 2 == 0)
      printf("짝수 입니다.\n");
   else
      printf("홀수 입니다.\n");

   return 0;
}