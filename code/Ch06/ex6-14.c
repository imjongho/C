#include <stdio.h>

int main(void)
{
   int a;

   printf("반대로 출력할 정수를 입력하세요.\n");
   scanf("%d", &a);

   printf("\n입력한 수를 반대로 출력하면 >>> ");
   do
   {
      printf("%d", a % 10);   // 내용점검문제 6번과 비슷
      a /= 10;                // a % 10 => 일의자리수, a /= 10 => 일의 자리수가 삭제됨    
   } while (a > 0);           // a > 0 => a는 정수여야 함
   printf("\n");
   
   return 0;
}