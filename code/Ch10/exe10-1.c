#include <stdio.h>

int main(void)
{
   int n = 0, i = 0;
   int data[] = { 3, 21, 35, 57, 24, 82, 8 };

   // 1. 증가시킬 숫자 n을 입력받음
   printf("n을 입력: ");
   scanf("%d", &n);

   // 2. 배열에서 모든 원소의 값에 n을 더함
   for (i = 0; i <= 6; i++)
   {
      printf("%d\t", data[i] + n);
   }

   printf("\n");

   // 2. 포인터 이용(결과 같음)
   for (i = 0; i <= 6; i++)
   {
      printf("%d\t", *(data + i) + n);
   }

   return 0;
}