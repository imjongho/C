#include <stdio.h>

int main(void)
{
   int a, b, sum;
   double avg; // ����� �Ǽ��� ����ؾ� ��

   printf("�� ���� �Է�\n");
   scanf("%d %d", &a, &b); // �� ���� �Է¹���
   
   sum = a + b; // �� ���ϱ�
   avg = (double)sum / 2; // ��� ���ϱ�, ����ȯ

   printf("��: %d\n", sum);
   printf("���: %lf\n", avg);

   return 0;
}