#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define X_MAX 79
#define Y_MAX 24

void move_arrow_key(char key, int* x, int* y, int x_b, int y_b);
void gotoxy(int x, int y);

int main(void)
{
    char key;
    int x = 10, y = 5;
    do
    {
        gotoxy(x, y);
        printf("A");
        key = _getch();
        printf("\b ");   // 출력된 문자의 삭제 
        // system("cls");
        move_arrow_key(key, &x, &y, X_MAX, Y_MAX);
        
    } while (key != 27);    // escape key

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move_arrow_key(char key, int* x, int* y, int x_b, int y_b)
{
    switch (key)
    {
    case 72:    // 위 화살표
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
        break;
    case 80:    // 아래 화살표
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    case 75:    // 왼쪽 화살표
        *x = *x - 1;
        if (*x < 1)
            *x = 1;
        break;
    case 77:    // 오른쪽 화살표
        *x = *x + 1;
        if (*x > x_b)
            *x = x_b;
        break;
    default:
        return;
    }
}