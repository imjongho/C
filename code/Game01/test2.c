#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    do
    {
        printf("해당키를 누르세요>");
        ch = _getch();
        printf("\n키:%c, ASCII(10):%d, (16):%x\n", ch, ch, ch);
    } while (ch != 0);

    /*
    int chr;
    do
    {
        chr = _getch();
        if (chr == 0 || chr == 0xe0)
        {
            chr = _getch();
            printf("확장키 code=%d\n", chr);
        }
        else
        {
            printf("아스키 code=%d\n", chr);
        }
    } while (1);
    */

    return 0;
}