#include <stdio.h>

int main(void)
{
   int i;
   double n[10] = { 0 };

   for (i = 0; i < 10; i++)
   {
      n[i] = (double)1 / ((i + 2) * (i + 3));
      printf("n[%d] = %.5lf\n", i, n[i]);
   }
   return 0;
}