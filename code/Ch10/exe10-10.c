#include <stdio.h>

int main(void)
{
   int j = 0;

   // 1. int형 변수 i에 0x324F3A24를 정의
   int i = 0x324F3A24;     // 저장 공간 크기 4
   // 2. char* 변수 pc를 선언
   char* pc;               // 저장 공간 크기 1
   pc = (char*)&i;   // i의 주소값 저장, 자료유형을 char*로 변경

   // 3. 저장값을 16진수 324F3A24로 출력
   // 10번 수정(5월 31일)
   for (j = 3; j >= 0; j--)   // 324F3A24로 나옴
   {
      printf("%X", *(pc + j));
   }
   
   /*
   for (j = 0; j <= 3; j++)   // 243A4F32 거꾸로 나옴
   {
      printf("%X", *(pc + j));
   }
   */

   return 0;
}