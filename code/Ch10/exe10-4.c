#include <stdio.h>

void change(int* A);

int main(void)
{
   int i = 0, j = 0;

   // 1. ������ �迭 �ʱ�ȭ
   int A[][4] = { {12, 30, 82, 54}, {43, 51, 32, 47}, {30, 42, 41, 69} };
   
   printf("���� ��\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d\t", A[i][j]);
         change(&A[i][j]);       // �Լ� ȣ��
      }                          // �迭�� ������ �ּ� ����
      printf("\n");
   }

   printf("\n\n���� ��\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 4; j++)
      {
         printf("%d\t", A[i][j]);  
      }                          
      printf("\n");
   }
   
   return 0;
}

// 2. ������ ������ ���� �����ϴ� �Լ�
void change(int* A)
{
   *A = (*A) * 10 + 5;
}