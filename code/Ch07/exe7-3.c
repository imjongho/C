#include <stdio.h>

#define PHI 3.14  // ��ũ�� �̿�

double area(double r);           // area = ���� ����, �Լ�����
double circumference(double r);  // circumference = ���� �ѷ�

int main(void)
{
   double r;

   printf("������ r �Է�(�Ǽ�): ");
   scanf("%lf", &r);

   printf("area = %.3lf\n", area(r));
   printf("circumference = %.3lf\n", circumference(r));
   // �Լ� ȣ��

   return 0;
}

double area(double r)   // area �Լ�����
{
   return (PHI * r * r);
}

double circumference(double r)   // cirsumference �Լ�����
{
   return (2 * PHI * r);
}