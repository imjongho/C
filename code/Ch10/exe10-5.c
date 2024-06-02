#include <stdio.h>

// 배열 포인터
void Plus(double (*a)[3], double (*b)[3], double (*result)[3]);   
void Minus(double (*a)[3], double (*b)[3], double (*result)[3]);
void Print_Out(double (*result)[3]);

int main(void)
{
   double a[2][3] = { {4.2, 4.3, 3.8}, {3.7, 1.5, 0.7} };
   double b[2][3] = { {5.2, 2.1, 1.8}, {3.2, 1.4, 2.9} };
   double result[2][3] = { 0 };     // 빈 배열(결과를 저장하기 위함)

   printf(" Plus\n");
   Plus(a, b, result);
   Print_Out(result);

   printf("\n Minus\n");
   Minus(a, b, result);
   Print_Out(result);

   return 0;
}

void Plus(double (*a)[3], double (*b)[3], double (*result)[3])
{
   int i = 0, j = 0;

   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         *(*(result + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
         // (*(result + i) == result[i]
         // *(*(result + i) + j) == result[i][j]
      }
   }   
}

void Minus(double(*a)[3], double(*b)[3], double(*result)[3])
{
   int i = 0, j = 0;

   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         *(*(result + i) + j) = *(*(a + i) + j) - *(*(b + i) + j);
      }
   }
}

void Print_Out(double(*result)[3])
{
   int i = 0, j = 0;

   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%4.1lf\t", *(*(result + i) + j));
      }
      printf("\n");
   }   
}

