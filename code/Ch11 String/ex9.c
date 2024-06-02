#include <stdio.h>
#include <string.h>

int main(void)
{
   int i = 0, maxline = 0;
   char line[10][81];      // 5번 문제 참조
   char *ptoken, *ptr;
   char *delimiter = " ,.!\t";   // 토큰은 빈칸, 쉼표(,), 마침표(.), 느낌표(!) 그리고 탭(\t)

   printf("문장열을 여러줄 입력(10줄 이하)\n");
   printf("입력 완료 후, 새로운 줄 처음에 ctrl + Z, 그리고 Enter를 입력\n\n");
   
   while (gets(line[i]))
   {
      line[i++];
      maxline++;
   }

   for (i = 0; i < maxline; i++)
   {
      printf("\n<<%d줄에 입력한 단어(토큰) 출력>>\n", i + 1);
      ptr = line[i];       // i + 1번째 줄을 ptr에 저장
      ptoken = strtok(ptr, delimiter);
      while (ptoken != NULL)
      {
         printf("strlen(%s) = %d\n", ptoken, strlen(ptoken));
         ptoken = strtok(NULL, delimiter);
      }
   }

   return 0;
}