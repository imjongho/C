#include <stdio.h>

int main(void)
{
   for (int i = 1, count = 0; i <= 100; i++) // i = 1~100
   {
      if ((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0))  // 3, 5, 7 ��� ����
      {
         printf("%3d", i);
         count++;
         if (count % 10 == 0) // �� �࿡ 10���� �׸��� �� �ٲ�
         {
            printf("\n");
         }
      }
   }

   return 0;
}