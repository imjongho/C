#include <stdio.h>

int main(void)
{
   int i, j, number = 0, max = 0;
   int n[20];                    // n배열은 20개의 입력받은 값 저장
   int count[10] = { 0 };        // count배열은 각 숫자별 빈도수를 의미

   printf("0부터 9까지의 정수 중에서 20개의 수를 입력\n\n");
   
   for (i = 0; i < 20; i++)
   {
      printf("n[%d] = ", i);
      scanf("%d", &n[i]);
      if ( !(n[i] >= 0 && n[i] <= 9) )
      {
         printf("다시 입력\n");
         i--;
      }
   }

   printf("\n-----------------------------------------------------\n");

   for (i = 0; i < 20; i++)      // 빈도수 구하기
   {
      for (j = 0; j < 10; j++)
         if (n[i] == j)          
            count[j]++;          // ex) n[2] = 5
   }                             // ex) count[5]의 값이 1증가

   for (j = 0; j < 10; j++)      // 가장 많이 입력 받은 빈도 수
   {
      if (max <= count[j])       
      {
         max = count[j];         // count[0~9]까지 순서대로 체크함
         number = j;             // 더 큰 값이 max에 저장됨
      }
   }

   printf("\n\n가장 많이 입력된 수는 %d이고 %d번입니다.\n\n", number, max);
   printf("but 빈도수가 같으면 0~9까지의 수 중 더 큰 값이 출력됨\n");

   return 0;
}

