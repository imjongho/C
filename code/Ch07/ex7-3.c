#include <stdio.h>
#include <math.h>

int intpow(int m, int n);

int main(void)
{
   printf("%d", intpow(3, 0));

   return 0;
}

/* int intpow(int m, int n)
{
   int i, pow;

   if (n == 0)
   {
      return 1;
   }
   for (i = 1, pow = m; i < n; i++)
   {
      pow *= m;
   }
   return pow;
} */

int intpow(int m, int n)
{
   return pow(m, n);
}

