#include <stdio.h>

int main(void)
{
   int a, b, c;

   printf("세 정수 입력: ");
   scanf("%d %d %d", &a, &b, &c);

   if(a > b)
   {
      if(a > c)
      {
         printf("가장 큰 수는 %d이다.\n", a);
      }
      else
      {
         printf("가장 큰 수는 %d이다.\n", c);
      }
   }
   else
   {
      if(b > c)
      {
         printf("가장 큰 수는 %d이다.\n", b);
      }
      else
      {
         printf("가장 큰 수는 %d이다.\n", c);
      }
   }

   return 0;
}