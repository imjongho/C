#include <stdio.h>

int main(void)
{
   int year;
   
   printf("³âµµ ÀÔ·Â: ");
   scanf("%d", &year);

   switch (year % 12)
   {
      case 0:
         printf("%d³âÀº ¿ø¼şÀÌ¶ì\n", year);
         break;
      case 1:
         printf("%d³âÀº ´ß¶ì\n", year);
         break;
      case 2:
         printf("%d³âÀº °³¶ì\n", year);
         break;
      case 3:
         printf("%d³âÀº µÅÁö¶ì\n", year);
         break;
      case 4:
         printf("%d³âÀº Áã¶ì\n", year);
         break;
      case 5:
         printf("%d³âÀº ¼Ò¶ì\n", year);
         break;
      case 6:
         printf("%d³âÀº È£¶ûÀÌ¶ì\n", year);
         break;
      case 7:
         printf("%d³âÀº Åä³¢¶ì\n", year);
         break;
      case 8:
         printf("%d³âÀº ¿ë¶ì\n", year);
         break;
      case 9:
         printf("%d³âÀº ¹ì¶ì\n", year);
         break;
      case 10:
         printf("%d³âÀº ¸»¶ì\n", year);
         break;
      case 11:
         printf("%d³âÀº ¾ç¶ì\n", year);
         break;
    }

   return 0;
}