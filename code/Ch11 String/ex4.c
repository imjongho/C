#include <stdio.h>
#include <string.h>

void reverse(char *word);

int main(void) 
{
   char line[81];
   char *word;    // ���� 360.p ����

   printf("�� ���� ������ �Է�: ");
   gets(line);    // ������ �Է�
   
   printf("�ܾ��� ���ڸ� �������� ���: ");
   word = strtok(line, " ");        // ���⸦ �������� �ܾ �ڸ�
   while (word != NULL)
   {
      reverse(word);                // �ܾ �������� ���
      putchar(' ');                 // ����
      word = strtok(NULL, " ");     // ���� �ܾ� �ϳ� ����
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