#include <stdio.h>

void change(char *num_str);

int main(void)
{
   char num_str[] = "4356";
   
   change(num_str);     // 문자열을 정수로 바꾸는 함수

   return 0;
}

void change(char *num_str)
{
   int i = 0, num = 0;

   // num_str[i]의 값이 NULL 문자이면 0이 되기 때문이다.
   for (i = 0; num_str[i] != 0; i++)
   {
      num = num * 10 + num_str[i] - '0';
   }
   printf("%d", num);
}