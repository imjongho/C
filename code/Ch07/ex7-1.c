#include <stdio.h>

int sumexcept(int x, int y);

int main(void)
{

   printf("%d", sumexcept(5, 3));

   return 0;
}

int sumexcept(int x, int y)
{
   int i, sum = 0;

   for (i = 1; i <= x; i++)
   {
      if (i != y)
      {
         sum += i;
      }
   }

   return sum;
}
