#include <stdio.h>
#include <math.h>    // pow ���

double S(int a, int n, double r);   // S = �Ѿ�

int main(void)
{
   int a, n;   // n = �Ⱓ(��), a = ����
   double r;   // r = ������(�Ǽ�)

   printf("����, �Ⱓ, �������� ������� �Է�: ");
   scanf("%d %d %lf", &a, &n, &r);

   printf("���� �Ѿ� = %lf", S(a, n, r));  // �Լ� S ȣ��

   return 0;
}

double S(int a, int n, double r)
{
   double result;
   result = a * pow((1 + r), n);
   return result;
}