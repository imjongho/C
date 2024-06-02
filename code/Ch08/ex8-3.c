#include <stdio.h>

int main(void)
{
   short a[][3] = { 2, 4, 6, 8, 10, 12, 1, 3, 5, 7, 9, 11 };

   printf("%d\n", sizeof(a));
   printf("%d\n", sizeof(a[0]));
   printf("%d\n", sizeof(a[0][0]));
   printf("%d\n", sizeof(a) / sizeof(a[0]));
   printf("%d\n", sizeof(a[0]) / sizeof(a[0][0]));
   printf("%d\n", sizeof(a) / sizeof(a[0][0]));

   return 0;
}