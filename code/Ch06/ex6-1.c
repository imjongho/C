#include <stdio.h>

int main(void)
{
   int age;

   printf("����� ���̸� �Է��� �ּ���");
   scanf("%d", &age);

   if (age >= 18)
   {
      printf("\t����� �����Դϴ�.\n");
      printf("\t����� ��ȥ�� �� �ֽ��ϴ�.\n");
   }
   printf("����� ����� ����մϴ�.\n");

   return 0;
}