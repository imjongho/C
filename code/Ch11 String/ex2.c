#include <stdio.h>      
#include <string.h>     // strlen() 사용

void reverse(char *word);

int main(void)
{
   char word[81];
   
   printf("영어단어 입력: ");
   scanf("%s", word);      // 단어를 입력

   printf("역순으로 출력: ");
   reverse(word);

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