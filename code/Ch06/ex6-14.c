#include <stdio.h>

int main(void)
{
   int a;

   printf("�ݴ�� ����� ������ �Է��ϼ���.\n");
   scanf("%d", &a);

   printf("\n�Է��� ���� �ݴ�� ����ϸ� >>> ");
   do
   {
      printf("%d", a % 10);   // �������˹��� 6���� ���
      a /= 10;                // a % 10 => �����ڸ���, a /= 10 => ���� �ڸ����� ������    
   } while (a > 0);           // a > 0 => a�� �������� ��
   printf("\n");
   
   return 0;
}