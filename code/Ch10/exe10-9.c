#include <stdio.h>
#define SIZE 5

void nowary(double* n, int size);
double find(double* n, int size);

int main(void)
{
   // 1. �ڷ����� double�� 1���� �迭 �ʱ�ȭ
   double ary[SIZE] = { 8.78, 5.14, 4.27, 6.34, 14.43 };
   
   nowary(ary, SIZE);
   find(ary, SIZE);

   return 0;
}

void nowary(double* n, int size)
{
   int i = 0;

   printf("���� �迭\n");
   for (i = 0; i < size; i++)
   {
      printf("%.2lf\t", *(n + i));
   }
   printf("\n\n");
}

// 2. �迭���� ���� ū ���� ���� ���� ���� ã�� �� ���� ���� ��ȯ
double find(double* n, int size)
{
   int i = 0;
   double max = *n, min = *n;    // ary[0]�� ���� max, min�� ����

   for (i = 1; i < size; i++)    // max�� min�� �ʱⰪ�� ���ٸ� min�� �ȳ���
   {                             // ���� 1���� �񱳸� ����
      if (max < *(n + i))     
      {
         max = n[i];
      }
      if (min > *(n + i))        
      {
         min = *(n + i);
      }
   }
   return max - min;
}

