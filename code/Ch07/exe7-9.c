#include <stdio.h>

int fact(int n);
int factsum(int n);

int main(void)
{
   int n;

   printf("���� n �Է�: ");
   scanf("%d", &n);

   printf("0!~%d!������ ���� %d", n, factsum(n));

   return 0;
}

int fact(int n)   // ��� �Լ�
{
   if (n <= 1)
   {
      return 1;
   }
   else
   {
      return n * fact(n - 1);    // n! ���ϱ�
   }
}

int factsum(int n)   // ��� �Լ�
{
   if (n == 0)
   {
      return 1;
   }
   else
   {
      return fact(n) + factsum(n - 1);
      // n! + (n-1)! + (n-2)! ... + 1! + 0! ���ϱ�
   }
}