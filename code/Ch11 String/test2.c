#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
   char* pary[] = { "data structure", "programming language", "operating system" };
   char archi[] = "system architecture";
   
   printf("%s\n", pary[1]);
   printf("%c\n", toupper(*pary[0]));
   printf("%s\n", strupr(archi));
   printf("%s\n", archi);
   printf("%s\n", strstr(pary[2], "sys"));
   
   return 0;
}