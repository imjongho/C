#include <stdio.h>

int main(void)
{
   int age;

   printf("당신의 나이를 입력해 주세요");
   scanf("%d", &age);

   if (age >= 18)
   {
      printf("\t당신은 성인입니다.\n");
      printf("\t당신은 결혼할 수 있습니다.\n");
   }
   printf("당신의 행운을 기원합니다.\n");

   return 0;
}