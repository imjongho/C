#include <stdio.h>

#define ARY_NUM 3
// 2. �迭�� ũ��� #define Ű���带 ����Ͽ� ��ȣ ����� ����

int main(void)
{
   int score[ARY_NUM] = {95, 89, 97};  // 1. 3�� ������ ���� 95, 89, 97
   int *p ,sum = 0, i = 0;             // 3. ������ ����       
   double avg = 0;

   p = score;                          // 4. �Ϲ� ������ �ּҸ� ����

   for (i = 0; i < ARY_NUM; i++)       // 5. for������ 3�� ���� ������ ���� ����
   {
      sum += *p++;
      printf("%d��° ���� ���� : %d > ������ �ּ� : %d\n", i + 1, score[i], p);
   }
   avg = (double)sum / ARY_NUM;
   printf("\n���� : %6d > ������ �ּ� : %d\n", sum, &sum);
   printf("\n��� : %.2lf > ������ �ּ� : %d\n", avg, &avg);
   // 6. �����: ������ 6�ڸ�, ����� �Ҽ��� ��° �ڸ����� ���

   return 0;
}



