#include <stdio.h>

int change(char *a);

int main(int argc, char *argv[])
{
   int sum = 0;

   sum = change(argv[1]) + change(argv[2]);
   printf("��ɾ� �ٿ� �Էµ� �� ������ ��: %d\n", sum);

   return 0;
}

// ���ڸ� ������ �ٲٴ� �Լ�(6�� ����)
int change(char *a)
{
   int i = 0, num = 0;

   for (i = 0; a[i] != 0; i++)
   {
      num = num * 10 + a[i] - '0';
   }

   return num;
}