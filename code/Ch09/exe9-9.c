#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 5번 조건: 아래와 같은 함수 5개 사용
void setNumber(void);            // 난수 발생 함수
void printHead(void);            // 사용자의 답 입력
void printHigher(int guess);     // 사용자 답 < 정답
void printLower(int guess);      // 사용자 답 > 정답
void printAnswer(int guess);     // 사용자 답 = 정답

int number = 0;            // 전역변수 number
static int min = 1;        // min는 정적 외부변수
static int max = 100;      // max는 정적 외부변수
int trycount = 0;

int main(void)
{
   int guess = 0;

   setNumber();
   printHead();

   // 2번 조건: 맞출 때까지 계속
   while (1)
   {
      scanf("%d", &guess);
      trycount++;                // 10번 문제
      if (number > guess)
      {
         printHigher(guess);
      }
      else if (number < guess)
      {
         printLower(guess);
      }
      else
      {
         printAnswer(guess);
         break;                  // 맞추면 while문 빠져나옴 
      }
   }

   return 0;
}

// 1번 조건: 1~100중 하나의 난수 발생
void setNumber()
{
   srand(time(NULL));
   number = rand() % 100 + 1;    // number에 저장
}

void printHead()
{
   printf("1~100까지의 정수 중 정답이 있습니다. --> ");
}

// 3번 조건: 힌트룰 자세히 줌(4번 조건: min과 max 이용)
void printHigher(int guess)
{
   printf("%d보다 큰 정수입니다.(시도 횟수 %d번)\n", min = guess, trycount);
   printf("%d~%d사이의 정수를 입력하세요: ", min, max);
}

void printLower(int guess)
{
   printf("%d보다 작은 정수입니다.(시도 횟수 %d번)\n", max = guess, trycount);
   printf("%d~%d사이의 정수를 입력하세요: ", min, max);
}

void printAnswer(int guess)
{
   printf("정답입니다. 총 %d번만에 정답 %d를 맞쳤습니다.\n", trycount, guess);
}