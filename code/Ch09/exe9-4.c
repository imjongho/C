#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int i = 0;
   int data[6] = { 0 };
   
   srand(time(NULL));   // 랜덤 초기화

   for (i = 0; i < 6; i++)
   {
      data[i] = rand() % 45 + 1;    // 1~45 랜덤 숫자
      printf("%3d", data[i]);
   }

   return 0;
}