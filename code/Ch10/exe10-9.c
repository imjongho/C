#include <stdio.h>
#define SIZE 5

void nowary(double* n, int size);
double find(double* n, int size);

int main(void)
{
   // 1. 자료유형 double형 1차원 배열 초기화
   double ary[SIZE] = { 8.78, 5.14, 4.27, 6.34, 14.43 };
   
   nowary(ary, SIZE);
   find(ary, SIZE);

   return 0;
}

void nowary(double* n, int size)
{
   int i = 0;

   printf("현재 배열\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(n + i));
   }
   printf("\n\n");
}

// 2. 배열에서 가장 큰 값과 가장 작은 값을 찾고 그 값의 차이 반환
double find(double* n, int size)
{
   int i = 0;
   double max = *n, min = *n;    // ary[0]의 값을 max, min에 저장

   for (i = 1; i < size; i++)    // max와 min이 초기값이 없다면 min이 안나옴
   {                             // 따라서 1부터 비교를 시작
      if (max < *(n + i))     
      {
         max = n[i];
      }
      if (min > *(n + i))        
      {
         min = *(n + i);
      }
   }
   return max - min;
}

