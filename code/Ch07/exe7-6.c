#include <stdio.h>

int F(int n);  // F = �Ǻ���ġ ��

int main(void)
{
   int i;

   for (i = 0; i <= 21; i++)
   {
      printf("�Ǻ���ġ ���� %d��° ���� %d\n", i, F(i));
   }

   return 0;
}

int F(int n)   // ��� �Լ�
{
   if (n == 0)
   {
      return 0;   // 0��°�� 0
   }
   else if (n == 1)
   {
      return 1;   // 1��°�� 1
   }
   else
   {
      return F(n - 1) + F(n - 2);   // 2���� F(n-1)+F(n-2)
   }      
}