#include <stdio.h>

int main(void)
{
   int x, y, min, max;
   
   printf("두 정수 입력\n");
   scanf("%d %d", &x, &y); // 두 정수 입력 받음
   (x > y) ? (max = x, min = y) : (max = y, min = x);
   // 삼항 연산자로 누가 큰 값이고 누가 작은 값인지 정해줌
   printf("큰 수를 작은 수로 나눈 몫: %d 나머지: %d\n", max / min, max % min); 
   // 나누기 연산자 /, 나머지 연산자 %

   return 0;
}