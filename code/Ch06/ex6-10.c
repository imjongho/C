#include <stdio.h>

int main(void)
{
   int year;
   
   printf("�⵵ �Է�: ");
   scanf("%d", &year);

   switch (year % 12)
   {
      case 0:
         printf("%d���� �����̶�\n", year);
         break;
      case 1:
         printf("%d���� �߶�\n", year);
         break;
      case 2:
         printf("%d���� ����\n", year);
         break;
      case 3:
         printf("%d���� ������\n", year);
         break;
      case 4:
         printf("%d���� ���\n", year);
         break;
      case 5:
         printf("%d���� �Ҷ�\n", year);
         break;
      case 6:
         printf("%d���� ȣ���̶�\n", year);
         break;
      case 7:
         printf("%d���� �䳢��\n", year);
         break;
      case 8:
         printf("%d���� ���\n", year);
         break;
      case 9:
         printf("%d���� ���\n", year);
         break;
      case 10:
         printf("%d���� ����\n", year);
         break;
      case 11:
         printf("%d���� ���\n", year);
         break;
    }

   return 0;
}