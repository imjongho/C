#include <stdio.h>

void a(void);
int x = 1;

int main(void)
{
   int m = 5;
   int i = 6;
   printf("%d : %d, %d\n", x++, m, i);
   a();
   a();

   return 0;
}

void a(void)
{
   static int s;
   int i = 5;
   printf("%d : %d, %d\n", x++, s++, i++);
   printf("%d : %d, %d\n", x++, s++, i++);
}