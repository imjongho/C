#include <stdio.h>

int main(void)
{
   int i, j;
   int sum[4][3];
   int sub[4][3];
   int a[4][3] = { {35, 28, 73}, {25, 32, 69}, {97, 56, 23}, {45, 97, 15} };
   int b[4][3] = { {125, 28, 56}, {34, 32, 69}, {57, 56, 59}, {45, 33, 45} };

   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 3; j++)
      {
         sum[i][j] = a[i][j] + b[i][j];   // ���� ÷���� ��
         sub[i][j] = a[i][j] - b[i][j];   // ���� ÷���� ��
      }
   }



   printf("\t�� ����� ��\n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%8d", sum[i][j]);
      }
      printf("\n");
   }

   printf("\n\n\t�� ����� ��\n");
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%8d", sub[i][j]);
      }
      printf("\n");
   }

   return 0;
}