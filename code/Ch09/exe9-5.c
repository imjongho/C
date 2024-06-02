#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottowin(int same);

int main(void)
{
   int i = 0, j = 0, same = 0;
   int lotto[6] = { 0 };      // 로또 당첨 번호
   int mylotto[6] = { 0 };    // 내가 선택한 번호

   // 1. 나의 로또 번호를 입력받음
   for (i = 0; i < 6; i++)
   {
      printf("%d번째 1~45 사이의 숫자를 선택하세요.\n", i + 1);
      scanf("%d", &mylotto[i]);
      
      if (mylotto[i] <= 0 || mylotto[i] > 45)   // 1~45가 아닌 수 거름
      {
         printf("\n다시 입력하세요.\n");
         i--;
      }
      
      for (j = 0; j < i; j++)
      {
         if (mylotto[i] == mylotto[j])          // 중복되는 수 거름
         {
            printf("\n중복입니다. 다시 입력해주세요.\n");
            i--;
         }
      }
   }

   // 2. 로또 당첨 번호 나옴
   srand(time(NULL));   // 랜덤 초기화

   for (i = 0; i < 6; i++)
   {
      lotto[i] = rand() % 45 + 1;    // 1~45 랜덤 숫자
      for (j = 0; j < i; j++)
      {
         if (lotto[i] == lotto[j])   // 중복되는 수 거름
         {
            i--;
         }
      }
   }

   printf("\n\n당첨 번호\n");
   for (i = 0; i < 6; i++)
   {
      printf("%5d", lotto[i]);
   }

   // 3. 내 로또 번호와 당첨 번호를 대조
   for (i = 0; i < 6; i++)
   {
      for (j = 0; j < 6; j++)
      {
         if (lotto[i] == mylotto[j])
         {
            same++;
         }
      }
   }

   // 4. 결과 출력
   printf("\n\n");
   lottowin(same);

   return 0;
}

void lottowin(int same)
{
   if (same == 6)
      printf("\t1등 당첨\n");
   else if (same == 5)
      printf("\t2등 당첨\n");
   else if (same == 4)
      printf("\t3등 당첨\n");
   else if (same == 3)
      printf("\t4등 당첨\n");
   else
      printf("\t%d개 같습니다. 꽝입니다.\n", same);
}