#include <stdio.h>

int main(void)
{
   int m = 20;
   int* ptr1 = &m;
   int* ptr2 = ptr1;

   *ptr2 = *ptr1 * m / 2;
   printf("%d %d %d\n", *ptr2, *ptr1, m);

   return 0;
}