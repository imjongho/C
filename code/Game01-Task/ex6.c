#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define X_MAX 79
#define Y_MAX 24

void gotoxy(int x, int y);
void move_arrow_key(char key, int *x, int *y, int x_b, int y_b);

int main(void)
{
    char key;
    int x = 20, y = 5;

    do
    {
        gotoxy(x, y);
        printf("A");
        key = _getch();
        move_arrow_key(key, &x, &y, X_MAX, Y_MAX);
    } while (key != 27);

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move_arrow_key(char key, int *x, int *y, int x_b, int y_b)
{
    switch (key)        // 숫자 키패드
    {
    case 49:            // End(1): 좌하단
        *x = *x - 1;
        if (*x < 1)
            *x = 1;
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    case 50:            // 아래 화살표(2)
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    case 51:            // PgDn(3): 우하단
        *x = *x + 1;
        if (*x > x_b)
            *x = x_b;
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    case 52:            // 왼쪽 화살표(4)
        *x = *x - 1;
        if (*x < 1)
            *x = 1;
        break;          // 5는 동작 X
    case 54:            // 오른쪽 화살표(6)
        *x = *x + 1;
        if (*x > x_b)
            *x = x_b;
        break;
    case 55:            // Home(7): 좌상단
        *x = *x - 1;
        if (*x < 1)
            *x = 1;
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
        break;
    case 56:            // 위 화살표(8)
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
        break;
    case 57:            // PgUp(9): 우상단
        *x = *x + 1;
        if (*x > x_b)
            *x = x_b;
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
        break;
    default:
        return;
    }
}