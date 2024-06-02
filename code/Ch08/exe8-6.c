#include <stdio.h>

int main(void)
{
   int i, j;

	char course[][50] = { {"[C 프로그래밍]"},{"[컴퓨터 개론]"},{"[객체지향 프로그래밍]"} };
   // 3과목 이름을 이차원 배열에 저장
   int score[4][4] = { {30,30,40},{78,93,88},{98,99,75},{69,78,85} };
   // 3과목에 대한 점수를 이차원 배열에 저장, 총합까지 생각해서 열을 4칸으로 지정함

   printf("[이름]\t%s\t%s %s  [총합]\n", course[0], course[1], course[2]);
   
   for (i = 0; i < 4; i++) 
   {
      printf(" 학생%d", i + 1);
      for (j = 0; j < 3; j++) 
      {
         printf("%10d      ", score[i][j]);  // ex) score[2][1] --> 학생 3의 컴퓨터 개론 점수
         score[i][3] += score[i][j];         
         // 총합 score[i][3] = score[i][0] + score[i][1] + score[i][2]
      }
      printf("\t%10d\n", score[i][3]);    // 학생1의 총합 출력 후 --> 학생2
   }
   return 0;
}