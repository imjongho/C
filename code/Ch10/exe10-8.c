#include <stdio.h>

void Print_ary(double* source, double* target, int size);
void copyarray(double* source, double* target, int size);

int main(void)
{
   // 조건 1: 자료유형 double형 1차원 배열 초기화
   double ary[5] = { 3.12, 5.14, 7.25, 7.48, 5.91 };
   double ary2[5] = { 0.0 };

   printf("\t복사 전\n");
   Print_ary(ary, ary2, 5);    // 복사 전 

   copyarray(ary, ary2, 5);    // 복사

   printf("\t복사 후\n");
   Print_ary(ary, ary2, 5);    // 복사 후

   return 0;
}

void Print_ary(double* source, double* target, int size)
{
   int i = 0;

   printf("ary배열\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(source + i));
   }

   printf("\nary2배열\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(target + i));
   }
   printf("\n\n");
}

// 조건 2: 첫 번째 인자인 배열 source을 
// 두 번째 인자인 배열 target에 복사하는 함수
void copyarray(double* source, double* target, int size)
{
   int i = 0;

   for (i = 0; i < size; i++)
   {
      *(target + i) = *(source + i);
      // target[i] = source[i]
   }
}