#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
   int a = 0, b = 0;

   printf("두 정수 입력: ");
   scanf("%d %d", &a, &b);

   printf("swap 전: %d\t%d\n", a, b);
   swap(&a, &b);    // 함수 호출
   printf("swap 후: %d\t%d\n", a, b);

   return 0;
}

// 실인자인 두 정수를 바꾸는 기능을 가진 함수
void swap(int* x, int* y)
{
   *x ^= *y;   // Ch05과제 마지막 문제
   *y ^= *x;   // x, y의 숫자가 서로 바뀜
   *x ^= *y;
}