#include <stdio.h>

int main(void)
{
   char ch;

   printf("문자를 하나 입력: ");
   ch = getchar();      // 문자를 입력
   printf("아스키 코드 값(십진수): %d\n", ch);

   return 0;
}