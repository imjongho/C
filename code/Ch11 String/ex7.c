#include <stdio.h>

int change(char *a);

int main(int argc, char *argv[])
{
   int sum = 0;

   sum = change(argv[1]) + change(argv[2]);
   printf("명령어 줄에 입력된 두 정수의 합: %d\n", sum);

   return 0;
}

// 문자를 정수로 바꾸는 함수(6번 참조)
int change(char *a)
{
   int i = 0, num = 0;

   for (i = 0; a[i] != 0; i++)
   {
      num = num * 10 + a[i] - '0';
   }

   return num;
}