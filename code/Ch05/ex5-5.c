#include <stdio.h>

int main(void)
{
   double a;

   printf("���Ը� ų�α׷����� �Է�(�Ҽ�): ");
   scanf("%lf", &a);
   printf("%lfų�α׷��� %6.3lf�Ŀ���̴�.\n", a, a / 0.453502);
   // �Ŀ�� ���� �̿�, �Ҽ��� 3�ڸ����� ���

   return 0;
}