#include <stdio.h>
#include <windows.h>

void my_gotoxy(int x, int y);

int main(void)
{
    my_gotoxy(1, 1);        // 좌측하단: 원점(1, 1), 우측 상단(80, 24)
    printf("A(1, 1)");
    my_gotoxy(40, 10);
    printf("B(40, 10)");
    my_gotoxy(70, 24);
    printf("C(70, 24)");
    my_gotoxy(1, 24);
    printf("D(1, 24)");

    my_gotoxy(1, 1);
    printf("\n\n");

    return 0;
}

void my_gotoxy(int x, int y)
{
    COORD Pos = { x - 1, 23 - (y - 1) };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}



