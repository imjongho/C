#include <stdio.h>

int main(void)
{
   int number = 0;

   printf("���� ���� �ϳ��� �Է��Ͻÿ�.\n");
   scanf("%d", &number);
   printf("�Է��� �� %d�� ", number);

   if (number % 2 == 0)
      printf("¦�� �Դϴ�.\n");
   else
      printf("Ȧ�� �Դϴ�.\n");

   return 0;
}