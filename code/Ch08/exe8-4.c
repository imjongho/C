#include <stdio.h>

int main(void)
{
   int i, j, number = 0, max = 0;
   int n[20];                    // n�迭�� 20���� �Է¹��� �� ����
   int count[10] = { 0 };        // count�迭�� �� ���ں� �󵵼��� �ǹ�

   printf("0���� 9������ ���� �߿��� 20���� ���� �Է�\n\n");
   
   for (i = 0; i < 20; i++)
   {
      printf("n[%d] = ", i);
      scanf("%d", &n[i]);
      if ( !(n[i] >= 0 && n[i] <= 9) )
      {
         printf("�ٽ� �Է�\n");
         i--;
      }
   }

   printf("\n-----------------------------------------------------\n");

   for (i = 0; i < 20; i++)      // �󵵼� ���ϱ�
   {
      for (j = 0; j < 10; j++)
         if (n[i] == j)          
            count[j]++;          // ex) n[2] = 5
   }                             // ex) count[5]�� ���� 1����

   for (j = 0; j < 10; j++)      // ���� ���� �Է� ���� �� ��
   {
      if (max <= count[j])       
      {
         max = count[j];         // count[0~9]���� ������� üũ��
         number = j;             // �� ū ���� max�� �����
      }
   }

   printf("\n\n���� ���� �Էµ� ���� %d�̰� %d���Դϴ�.\n\n", number, max);
   printf("but �󵵼��� ������ 0~9������ �� �� �� ū ���� ��µ�\n");

   return 0;
}

