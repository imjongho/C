#include <stdio.h>

int sum(int n);

int main(void)
{
   int i;
   for (i = 1; i <= 20; i++)
   {
      printf("1~%d������ ���� %d�Դϴ�.\n", i, sum(i));
   }
   
   return 0;
}

int sum(int n)    // ��� �Լ�
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      return n + sum(n - 1);
   }
}