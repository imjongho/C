#include <stdio.h>

int main(void)
{
   int a;
   
   printf("������ �� �Է�: ");
   scanf("%d", &a);

   printf("%d���� %s\n", a, (a <= 6) ? "��ݱ��Դϴ�." : "�Ϲݱ��Դϴ�");
   // 1~6�� ��ݱ�. 7~12�� �Ϲݱ�

   return 0;
}