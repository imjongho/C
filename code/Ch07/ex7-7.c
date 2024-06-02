#include <stdio.h>

// double add(double a, double b, double c);
// void cube(int number);
// void printmyname(void);
// int sum(float a, float b);
// void printtest(void);
// int multifly(int, int);
int fact(int a);

int main(void)
{
   // printf("%lf", add(3.2, 4.1, 2.2));
   // cube(2);
   // printmyname();
   // printf("%d", sum(3.2, 2.4));
   // printtest();
   // printf("%d", multifly(3, 4));
   printf("%d", fact(5));
   return 0;
}

/* double add(double a, double b, double c)
{
   double result;
   result = a + b + c;
   return result;
} */

/* void cube(int number)
{
   printf("%d", number*number*number);
} */

/* void printmyname(void)
{
   printf("임종호");
} */

/* int sum(float a, float b)
{
   return (int)(a + b);
} */

/* void printtest(void)
{
   printf("C언어의 출력 test입니다.");
} */

/* int multifly(int a, int b)
{
   return a * b;
} */

int fact(int a)
{
   if (a > 1)
      return a * fact(a - 1);
   else
      return 1;
}

