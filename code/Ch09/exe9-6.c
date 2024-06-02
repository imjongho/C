#include <stdio.h>

void static_global();

int global = 0;

int main(void)
{
   printf("전역변수 %d\n", global);
   global++;
   printf("전역변수 %d\n", global);

   static_global();
   
   global++;

   static_global();

   printf("전역변수 %d\n\n", global);
   printf("서로 다른 소스에서 동일한 변수 이름으로 하나의 파일에는 전역변수로,");
   printf(" 다른 파일에는 정적 전역변수로 이용이 가능하다.\n");

   return 0;
}