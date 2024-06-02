#include <stdio.h>

#define ARY_NUM 3
// 2. 배열의 크기는 #define 키워드를 사용하여 기호 상수로 선언

int main(void)
{
   int score[ARY_NUM] = {95, 89, 97};  // 1. 3개 과목의 점수 95, 89, 97
   int *p ,sum = 0, i = 0;             // 3. 포인터 선언       
   double avg = 0;

   p = score;                          // 4. 일반 변수의 주소를 대입

   for (i = 0; i < ARY_NUM; i++)       // 5. for문으로 3개 과목 점수의 총점 산출
   {
      sum += *p++;
      printf("%d번째 과목 점수 : %d > 포인터 주소 : %d\n", i + 1, score[i], p);
   }
   avg = (double)sum / ARY_NUM;
   printf("\n총점 : %6d > 포인터 주소 : %d\n", sum, &sum);
   printf("\n평균 : %.2lf > 포인터 주소 : %d\n", avg, &avg);
   // 6. 결과값: 총점은 6자리, 평균은 소수점 둘째 자리까지 출력

   return 0;
}



