#include <stdio.h>

static int global = 100;

void static_global()
{
   printf("정적 전역변수 : global = %d\n", global++);
}