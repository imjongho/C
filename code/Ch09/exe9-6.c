#include <stdio.h>

void static_global();

int global = 0;

int main(void)
{
   printf("�������� %d\n", global);
   global++;
   printf("�������� %d\n", global);

   static_global();
   
   global++;

   static_global();

   printf("�������� %d\n\n", global);
   printf("���� �ٸ� �ҽ����� ������ ���� �̸����� �ϳ��� ���Ͽ��� ����������,");
   printf(" �ٸ� ���Ͽ��� ���� ���������� �̿��� �����ϴ�.\n");

   return 0;
}