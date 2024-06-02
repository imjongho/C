#include <stdio.h>

int a();
int g = 200;

int main(void)
{
   int b = 10;
   printf("%d\n", g + b);
   printf("%d\n", a());
   printf("%d\n", a());
   printf("%d\n", a());

   return 0;
}