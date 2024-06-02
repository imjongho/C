#include <stdio.h>

int main(void)
{
   char c[] = { '#', '$', '%', '*', '@' };
   int i[] = { 8, 23, 76, 32, 5, 14, 34, 92 };
   double d[] = { 3.14, 7.54, 9.76, 3.95, 8.26 };

   char* pc = c;
   int* pi = i;
   double* pd = d;

   printf("%c\n", *(pc + 3));
   printf("%d\n", *(pi + 5));
   printf("%d\n", *(&i[6] - 2));
   printf("%.2f\n", *(pd + 2));
   printf("%.2f\n", *(&d[4] - 1));

   return 0;
}