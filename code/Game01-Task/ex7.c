#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
void draw_basic_square(int x, int y);

int main(void)
{
    int x, y;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            x = 1 + (i * 4);        // 1, 5, 9(4칸씩), 가로
            y = (j + 1) + j;        // 1, 3, 5(2칸씩) 세로
            gotoxy(x, y);
            draw_basic_square(x, y);
        }
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void draw_basic_square(int x, int y)
{
    unsigned char a = 0xa6, b[7], i;
    for (i = 1; i < 7; i++)
        b[i] = 0xa0 + i;

    // 하나의 기본 정사각형은 가로 4칸 세로 2칸 필요
    gotoxy(x, y);               // (1, 1)
    printf("%c%c ", a, b[3]);   // 뒤에 한칸 띄워야 비율이 맞음
    gotoxy(x + 2, y);           // (3, 1)
    printf("%c%c", a, b[4]);
    gotoxy(x, y + 1);           // (1, 2)
    printf("%c%c ", a, b[6]);
    gotoxy(x + 2, y + 1);       // (3, 2)
    printf("%c%c", a, b[5]);
}