#include <stdio.h>

int main(void)
{
   int i, j;

   int a[5][5] = { {35, 28, 67, 73}, {25, 32, 12, 69}, {97, 56, 14, 23}, {45, 97, 48, 15} };

   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         a[i][4] += a[i][j];  // 가로 합
         a[4][i] += a[j][i];  // 세로 합
         a[4][4] += a[i][j];  // 모든 수의 합
      }
   }

   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 5; j++)
      {
         printf("%5d", a[i][j]);
      }
      printf("\n");
   }
   return 0;
}