#include <stdio.h>
#include <string.h>

int main(void)
{
   int i = 0, maxline = 0, count = 0;
   int count_word[30] = { 0, };       // �� �ܾ �󵵼�
   char line[10][81];
   char *pword;
   char *word[30];                    // �ܾ ����
   char delimiter = " ,.!?";

   printf("���忭�� ������ �Է�(10�� ����)\n");
   printf("�Է� �Ϸ� ��, ���ο� �� ó���� ctrl + Z, �׸��� Enter�� �Է�\n\n");

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