#include <stdio.h>
#include <ctype.h>      // 구두점을 세기 위한 함수 ispunct사용
#include <string.h>     // strlen 사용

int main(void)
{
   char line[10][81];      // 최대 10줄
   int i = 0, j = 0, maxline = 0, count = 0, linesize = 0;
   // linesize 의미: 한 줄에 있는 칸의 수

   printf("문장열을 여러줄 입력(구두점 필요)\n");
   printf("입력 완료 후, 새로운 줄 처음에 ctrl + Z, 그리고 Enter를 입력\n\n");
   while (gets(line[i]))   // 줄을 의미
   {
      line[i++];           
      maxline++;           // 줄이 몇개인지 구함
   }

   for (i = 0; i < maxline; i++)
   {
      printf("\n%d줄의 구두점\n", i + 1);
      linesize = strlen(line[i]);
      for (j = 0; j < linesize; j++)
      {
         if (ispunct(line[i][j]))
         {
            printf("%2c", line[i][j]);
            count++;       // 모든 구두점의 수를 카운트
         }
      }
   }
   
   printf("\n\n모든 구두점의 개수: %d개\n", count);

   return 0;
}