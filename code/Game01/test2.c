#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    do
    {
        printf("�ش�Ű�� ��������>");
        ch = _getch();
        printf("\nŰ:%c, ASCII(10):%d, (16):%x\n", ch, ch, ch);
    } while (ch != 0);

    /*
    int chr;
    do
    {
        chr = _getch();
        if (chr == 0 || chr == 0xe0)
        {
            chr = _getch();
            printf("Ȯ��Ű code=%d\n", chr);
        }
        else
        {
            printf("�ƽ�Ű code=%d\n", chr);
        }
    } while (1);
    */

    return 0;
}