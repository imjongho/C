#include <stdio.h>

void change(char *num_str);

int main(void)
{
   char num_str[] = "4356";
   
   change(num_str);     // ���ڿ��� ������ �ٲٴ� �Լ�

   return 0;
}

void change(char *num_str)
{
   int i = 0, num = 0;

   // num_str[i]�� ���� NULL �����̸� 0�� �Ǳ� �����̴�.
   for (i = 0; num_str[i] != 0; i++)
   {
      num = num * 10 + num_str[i] - '0';
   }
   printf("%d", num);
}