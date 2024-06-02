#include <stdio.h>

int main(void)
{
   double C, F;

   printf("화씨온도를 입력: ");
   scanf("%lf", &F); // double이므로 변환명세 %lf사용
   C = ((double)5 / 9) * (F - 32); // 공식 이용, 형변환
   printf("섭씨온도: %lf\n", C);

   return 0;
}