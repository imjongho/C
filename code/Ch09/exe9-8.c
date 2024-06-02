#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int i = 0, j = 0;
   int data[100] = { 0 };     // 100���� ����
   int freq[20] = { 0 };      // ������ 

   // 1. 1~20 ������ ���� �߿��� 100���� ���� �߻�
   srand(time(NULL));
   for (i = 0; i < 100; i++)
   {
      data[i] = rand() % 20 + 1;
      printf("%4d", data[i]);       // �� �ٿ� 10���� ���
      if ((i + 1) % 10 == 0)
      {
         printf("\n");
      }
   }

   // 2. ���� �󵵼�
   printf("\n\n*************** ���� �󵵼� **************\n\n");
   printf("freq[n] = m --> n�� 1~20������ ����, m�� �����󵵼�\n");

   for (i = 0; i < 20; i++)
   {
      for (j = 0; j < 100; j++)
      {
         if (data[j] == i + 1)
         {
            freq[i]++;        // �󵵼� ����
         }
      }
      printf("freq[%d] = %d\n", i + 1, freq[i]);
   }

   return 0;
}