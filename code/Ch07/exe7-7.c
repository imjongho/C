#include <stdio.h>

void bin(int a);

int main(void)
{
   int a;
   
   printf("10���� �Է�: ");
   scanf("%d", &a);
  
   printf("10���� %d�� 2������ ", a);
   bin(a);

   return 0;
}

void bin(int a)   // ��� �Լ�
{
   if (a > 1)     // a�� 2�� ���� �� �ִ� ����
   {
      bin(a / 2);    // ���� ���� �Ű� ������ �ѱ�
   }
   printf("%d", a % 2);    // �������� �ݴ�� ���
}