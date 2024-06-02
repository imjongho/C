#include <stdio.h>

int main(void)
{
   float num = 0;          // 1. float형 변수와 포인터 선언
   float *pd;

   printf("실수 입력(소수 셋째 자리까지) : ");
   scanf_s("%f", &num);    // 2. 실수값 입력
   
   pd = &num;

   // 3. 포인터의 주소값과 데이터값을 각각 출력
   printf("\n포인터 pd의 현재 주소값 : %d\n", pd);
   printf("포인터 pd의 현재 데이터값 : %f\n\n", num);

   *(pd)++;       // C6269: 연산 순서가 잘못된 것 같습니다. 역참조가 무시되었습니다.
                  // 주소값만 4 증가(자료유형 float)

   printf("포인터 *(pd)++ 증감 연산 후 주소값 : %d\n", pd);
   printf("포인터 *(pd)++ 증감 연산 후 데이터값 : %f\n", num);

   return 0;
}









