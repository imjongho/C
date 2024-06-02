#include <stdio.h>

int main(void)
{
   char line[81];
   char name[20];

   printf("당신의 주소를 입력: ");
   gets(line);    // gets ==> get string 문자열을 받음(공백 가능)
   printf("당신의 전공을 입력: ");
   scanf("%s", name);

   printf("\n\t당신의 전공은 %s이고 \n\t주소는 ", name);
   puts(line);    // puts ==> put string 문자열 출력

   return 0;
}