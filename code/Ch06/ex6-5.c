#include <stdio.h>

int main(void)
{
   double temp; // temp = �µ�
   
   printf("�µ� �Է�(�Ǽ�): ");
   scanf("%lf", &temp);

   if(temp > 12 && temp < 18)   // ���� => 12 < temp < 18
   {
      printf("���� �����Դϴ�.\n");      
   }
   return 0;
}