#include <stdio.h>

void print(int totalcredit, double totalpoint);

char *lecture[8][2] = { {"교선", "21세기 트랜드와 경영"},
                     {"교선", "영어 듣기"},
                     {"교선", "현대 사회와 인간"},
                     {"전선", "윈도우 프로그래밍"},
                     {"전선", "전자상거래 응용사례"},
                     {"전필", "데이터베이스"},
                     {"전필", "시스템분석설계"}, 
                     {"전필", " 웹 프로그래밍"} };

char *GRADE[] = { "F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+" };
double GRADEPOINT[] = { 0.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5 };

int point[8][2];
int grade[8];

int main(void)
{
   double totalpoint = 0.0;
   int totalcredit = 0;
   int i = 0;

   printf("다음 표시되는 강좌의 학점과 점수를 입력하세요.\n");
   printf("A+ : 95 ~ 100, A0 : 90 ~ 94, ");
   printf("B+ : 85 ~  89, B0 : 80 ~ 84\n");
   printf("C+ : 75 ~  79, C0 : 70 ~ 74, ");
   printf("D+ : 65 ~  69, D0 : 60 ~ 64, F : 59 이하 \n\n");

   printf("입력 예 >>\n");
   printf("%6s%30s", lecture[0][0], lecture[0][1]);
   printf(" >> 2(학점) 96(점수)\n\n");

   printf("지금부터 입력하세요. >>\n");
   for (i = 0; i < 8; i++)
   {
      printf("%6s%30s >> ", lecture[i][0], lecture[i][1]);
      scanf("%d %d", &point[i][0], &point[i][1]);
      grade[i] = point[i][1] / 5;
      totalpoint += point[i][0] * GRADEPOINT[grade[i] - 11];
      totalcredit += point[i][0];
      //printf("%lf\n", GRADEPOINT[grade[i]-11]);
   }

   print(totalcredit, totalpoint);

   return 0;
}

void print(int totalcredit, double totalpoint)
{
   int i;

   printf("\n************************************************************\n");
   printf("%7s%18s%17s%18s\n", "구분", "과 목 명", "학 점", "성 적");
   printf("--------------------------------------------------------------\n");

   for (i = 0; i < 8; i++)
   {
      printf("%7s%23s%12d%16s\n", lecture[i][0], lecture[i][1], point[i][0], GRADE[grade[i] - 11]);
      printf("-----------------------------------------------------------\n");
   }

   printf("%7s%18s%17s%18s\n", "학점계", "평 점 계", "평점평균", "백분율환산");
   printf("**************************************************************\n");

   printf("%7d%17.1f%14.2f/4.5%17.1f\n", totalcredit, totalpoint,
      (totalpoint / totalcredit), 100 * (totalpoint / totalcredit) / 4.5);
   printf("**************************************************************\n");
}