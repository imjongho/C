#include <stdio.h>

int main(void)
{
   char line[81];
   char name[20];

   printf("����� �ּҸ� �Է�: ");
   gets(line);    // gets ==> get string ���ڿ��� ����(���� ����)
   printf("����� ������ �Է�: ");
   scanf("%s", name);

   printf("\n\t����� ������ %s�̰� \n\t�ּҴ� ", name);
   puts(line);    // puts ==> put string ���ڿ� ���

   return 0;
}