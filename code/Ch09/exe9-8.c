#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int i = 0, j = 0;
   int data[100] = { 0 };     // 100개의 난수
   int freq[20] = { 0 };      // 출현빈도 

   // 1. 1~20 사이의 정수 중에서 100개의 난수 발생
   srand(time(NULL));
   for (i = 0; i < 100; i++)
   {
      data[i] = rand() % 20 + 1;
      printf("%4d", data[i]);       // 한 줄에 10개씩 출력
      if ((i + 1) % 10 == 0)
      {
         printf("\n");
      }
   }

   // 2. 출현 빈도수
   printf("\n\n*************** 출현 빈도수 **************\n\n");
   printf("freq[n] = m --> n은 1~20사이의 정수, m은 출현빈도수\n");

   for (i = 0; i < 20; i++)
   {
      for (j = 0; j < 100; j++)
      {
         if (data[j] == i + 1)
         {
            freq[i]++;        // 빈도수 증가
         }
      }
      printf("freq[%d] = %d\n", i + 1, freq[i]);
   }

   return 0;
}