#include <stdio.h>

int main(void)
{
   int j = 0;

   // 1. int�� ���� i�� 0x324F3A24�� ����
   int i = 0x324F3A24;     // ���� ���� ũ�� 4
   // 2. char* ���� pc�� ����
   char* pc;               // ���� ���� ũ�� 1
   pc = (char*)&i;   // i�� �ּҰ� ����, �ڷ������� char*�� ����

   // 3. ���尪�� 16���� 324F3A24�� ���
   // 10�� ����(5�� 31��)
   for (j = 3; j >= 0; j--)   // 324F3A24�� ����
   {
      printf("%X", *(pc + j));
   }
   
   /*
   for (j = 0; j <= 3; j++)   // 243A4F32 �Ųٷ� ����
   {
      printf("%X", *(pc + j));
   }
   */

   return 0;
}