#include <stdio.h>

double getmax(double x, double y);

int main(void)
{
   printf("%lf", getmax(1.24, 2.4));

   return 0;
}

double getmax(double x, double y)
{
   return (x > y) ? x : y;
}