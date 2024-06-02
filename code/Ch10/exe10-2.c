#include <stdio.h>

void change(char* a, char* b);

int main(void)
{
   char a[50] = "D-WAR!";  // 배열의 크기가 같아야 함
   char b[50] = "dragon";  // 배열을 순서대로 배끼기 위함

   printf("a: %s\tb: %s\n", a, b);
   change(a, b);  // 함수 호출
   printf("a: %s\tb: %s\n", a, b);

   return 0;
}

// 2개의 문자 배열의 내용을 서로 교환하는 함수
void change(char* a, char* b)
{
   int i = 0;
   char swap[50];    // 빈 배열 공간
   for (i = 0; i < 50; i++)
   {
      swap[i] = a[i];
      a[i] = b[i];
      b[i] = swap[i];
   }
}