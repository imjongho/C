#include <stdio.h>

int main(void)
{
   int i, j;

   for (i = 1; i <= 9; i++)
   {
      for (j = 9; j >= 1; j--)   // ������� 9���� �����ϱ� �����̴�.
      {
         if (j >= i)    
         {
            printf("%d", j);
         }
         else  // else���� ��� ���� ������� ����
         {
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}