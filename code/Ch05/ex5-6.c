#include <stdio.h>

int main(void)
{
   double a;
   
   printf("���̸� ��Ƽ���ͷ� �Է�(�Ҽ�): ");
   scanf("%lf", &a);
   printf("%lf��Ƽ���ʹ� %6.3lf��Ʈ�̴�.\n", a, a / 30.48);
   // ��Ʈ ���� �̿�, �Ҽ��� 3�ڸ����� ���

   return 0;
}