#include <stdio.h>

int main(void)
{
   int a, b, sum;
   double avg; // 평균은 실수로 출력해야 함

   printf("두 정수 입력\n");
   scanf("%d %d", &a, &b); // 두 정수 입력받음
   
   sum = a + b; // 합 구하기
   avg = (double)sum / 2; // 평균 구하기, 형변환

   printf("합: %d\n", sum);
   printf("평균: %lf\n", avg);

   return 0;
}