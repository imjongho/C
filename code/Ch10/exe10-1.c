#include <stdio.h>

int main(void)
{
   int n = 0, i = 0;
   int data[] = { 3, 21, 35, 57, 24, 82, 8 };

   // 1. ������ų ���� n�� �Է¹���
   printf("n�� �Է�: ");
   scanf("%d", &n);

   // 2. �迭���� ��� ������ ���� n�� ����
   for (i = 0; i <= 6; i++)
   {
      printf("%d\t", data[i] + n);
   }

   printf("\n");

   // 2. ������ �̿�(��� ����)
   for (i = 0; i <= 6; i++)
   {
      printf("%d\t", *(data + i) + n);
   }

   return 0;
}