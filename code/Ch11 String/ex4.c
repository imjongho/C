#include <stdio.h>
#include <string.h>

void reverse(char *word);

int main(void) 
{
   char line[81];
   char *word;    // 교재 360.p 참조

   printf("한 줄의 문장을 입력: ");
   gets(line);    // 문장을 입력
   
   printf("단어의 문자를 역순으로 출력: ");
   word = strtok(line, " ");        // 띄어쓰기를 기준으로 단어를 자름
   while (word != NULL)
   {
      reverse(word);                // 단어를 역순으로 출력
      putchar(' ');                 // 띄어쓰기
      word = strtok(NULL, " ");     // 다음 단어 하나 저장
   }
   
   return 0;
}

void reverse(char *word)
{
   int i = 0;
   for (i = strlen(word) - 1; i >= 0; i--)
   {
      printf("%c", word[i]);
   }
}