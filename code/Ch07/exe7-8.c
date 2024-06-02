#include <stdio.h>
#include <time.h>    // time 사용
#include <stdlib.h>  // reand, srand 사용

int main(void)
{
   int i, number;

   srand(time(NULL));   // 랜덤 초기화

   printf("1~45 사이의 난수 6개 출력\n");
   for (i = 1; i <= 6; i++)
   {
      number = rand() % 45 + 1;  // 1~45 랜덤 숫자     
      printf("%5d", number);
   }

   return 0;
}

