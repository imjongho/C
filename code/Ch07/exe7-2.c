#include <stdio.h>

double degree(double C);   // �Լ�����

int main(void)
{
   double C;

   for (C = -20; C <= 100; C += 10)
   {
      printf("���� %.2lf���� ȭ�� %.2lf��\n", C, degree(C));
      // �Լ� degree ȣ��
   }

   return 0;
}

double degree(double C)    // �Լ� ����
{
   double F;
   F = ((double)9/5) * C + 32;   // ȭ���µ� ����
   return F;
}
