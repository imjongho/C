#include <stdio.h>

int callCountReturn(void);

int main(void)
{
   int n = 0, i = 0, count = 0;

   printf("�� �� �Լ��� ȣ���� ���ΰ�?\n");
   scanf("%d", &n);
   
   for (i = 0; i < n; i++)
   {
      printf("%d��° ȣ��\n", i + 1);
      count = callCountReturn();
   }

   printf("�Լ� �ڽ��� ȣ��� �� Ƚ�� = %d\n", count);

   return 0;
}

int callCountReturn(void)     // �Լ� �ڽ�?
{
   static int callCount = 0;  // ���� ��������
   return ++callCount;        // ���� ������
}