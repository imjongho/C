#include <stdio.h>

int main(void)
{
   int i = 0, j = 0;
   
   // 이차원 배열 초기화
   int td[][3] = { {1}, {1, 2}, {1, 2, 3} }; // td[3][3]
   int md[][3] = { 1, 1, 2, 1, 2, 3 };       // md[2][3]

   printf("2차원 배열을 초기화한 후 반복문 for를 이용해 출력1\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d %s", td[i][j], (j == 2) ? "\n" : ", ");
      }
   }

   printf("\n");

   printf("2차원 배열을 초기화한 후 반복문 for를 이용해 출력2\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d %s", md[i][j], (j == 2) ? "\n" : ", ");
      }
   }

   return 0;
}

/*
td          md(가로로 3씩 끊김)
100         112
120         123
123
*/