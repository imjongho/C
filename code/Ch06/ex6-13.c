#include <stdio.h>

int main(void)
{
   int i, j;

   for (i = 1; i <= 9; i++)
   {
      for (j = 9; j >= 1; j--)   // 결과값이 9부터 시작하기 때문이다.
      {
         if (j >= i)    
         {
            printf("%d", j);
         }
         else  // else문은 없어도 같은 결과값이 나옴
         {
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}