#include <stdio.h>

int main(void)
{
   int i = 100;
   double d = 5.2876;
   double *pd;
   void *p = &i;

   int *pi = (int *)p;
   printf("p = %#p, pi = %#p, *pi = %d\n", p, pi, *pi);
   printf("(int *)p = %#p, *(int *)p = %d\n", (int *)p, *(int *)p);
   // printf("*p = %d\n", *p);  --> 오류 발생

   p = &d;
   pd = (double *)p;
   printf("p = %p, pd = %#p, *pd = %lf\n", p, pd, *pd);

   return 0;
}