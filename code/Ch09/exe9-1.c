#include <stdio.h>

int x;

int main(void)
{
   // extern int x = 10;
   // �̷��� �ܺ� ������ �����ϸ鼭 �ʱⰪ�� �����ϸ� ������ ��
   // error C2205 : 'x' : ��� ������ ����Ͽ� extern ������ �ʱ�ȭ�� �� �����ϴ�.
   // ���� ���� ���� ������ �ҷ����� ������ ���� ������

   extern int x;
   x = 10;
   
   printf("%d\n", x);

   return 0;
}