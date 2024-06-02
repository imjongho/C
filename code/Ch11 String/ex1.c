#include <stdio.h>

int main(void)
{
   char *name[] = { "임종호", "컴퓨터공학부" };
   printf("내 이름은 %s이고 학과는 %s이다.\n", name[0], name[1]);
   return 0;
}