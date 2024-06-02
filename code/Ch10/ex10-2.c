#include <stdio.h>

int main(void)
{
   int i = 0;
   int point[] = { 3, 5, 2, 12, 23 };
   int aryLength = sizeof(point) / sizeof(int);

   printf("배열 point[i]를 이용하여 원소값을 출력\n");
   for (i = 0; i < aryLength; i++)
   {
      printf("point[%d] = %d ", i, point[i]);
   }
   printf("\n\n");

   printf("주소 상수 point를 이용하여 원소의 주소값과 원소값을 툴력\n");
   for (i = 0; i < aryLength; i++)
   {
      printf("(point + %d) == %p, *(point + %d) == %d\n", i, point + i, i, *(point + i));
   }

   return 0;
}