#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user = 0, com = 0;
char *RPS[] = { "가위", "바위", "보" };      // RPS[0] = 가위
                                             // RPS[1] = 바위
void game(void);                             // RPS[2] = 보

int main(void)
{
   int finish = 0;

   srand(time(NULL));

   while (1)         
   {
      printf("가위 바위 보 시작\n");
      printf("가위 = 0, 바위 = 1, 보 = 2 입력 --> ");
      scanf("%d", &user);
      
      if (user < 0 || user > 2)
      {
         printf("\n가위 바위 보를 다시 입력\n");
         continue;
      }

      com = rand() % 3;       // 컴퓨터가 무작위로 0, 1, 2 지정

      printf("컴퓨터 : %s VS 유저 : %s\n\n", RPS[com], RPS[user]);
      
      game();                 // game 함수 호출해서 승패를 가림
      
      printf("\n종료 => 3, 계속하려면 다른 수를 누르세요.\n\n");
      scanf("%d", &finish);
      if (finish == 3)
      {
         break;               // while문 빠져나옴
      }
   }

   return 0;
}

void game(void)                     
{
   if (com == user)              // 컴퓨터 = 유저, 먼저 거름
   {
      printf("비겼습니다.\n");
   }
   else if (com == 0)            // 컴퓨터 = 가위    
   {
      if (user == 1)             // 유저 = 바위
      {
         printf("이겼습니다.\n");
      }
      else                       // 유저 = 보
      {
         printf("졌습니다.\n");
      }
   }
   else if (com == 1)            // 컴퓨터 = 바위
   {
      if (user == 0)             // 유저 = 가위 
      {
         printf("졌습니다.\n");       
      }
      else                       // 유저 = 보
      {
         printf("이겼습니다.\n");
      }
   }
   else if (com == 2)            // 컴퓨터 = 보
   {
      if (user == 0)             // 유저 = 가위 
      {
         printf("이겼습니다.\n");
      }
      else                       // 유저 = 바위
      {
         printf("졌습니다.\n");
      }
   }
}