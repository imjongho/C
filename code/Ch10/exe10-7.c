#include <stdio.h>

int main(void)
{
   int i = 0, j = 0;
   int ary[][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   // 1���� ������
   
   int(*ptr)[5] = ary;  // �迭 ������
   // ���� ptr�� ���� ���� 5�� 2���� �迭�� �ּҸ� ����

   printf("�迭 ary�� ��� ������ ���� 5����\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 5; j++)
      {
         printf("%d\t", *(*(ptr + i) + j) + 5);
         // *(*(ptr + i) + j) = ptr[i][j]
      }
      printf("\n");
   }

   return 0;
}
