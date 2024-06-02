#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int com_num;     // ��ǻ�Ͱ� ���� ������ ���� ����� ����
int user_num;    // ����ڰ� �Է��� ���� ����� ����
int temp_num;
int cnt;         // �Է� �õ� ���� ī��Ʈ�ϱ� ���� ����

void reset(void);    // �ʱ�ȭ�� ��Ű�� �Լ�

int main(void)
{
   while (1)
   {
      reset();    // �ʱ�ȭ
      while (1)
      {
         while (1)
         {
            temp_num = 0;
            printf("%02d. �Է�: ", cnt);

            fflush(stdin);    // �Է� ���۸� ����ִ� �ڵ�
            scanf("%d", &temp_num);

            if (temp_num == -1)
            {
               exit(0);    // ���α׷� ���� ���� �ڵ�
            }

            if (temp_num >= 1 && temp_num <= 100)
            {
               cnt++;
               break;
            }

            if (temp_num < 1 || temp_num > 100)
            {
               printf("�ٽ� �Է�(����: 1 ~ 100)\n\n");
            }
         }

         user_num = temp_num;

         // ��� ���
         if (user_num > com_num)
         {
            printf("DOWN\n");
         }

         if (user_num < com_num)
         {
            printf("UP\n");
         }

         if (user_num == com_num)
         {
            printf("\n����!!!\n");
            printf("�õ� Ƚ��: %d\n", cnt - 1);
            printf("Please enter any key to restart");
            break;
         }
      }
   }
   
   return 0;
}

void reset(void)
{
   system("cls");       // ȭ�� �����
   srand((unsigned)time(NULL));   // ����ǥ ����
   
   com_num = rand() % 99 + 1;    // ���� �Է�(1 ~ 100)
   cnt = 1;
   user_num = 0;

   printf("<<< GAME START >>>");
   printf("\n\n-----------------------------------------------------------------------\n");
   printf("UP DOWN ���� ���\n");
   printf("1. ���ڰ� �������� ��������.\n");
   printf("2. ����� ���� �� �ϳ��� �����Ѵ�.\n");
   printf("3. ����� ������ ���ڰ� ������ ���ں��� ������ UP, ������ DOWN���� ǥ�õȴ�.\n");
   printf("4. UP, DOWN ��Ʈ�� ��� ������ ���ڸ� ���ߴ� �����̴�.\n");
   printf("5. ����: 1 ~ 100, ����: -1\n");
   printf("-----------------------------------------------------------------------\n\n");
}

