#include <stdio.h>

int main(void)
{
   const double PHI = 3.14; // ������ ��� ���� 
   double r, area, circum; // ������: r ���� ����: area, ���� �ѷ�: circum

   printf("������ �Է�: ");
   scanf("%lf", &r);
   
   area = PHI * r * r; // ���� ���� ���ϱ�
   circum = 2 * PHI * r; // ���� �ѷ� ���ϱ�

   printf("���� ����: %lf\n���� �ѷ�: %lf\n", area, circum);

   return 0;
}