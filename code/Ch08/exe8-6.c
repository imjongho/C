#include <stdio.h>

int main(void)
{
   int i, j;

	char course[][50] = { {"[C ���α׷���]"},{"[��ǻ�� ����]"},{"[��ü���� ���α׷���]"} };
   // 3���� �̸��� ������ �迭�� ����
   int score[4][4] = { {30,30,40},{78,93,88},{98,99,75},{69,78,85} };
   // 3���� ���� ������ ������ �迭�� ����, ���ձ��� �����ؼ� ���� 4ĭ���� ������

   printf("[�̸�]\t%s\t%s %s  [����]\n", course[0], course[1], course[2]);
   
   for (i = 0; i < 4; i++) 
   {
      printf(" �л�%d", i + 1);
      for (j = 0; j < 3; j++) 
      {
         printf("%10d      ", score[i][j]);  // ex) score[2][1] --> �л� 3�� ��ǻ�� ���� ����
         score[i][3] += score[i][j];         
         // ���� score[i][3] = score[i][0] + score[i][1] + score[i][2]
      }
      printf("\t%10d\n", score[i][3]);    // �л�1�� ���� ��� �� --> �л�2
   }
   return 0;
}