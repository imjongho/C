#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINENUM 81

void swap(char *line, int len);

int main(void)
{
   int len = 0;
   char line[LINENUM] = { 0, };

   printf("�� ���� ���ڿ� �Է�(�����): ");
   gets(line);

   len = strlen(line);     // ���ڿ��� ����
   swap(line, len);        // ��/�ҹ��� ��ȯ�ϴ� �Լ�

   return 0;
}

void swap(char *line, int len)
{
   int i = 0;

   for (i = 0; i < len; i++)
   {
      if (line[i] == tolower(line[i]))    // tolower �ҹ��ڸ�
      {
         line[i] = toupper(line[i]);      // toupper �빮�ڷ� ����
      }
      else if (line[i] == toupper(line[i]))     // �빮�ڸ�
      {
         line[i] = tolower(line[i]);            // �ҹ��ڷ� ����
      }
   }
   printf("��/�ҹ��� ��ȯ: %s\n", line);
}