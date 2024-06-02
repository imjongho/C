#include <stdio.h>

int main(void)
{
   int a[2][3] = { 10, 12, 24, 87, 15, 36 };

   printf("%d, %d, %d\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]));
   printf("%d\n", **a);
   printf("%d\n", **(a+1));
   printf("%d\n", *(*a+4));
   printf("%d\n", *(*(a+1) + 2));
   printf("%d\n", (*(a+1))[1]);
   printf("%d\n", *(a[1] + 2));

   return 0;
}