#include <stdio.h>
#include <string.h>

int main(void)
{
   int i = 0, maxline = 0, count = 0;
   int count_word[30] = { 0, };       // 각 단어별 빈도수
   char line[10][81];
   char *pword;
   char *word[30];                    // 단어를 저장
   char delimiter = " ,.!?";

   printf("문장열을 여러줄 입력(10줄 이하)\n");
   printf("입력 완료 후, 새로운 줄 처음에 ctrl + Z, 그리고 Enter를 입력\n\n");

   while (gets(line[i]))
   {
      line[i++];
      maxline++;
   }
   
   for (i = 0; i < maxline; i++)
   {
      pword = strtok(line[i] , delimiter);
      while (pword != NULL)
      {
         word[count] = pword;
      }
   }


   return 0;
}