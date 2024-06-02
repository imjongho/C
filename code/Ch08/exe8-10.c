#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
   int i, j, number, sum = 0, max = 0;
   int count[10] = { 0 };
   int num[60];
   int ea = sizeof(num) / sizeof(num[0]);

   srand(time(NULL));         // ���� �ʱ�ȭ

   for (i = 0; i < 60; i++)
   {
      num[i] = rand() % 10;      // ����
   }

   printf("������ ���� 0���� 9������ ��������\n\n");

   for (i = 0; i < 60; i++)
   {
      printf("%2d%s", num[i], (i + 1) % 20 == 0 ? "\n" : "");
   }
      
   for (i = 0; i < 60; i++)
   {
      sum += num[i];
   }
    
   printf("\n********\n  ���  \n********\n");
   printf("�迭 ������ ����� ���Ϸ��Ѵ�.\n");
   printf("�迭 ������ ���� %d�̰� �迭 ������ ��ü ���� %d�̹Ƿ�\n����� %.4lf �̴�.\n\n", ea, sum, (double)sum / ea);

   printf("********\n  ����  \n********\n");
   printf("------------------------------------------------------\n");
   printf("        ��      Ƚ��        ������׷�\n\n");
   printf("                                     1    1    2    2\n\n");
   printf("                            1   5    0    5    0    5\n");
   printf("\n------------------------------------------------------\n");

   for (i = 0; i < 60; i++)
   {
      for (j = 0; j < 10; j++)
      {
         if (num[i] == j)
         {
            count[j]++;
         }
      }
   }

	for (j = 0; j < 10; j++)      // ���� 4�� ����
	{
		if (max <= count[j])
		{
			max = count[j];
			number = j;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("         %d       %2d         ", i, count[i]);
      for (j = 0; j < count[i]; j++)
      {
         printf("*");
      }
		printf("\n");
	}

	printf("------------------------------------------------------\n");

	printf("\n���������� ���� �� Ƚ���� ��Ÿ����.\n�м����, ���� ���� �󵵼��� �� %d��(��) %d�� ��Ÿ����.\n", number, max);


	return 0;
}
