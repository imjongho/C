#include <stdio.h>

int main(void)
{
   int i, sum = 0;

   int a[6] = { 14, 28, 57, 94, 19, 9 };  // �迭 �ʱ�ȭ

   for (i = 0; i < 6; i++)    
   {
      sum += a[i];                        // �迭�� ����
      printf("a[%d] = %d\n", i, a[i]);    // �迭�� ���
   }

   printf("\n���� = %d, ��� = %.2lf�̴�.\n", sum, (double)sum / 6);
   // �迭�� ��� = ���� / ���� ��

   return 0;
}