#include <stdio.h>

int main(void)
{
   int i;

   char al[26] = { 'A' };

   for (i = 0; i < 26; i++)
   {
      al[i] = 'A' + i;
      printf("c[%2d] = %c %s", i, al[i], ((i+1)%6==0) ? "\n" : " ");
      // ���ٿ� 6���� ���
   }
   
   return 0;
}