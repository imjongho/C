#include <stdio.h>

void change(char* a, char* b);

int main(void)
{
   char a[50] = "D-WAR!";  // �迭�� ũ�Ⱑ ���ƾ� ��
   char b[50] = "dragon";  // �迭�� ������� �賢�� ����

   printf("a: %s\tb: %s\n", a, b);
   change(a, b);  // �Լ� ȣ��
   printf("a: %s\tb: %s\n", a, b);

   return 0;
}

// 2���� ���� �迭�� ������ ���� ��ȯ�ϴ� �Լ�
void change(char* a, char* b)
{
   int i = 0;
   char swap[50];    // �� �迭 ����
   for (i = 0; i < 50; i++)
   {
      swap[i] = a[i];
      a[i] = b[i];
      b[i] = swap[i];
   }
}