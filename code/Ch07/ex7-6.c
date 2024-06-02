#include <stdio.h>

void print(int);

int main(void)
{
   print(3);
   return 0;
}

void print(int n)
{
   if (n > 1) print(n - 1);
   printf("재귀함수 호출 %d\n", n);
}