#include <stdio.h>

int Gob(int *pa, int *pd);    // 2. ����� ���� �Լ� ����

int main(void)
{
   int num = 0;               
   int a = 10, b = 20;        // 1. ���� �Լ����� a = 10, b = 20 ����

   num = Gob(&a, &b);         // 3. Gob�Լ��� ȣ��
   
   printf("�Լ��� �Ű������� �����͸� ���޹޾� ���� ������ �ϴ� ���α׷�\n");
   printf("�־��� �� : a = %d, b = %d\n", a, b);
   printf("[���� �Լ� ����]\n");
   printf("��ȯ�� �� : a * b = %d\n", num);      // 5. ���� ����� ���
   printf("���α׷� ����\n");

   return 0;
}

int Gob(int *pa, int *pd)
{
   return (*pa) * (*pd);      // 4. ���� ����� ��ȯ
}



