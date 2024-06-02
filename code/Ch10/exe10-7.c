#include <stdio.h>

int main(void)
{
   int i = 0, j = 0;
   int ary[][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   // 1번과 유사함
   
   int(*ptr)[5] = ary;  // 배열 포인터
   // 변수 ptr은 열의 수가 5인 2차원 배열의 주소를 가짐

   printf("배열 ary의 모든 원소의 값을 5증가\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 5; j++)
      {
         printf("%d\t", *(*(ptr + i) + j) + 5);
         // *(*(ptr + i) + j) = ptr[i][j]
      }
      printf("\n");
   }

   return 0;
}
