#include <stdio.h>
#include <string.h>

int main(void)
{
   char stmt[80] = "Java is object oriented ";
   char java[] = "Java ";
   char c[] = "C ";
   char lang[] = "language.";
   char is[] = "is ";
   char oo[] = "object oriented ";
   char p[] = "procedural ";

   printf("%s\n", strcat(stmt, lang));
   printf("%s\n", stmt);
   printf("%s\n", strncpy(stmt, "cpp ", 4));
   printf("%s\n", strcpy(stmt, c));
   printf("%s\n", strncat(stmt, lang, 7));
   printf("%s\n", strcat(stmt, " "));
   printf("%s\n", strcat(stmt, is));
   printf("%s\n", strcat(stmt, p));
   printf("%s\n", strncat(stmt, lang, 7));
   printf("%s\n", strcat(stmt, "!!"));

   return 0;
}