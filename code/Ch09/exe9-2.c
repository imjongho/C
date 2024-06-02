#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int seed = 0, i;

   printf("난수의 seed값 입력\n");
   scanf("%d", &seed);  // seed값을 표쥰입력으로 받기
   
   srand(seed);
   for (i = 0; i < 5; i++)
   {
      printf("%d\t", rand());
   }

   return 0;
}