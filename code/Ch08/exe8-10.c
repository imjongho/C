#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
   int i, j, number, sum = 0, max = 0;
   int count[10] = { 0 };
   int num[60];
   int ea = sizeof(num) / sizeof(num[0]);

   srand(time(NULL));         // 난수 초기화

   for (i = 0; i < 60; i++)
   {
      num[i] = rand() % 10;      // 난수
   }

   printf("다음과 같은 0에서 9까지의 정수에서\n\n");

   for (i = 0; i < 60; i++)
   {
      printf("%2d%s", num[i], (i + 1) % 20 == 0 ? "\n" : "");
   }
      
   for (i = 0; i < 60; i++)
   {
      sum += num[i];
   }
    
   printf("\n********\n  평균  \n********\n");
   printf("배열 원소의 평균을 구하려한다.\n");
   printf("배열 원소의 수는 %d이고 배열 원소의 전체 합은 %d이므로\n평균은 %.4lf 이다.\n\n", ea, sum, (double)sum / ea);

   printf("********\n  분포  \n********\n");
   printf("------------------------------------------------------\n");
   printf("        수      횟수        히스토그램\n\n");
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

	for (j = 0; j < 10; j++)      // 예제 4번 응용
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

	printf("\n분포에서는 수의 빈도 횟수를 나타낸다.\n분석결과, 가장 많은 빈도수는 수 %d이(가) %d번 나타났다.\n", number, max);


	return 0;
}
