#include <stdio.h>

int main(void)
{
   int x;
   
   printf("������ �ϳ� �Է��ϼ��� >> ");
   scanf("%d", &x);

   if(x % 3 == 0)   // ������ = 0 --> �������� ����� ����
   {
      printf("3�� ����Դϴ�.\n");
   }
   else
   {
      printf("3�� ����� �ƴմϴ�.\n");
   }
   return 0;
}