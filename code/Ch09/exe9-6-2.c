#include <stdio.h>

static int global = 100;

void static_global()
{
   printf("���� �������� : global = %d\n", global++);
}