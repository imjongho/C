#include <stdio.h>      
#include <string.h>     // strlen() ���

void reverse(char *word);

int main(void)
{
   char word[81];
   
   printf("����ܾ� �Է�: ");
   scanf("%s", word);      // �ܾ �Է�

   printf("�������� ���: ");
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