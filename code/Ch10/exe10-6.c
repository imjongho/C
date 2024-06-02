#include <stdio.h>

void multiply(double A[2][3], double B[3][2], double C[2][2]);
void Print_Out(double(*C)[2]);
void Print_A(double(*A)[3]);
void Print_B(double(*B)[2]);

int main(void)
{
   double A[2][3] = { {4.2, 4.3, 3.8}, {3.7, 1.5, 0.7} };
   double B[3][2] = { {5.2, 2.1}, {3.2, 1.4}, {1.5, 3.6} };
   // 2*3행렬과 3*2행렬은 앞 뒤의 숫자가 3로 같기 때문에 곱셈 가능 
   double C[2][2] = { 0.0 };

   Print_A(A);
   Print_B(B);
   multiply(A, B, C);
   Print_Out(C);

   return 0;
}

void Print_A(double(*A)[3])
{
   int i = 0, j = 0;

   printf("A배열\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%.1lf\t", *(*(A + i) + j));
      }
      printf("\n");
   }
}

void Print_B(double(*B)[2])
{
   int i = 0, j = 0;

   printf("\nB배열\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 2; j++)
      {
         printf("%.1lf\t", *(*(B + i) + j));
      }
      printf("\n");
   }
}

void multiply(double A[2][3], double B[3][2], double C[2][2])
{
   int i = 0, j = 0, k = 0;

   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         for (k = 0; k < 3; k++)
         {
            C[i][j] += A[i][k] * B[k][j];
         }
      }
   }
}

void Print_Out(double(*C)[2])
{
   int i = 0, j = 0;

   printf("\n\nA, B배열의 곱\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         printf("%.2lf\t", *(C[i] + j));
      }
      printf("\n");
   }   
}