#include <stdio.h>

int main(void)
{
   int x, y, min, max;
   
   printf("�� ���� �Է�\n");
   scanf("%d %d", &x, &y); // �� ���� �Է� ����
   (x > y) ? (max = x, min = y) : (max = y, min = x);
   // ���� �����ڷ� ���� ū ���̰� ���� ���� ������ ������
   printf("ū ���� ���� ���� ���� ��: %d ������: %d\n", max / min, max % min); 
   // ������ ������ /, ������ ������ %

   return 0;
}