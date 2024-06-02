#include <stdio.h>

void bin(int a);

int main(void)
{
   int a;
   
   printf("10진수 입력: ");
   scanf("%d", &a);
  
   printf("10진수 %d는 2진수로 ", a);
   bin(a);

   return 0;
}

void bin(int a)   // 재귀 함수
{
   if (a > 1)     // a를 2로 나눌 수 있는 상태
   {
      bin(a / 2);    // 나눈 값의 매개 변수를 넘김
   }
   printf("%d", a % 2);    // 나머지의 반대로 출력
}