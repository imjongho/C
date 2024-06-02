#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottowin(int same);

int main(void)
{
   int i = 0, j = 0, same = 0;
   int lotto[6] = { 0 };      // �ζ� ��÷ ��ȣ
   int mylotto[6] = { 0 };    // ���� ������ ��ȣ

   // 1. ���� �ζ� ��ȣ�� �Է¹���
   for (i = 0; i < 6; i++)
   {
      printf("%d��° 1~45 ������ ���ڸ� �����ϼ���.\n", i + 1);
      scanf("%d", &mylotto[i]);
      
      if (mylotto[i] <= 0 || mylotto[i] > 45)   // 1~45�� �ƴ� �� �Ÿ�
      {
         printf("\n�ٽ� �Է��ϼ���.\n");
         i--;
      }
      
      for (j = 0; j < i; j++)
      {
         if (mylotto[i] == mylotto[j])          // �ߺ��Ǵ� �� �Ÿ�
         {
            printf("\n�ߺ��Դϴ�. �ٽ� �Է����ּ���.\n");
            i--;
         }
      }
   }

   // 2. �ζ� ��÷ ��ȣ ����
   srand(time(NULL));   // ���� �ʱ�ȭ

   for (i = 0; i < 6; i++)
   {
      lotto[i] = rand() % 45 + 1;    // 1~45 ���� ����
      for (j = 0; j < i; j++)
      {
         if (lotto[i] == lotto[j])   // �ߺ��Ǵ� �� �Ÿ�
         {
            i--;
         }
      }
   }

   printf("\n\n��÷ ��ȣ\n");
   for (i = 0; i < 6; i++)
   {
      printf("%5d", lotto[i]);
   }

   // 3. �� �ζ� ��ȣ�� ��÷ ��ȣ�� ����
   for (i = 0; i < 6; i++)
   {
      for (j = 0; j < 6; j++)
      {
         if (lotto[i] == mylotto[j])
         {
            same++;
         }
      }
   }

   // 4. ��� ���
   printf("\n\n");
   lottowin(same);

   return 0;
}

void lottowin(int same)
{
   if (same == 6)
      printf("\t1�� ��÷\n");
   else if (same == 5)
      printf("\t2�� ��÷\n");
   else if (same == 4)
      printf("\t3�� ��÷\n");
   else if (same == 3)
      printf("\t4�� ��÷\n");
   else
      printf("\t%d�� �����ϴ�. ���Դϴ�.\n", same);
}