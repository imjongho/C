#include <stdio.h>
#include <string.h>
int main(void)
{
   char str[30] = "int main(void) { char str[10]";
   
   printf("%s\n", strtok(str, "]"));
   printf("%s\n", str);
   printf("%s\n", strtok(str, "["));
   printf("%s\n", strtok(str, "{"));
   printf("%s\n", strtok(str, "("));
   
   return 0;
}