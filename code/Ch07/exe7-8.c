#include <stdio.h>
#include <time.h>    // time ���
#include <stdlib.h>  // reand, srand ���

int main(void)
{
   int i, number;

   srand(time(NULL));   // ���� �ʱ�ȭ

   printf("1~45 ������ ���� 6�� ���\n");
   for (i = 1; i <= 6; i++)
   {
      number = rand() % 45 + 1;  // 1~45 ���� ����     
      printf("%5d", number);
   }

   return 0;
}

