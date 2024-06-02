#include <stdio.h>

void Print_ary(double* source, double* target, int size);
void copyarray(double* source, double* target, int size);

int main(void)
{
   // ���� 1: �ڷ����� double�� 1���� �迭 �ʱ�ȭ
   double ary[5] = { 3.12, 5.14, 7.25, 7.48, 5.91 };
   double ary2[5] = { 0.0 };

   printf("\t���� ��\n");
   Print_ary(ary, ary2, 5);    // ���� �� 

   copyarray(ary, ary2, 5);    // ����

   printf("\t���� ��\n");
   Print_ary(ary, ary2, 5);    // ���� ��

   return 0;
}

void Print_ary(double* source, double* target, int size)
{
   int i = 0;

   printf("ary�迭\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(source + i));
   }

   printf("\nary2�迭\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(target + i));
   }
   printf("\n\n");
}

// ���� 2: ù ��° ������ �迭 source�� 
// �� ��° ������ �迭 target�� �����ϴ� �Լ�
void copyarray(double* source, double* target, int size)
{
   int i = 0;

   for (i = 0; i < size; i++)
   {
      *(target + i) = *(source + i);
      // target[i] = source[i]
   }
}