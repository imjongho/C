#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int seed = 0, i;

   printf("������ seed�� �Է�\n");
   scanf("%d", &seed);  // seed���� ǥ���Է����� �ޱ�
   
   srand(seed);
   for (i = 0; i < 5; i++)
   {
      printf("%d\t", rand());
   }

   return 0;
}