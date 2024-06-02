#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int com_num;     // 컴퓨터가 만들 랜덤한 값이 저장될 변수
int user_num;    // 사용자가 입력한 값이 저장될 변수
int temp_num;
int cnt;         // 입력 시도 수를 카운트하기 위한 변수

void reset(void);    // 초기화를 시키는 함수

int main(void)
{
   while (1)
   {
      reset();    // 초기화
      while (1)
      {
         while (1)
         {
            temp_num = 0;
            printf("%02d. 입력: ", cnt);

            fflush(stdin);    // 입력 버퍼를 비워주는 코드
            scanf("%d", &temp_num);

            if (temp_num == -1)
            {
               exit(0);    // 프로그램 강제 종료 코드
            }

            if (temp_num >= 1 && temp_num <= 100)
            {
               cnt++;
               break;
            }

            if (temp_num < 1 || temp_num > 100)
            {
               printf("다시 입력(범위: 1 ~ 100)\n\n");
            }
         }

         user_num = temp_num;

         // 결과 출력
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
            printf("\n정답!!!\n");
            printf("시도 횟수: %d\n", cnt - 1);
            printf("Please enter any key to restart");
            break;
         }
      }
   }
   
   return 0;
}

void reset(void)
{
   system("cls");       // 화면 지우기
   srand((unsigned)time(NULL));   // 난수표 생성
   
   com_num = rand() % 99 + 1;    // 난수 입력(1 ~ 100)
   cnt = 1;
   user_num = 0;

   printf("<<< GAME START >>>");
   printf("\n\n-----------------------------------------------------------------------\n");
   printf("UP DOWN 게임 방법\n");
   printf("1. 숫자가 랜덤으로 정해진다.\n");
   printf("2. 당신이 숫자 중 하나를 선택한다.\n");
   printf("3. 당신이 선택한 숫자가 정해진 숫자보다 낮으면 UP, 높으면 DOWN으로 표시된다.\n");
   printf("4. UP, DOWN 힌트를 얻어 정해진 숫자를 맞추는 게임이다.\n");
   printf("5. 범위: 1 ~ 100, 종료: -1\n");
   printf("-----------------------------------------------------------------------\n\n");
}

