#include <stdio.h>

int main(void)
{
   double C, F;

   printf("ȭ���µ��� �Է�: ");
   scanf("%lf", &F); // double�̹Ƿ� ��ȯ�� %lf���
   C = ((double)5 / 9) * (F - 32); // ���� �̿�, ����ȯ
   printf("�����µ�: %lf\n", C);

   return 0;
}