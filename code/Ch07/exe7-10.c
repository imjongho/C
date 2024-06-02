#include <stdio.h>

long fact(int n); //함수 원형

int main(void)
{
   int i;
   double psum = 0.0, nsum = 0.0, diff = 0.0;
   // 연속한 두개의 오일러수를 각각 psum, nsum으로 정의
   // diff는 두 오일러수의 오차
   for (i = 0;; i++)//무한루프를 돌림
   {
      psum += (1.0 / fact(i)); //연속된 오일러수 중 앞의 수 
      nsum = psum + (1.0 / fact(i + 1)); //연속된 오일러수 중 뒤의 수
      diff = nsum - psum; //두수의 오차를 구함
      if (diff < 0.0000001) //오차가 0.0000001보다 작아지면
         break; //무한루프 종료
   }
   printf("차이가 0.0000001보다 작을때 오일러수는 %.7lf입니다\n", psum);
   //무한루프가 종료 됬을 때의 값으로 오일러수 출력
   return 0;
}

long fact(int n)	// 재귀함수
{
   if (n <= 1)
      return 1;
   else
      return n * fact(n - 1); // n! 구하기
}