#include <stdio.h>
#include <string.h>

int main(void)
{
   int i = 0, maxline = 0;
   char line[10][81];      // 5�� ���� ����
   char *ptoken, *ptr;
   char *delimiter = " ,.!\t";   // ��ū�� ��ĭ, ��ǥ(,), ��ħǥ(.), ����ǥ(!) �׸��� ��(\t)

   printf("���忭�� ������ �Է�(10�� ����)\n");
   printf("�Է� �Ϸ� ��, ���ο� �� ó���� ctrl + Z, �׸��� Enter�� �Է�\n\n");
   
   while (gets(line[i]))
   {
      line[i++];
      maxline++;
   }

   for (i = 0; i < maxline; i++)
   {
      printf("\n<<%d�ٿ� �Է��� �ܾ�(��ū) ���>>\n", i + 1);
      ptr = line[i];       // i + 1��° ���� ptr�� ����
      ptoken = strtok(ptr, delimiter);
      while (ptoken != NULL)
      {
         printf("strlen(%s) = %d\n", ptoken, strlen(ptoken));
         ptoken = strtok(NULL, delimiter);
      }
   }

   return 0;
}