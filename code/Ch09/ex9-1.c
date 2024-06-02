#include <stdio.h>

int n = 100;

int main(void)
{
   int n = 200;
   printf("%d", n);
   {
      int n = 300;
      printf("%d", n);
   }
   printf("\n");

   return 0;
}