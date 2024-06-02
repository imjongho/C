#include <stdio.h>

int main(void)
{
   int a;
   
   printf("임의의 달 입력: ");
   scanf("%d", &a);

   printf("%d월은 %s\n", a, (a <= 6) ? "상반기입니다." : "하반기입니다");
   // 1~6월 상반기. 7~12월 하반기

   return 0;
}