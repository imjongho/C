#include <stdio.h>

int main(void)
{
   int i, j;

   char str[23] = "C programming Language";
   
   int ary[7];
   ary[3] = 5;
   
   int cnt[5] = { 3, 6, 9 };

   double matrix[2][3] = { {5.4, 3.1, 6.9}, {1.8, 5.1, 7.7} };

   puts(str);
   printf("%d\n", ary[3]);
   
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%lf %s", matrix[i][j], (j == 2) ? "\n" : ", ");
      }
   }
   
   for (i = 0; i < 5; i++)
   {
      printf("%d", cnt[i]);
   }

   return 0;
}