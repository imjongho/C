#include <stdio.h>

int Gob(int *pa, int *pd);    // 2. 사용자 정의 함수 선언

int main(void)
{
   int num = 0;               
   int a = 10, b = 20;        // 1. 메인 함수에서 a = 10, b = 20 선언

   num = Gob(&a, &b);         // 3. Gob함수를 호출
   
   printf("함수의 매개변수로 포인터를 전달받아 곱셈 연산을 하는 프로그램\n");
   printf("주어진 값 : a = %d, b = %d\n", a, b);
   printf("[곱셈 함수 영역]\n");
   printf("반환된 값 : a * b = %d\n", num);      // 5. 곱셈 결과값 출력
   printf("프로그램 종료\n");

   return 0;
}

int Gob(int *pa, int *pd)
{
   return (*pa) * (*pd);      // 4. 곱셈 결과값 반환
}



