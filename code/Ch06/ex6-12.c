#include <stdio.h>

int main(void)
{
   int i, j;

   for (i = 1; i <= 5; i++)
   {
      for (j = 1; j <= i; j++)   // j가 1부터 j = i일때까지 반복
      {
         printf("*");   // *의 개수 = j가 i와 같아질때까지의 총 횟수
      }                 // 예) i = 3 --> j = 1, 2, 3(3번 반복됨) --> i = j --> *의 개수 3개
      printf("\n");     // *가 다 출력된 후 줄 바꿈
   }

   return 0;
}