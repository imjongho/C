#include <stdio.h>

int x;

int main(void)
{
   // extern int x = 10;
   // 이렇게 외부 변수를 선언하면서 초기값을 지정하면 오류가 남
   // error C2205 : 'x' : 블록 범위를 사용하여 extern 변수를 초기화할 수 없습니다.
   // 따라서 먼저 전역 변수를 불러오고 다음에 값을 지정함

   extern int x;
   x = 10;
   
   printf("%d\n", x);

   return 0;
}