#include <stdio.h>

int main(void)
{
   int year;
   
   printf("�⵵ �Է�: ");
   scanf("%d", &year);

   if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
   {
      printf("�����Դϴ�.\n");
   }
   else
   {
      printf("����Դϴ�.\n");
   }
   return 0;
}