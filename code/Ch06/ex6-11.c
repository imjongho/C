#include <stdio.h>

int main(void)
{
   int i, j, count = 0;

   printf("소수는 약수가 1과 자신 뿐인 수\n");
   printf("단, 1은 소수가 아니므로 2부터 시작\n");
   printf("1부터 100까지의 소수를 출력하시오.\n\n");

   for (i = 2; i <= 100; i++) // 1은 소수가 X, 2부터 시작해서 count 초기화 후 1씩 증가
   {
      for (j = 1; j <= i; j++)   // j값을 1부터 1씩 증가시켜 i의 약수를 찾는다.
      {
         if (i % j == 0)   // 예) 4는 나머지 = 0으로 1, 2, 4
         {                 // 예) 5는 나머지 = 0으로 1, 5
            count++;       // 예) 4의 count = 3, count는 약수의 개수를 의미
         }                 // 예) 5의 count = 2
      }
      if (count == 2)   // 약수의 개수 = 2이면 소수 
      {                 // 예) 4는 약수가 3개이므로 소수가 아니다. 5는 약수가 2개이므로 소수이다.
         printf("%3d", i);   // 소수는 약수가 2개(1과 자신)이므로 출력
      }
      count = 0;  // 약수의 개수 초기화 필요, 다시 맨 처음 for문으로 이동
   }

   return 0;
}