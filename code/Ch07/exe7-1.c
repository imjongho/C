#include <stdio.h>
#include <math.h>    // sqrt�� pow ���

double c(double a, double b);    // �Լ�����

int main(void)    // ���α׷� ������ ���� �Լ�
{
   double a, b;

   printf("�غ� = a�� ���� = b�� ������� �Է�(����): ");
   scanf("%lf %lf", &a, &b);

   printf("������ ���� = %lf", c(a, b));    // �Լ� c ȣ��

   return 0;
}

double c(double a, double b)     // �Լ�����
{
   double c;
   c = sqrt(pow(a, 2) + pow(b, 2));
   return c;
}
