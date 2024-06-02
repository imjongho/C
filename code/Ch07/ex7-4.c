#include <stdio.h>
#include <math.h>

int main(void)
{
   printf("%05d\n", (int)sqrt(36));
   printf("%04d\n", abs(-7));
   printf("%7.3f\n", floor(2.9));
   printf("%8.2f\n", ceil(-3.6));
   printf("%05d\n", (int)pow(2, 3));

   return 0;
}
