#include <stdio.h>

void copyarray(int from[], int to[], int n);

int main(void)
{
   int i;
   int a[4] = { 1, 2, 3, 4 };
   int b[4] = { 9, 8, 7, 6 };
   
   printf("���� ��� ��\na: ");
   for (i = 0; i < 4; i++)
   {
      printf("a[%d] = %d ", i, a[i]);
      printf("b[%d] = %d ", i, b[i]);
   }

   copyarray(a, b, 4);  // from a to b --> a�迭�� ���� b�迭�� ����

   printf("\n\n�Լ� ��� ��\na: ");
   for (i = 0; i < 4; i++)
   {
      printf("a[%d] = %d ", i, a[i]);
      printf("b[%d] = %d ", i, b[i]);
   }

   return 0;
}

void copyarray(int from[], int to[], int n)
{
   for (int i = 0; i < n; i++)
   {
      to[i] = from[i];
   }
}