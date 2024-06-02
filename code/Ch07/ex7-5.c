#include <stdio.h>

void print(int n);
int increment(int n);

int main(void)
{
   int n = 3;
   increment(n);
   print(n);
   n = increment(n);
   print(n);
   print(n++);
   print(n);

   return 0;
}

void print(int n)
{
   printf("%d\n", n);
}
int increment(int n)
{
   return ++n;
}