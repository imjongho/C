#include <stdio.h>

int main(void)
{
   int a, b, c;

   printf("�� ���� �Է�: ");
   scanf("%d %d %d", &a, &b, &c);

   if(a > b)
   {
      if(a > c)
      {
         printf("���� ū ���� %d�̴�.\n", a);
      }
      else
      {
         printf("���� ū ���� %d�̴�.\n", c);
      }
   }
   else
   {
      if(b > c)
      {
         printf("���� ū ���� %d�̴�.\n", b);
      }
      else
      {
         printf("���� ū ���� %d�̴�.\n", c);
      }
   }

   return 0;
}