#include <stdio.h>
#include <ctype.h>      // �������� ���� ���� �Լ� ispunct���
#include <string.h>     // strlen ���

int main(void)
{
   char line[10][81];      // �ִ� 10��
   int i = 0, j = 0, maxline = 0, count = 0, linesize = 0;
   // linesize �ǹ�: �� �ٿ� �ִ� ĭ�� ��

   printf("���忭�� ������ �Է�(������ �ʿ�)\n");
   printf("�Է� �Ϸ� ��, ���ο� �� ó���� ctrl + Z, �׸��� Enter�� �Է�\n\n");
   while (gets(line[i]))   // ���� �ǹ�
   {
      line[i++];           
      maxline++;           // ���� ����� ����
   }

   for (i = 0; i < maxline; i++)
   {
      printf("\n%d���� ������\n", i + 1);
      linesize = strlen(line[i]);
      for (j = 0; j < linesize; j++)
      {
         if (ispunct(line[i][j]))
         {
            printf("%2c", line[i][j]);
            count++;       // ��� �������� ���� ī��Ʈ
         }
      }
   }
   
   printf("\n\n��� �������� ����: %d��\n", count);

   return 0;
}