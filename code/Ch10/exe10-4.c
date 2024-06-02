#include <stdio.h>

void change(int* A);

int main(void)
{
   int i = 0, j = 0;

   // 1. 이차원 배열 초기화
   int A[][4] = { {12, 30, 82, 54}, {43, 51, 32, 47}, {30, 42, 41, 69} };
   
   printf("수정 전\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d\t", A[i][j]);
         change(&A[i][j]);       // 함수 호출
      }                          // 배열의 각각의 주소 전달
      printf("\n");
   }

   printf("\n\n수정 후\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d\t", A[i][j]);  
      }                          
      printf("\n");
   }
   
   return 0;
}

// 2. 각각의 원소의 값을 수정하는 함수
void change(int* A)
{
   *A = (*A) * 10 + 5;
}