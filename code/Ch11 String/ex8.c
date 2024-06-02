#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINENUM 81

void swap(char *line, int len);

int main(void)
{
   int len = 0;
   char line[LINENUM] = { 0, };

   printf("한 줄의 문자열 입력(영어로): ");
   gets(line);

   len = strlen(line);     // 문자열의 길이
   swap(line, len);        // 대/소문자 변환하는 함수

   return 0;
}

void swap(char *line, int len)
{
   int i = 0;

   for (i = 0; i < len; i++)
   {
      if (line[i] == tolower(line[i]))    // tolower 소문자를
      {
         line[i] = toupper(line[i]);      // toupper 대문자로 변경
      }
      else if (line[i] == toupper(line[i]))     // 대문자를
      {
         line[i] = tolower(line[i]);            // 소문자로 변경
      }
   }
   printf("대/소문자 변환: %s\n", line);
}