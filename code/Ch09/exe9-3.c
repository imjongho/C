#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user = 0, com = 0;
char *RPS[] = { "����", "����", "��" };      // RPS[0] = ����
                                             // RPS[1] = ����
void game(void);                             // RPS[2] = ��

int main(void)
{
   int finish = 0;

   srand(time(NULL));

   while (1)         
   {
      printf("���� ���� �� ����\n");
      printf("���� = 0, ���� = 1, �� = 2 �Է� --> ");
      scanf("%d", &user);
      
      if (user < 0 || user > 2)
      {
         printf("\n���� ���� ���� �ٽ� �Է�\n");
         continue;
      }

      com = rand() % 3;       // ��ǻ�Ͱ� �������� 0, 1, 2 ����

      printf("��ǻ�� : %s VS ���� : %s\n\n", RPS[com], RPS[user]);
      
      game();                 // game �Լ� ȣ���ؼ� ���и� ����
      
      printf("\n���� => 3, ����Ϸ��� �ٸ� ���� ��������.\n\n");
      scanf("%d", &finish);
      if (finish == 3)
      {
         break;               // while�� ��������
      }
   }

   return 0;
}

void game(void)                     
{
   if (com == user)              // ��ǻ�� = ����, ���� �Ÿ�
   {
      printf("�����ϴ�.\n");
   }
   else if (com == 0)            // ��ǻ�� = ����    
   {
      if (user == 1)             // ���� = ����
      {
         printf("�̰���ϴ�.\n");
      }
      else                       // ���� = ��
      {
         printf("�����ϴ�.\n");
      }
   }
   else if (com == 1)            // ��ǻ�� = ����
   {
      if (user == 0)             // ���� = ���� 
      {
         printf("�����ϴ�.\n");       
      }
      else                       // ���� = ��
      {
         printf("�̰���ϴ�.\n");
      }
   }
   else if (com == 2)            // ��ǻ�� = ��
   {
      if (user == 0)             // ���� = ���� 
      {
         printf("�̰���ϴ�.\n");
      }
      else                       // ���� = ����
      {
         printf("�����ϴ�.\n");
      }
   }
}