#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define X_MAX 79
#define Y_MAX 24
#define SNAKE_BODY_NUM 10

void gotoxy(int x, int y);
void move_arrow_key(char key, int *x, int *y, int x_b, int y_b);

int main(void)
{
    char key = ' ';
    int snake_x[SNAKE_BODY_NUM] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };    // snake_x[0]: 뱀머리 x위치
    int snake_y[SNAKE_BODY_NUM] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };    // snake_y[0]: 뱀머리 y위치
    // 뱀꼬리 위치 저장

    do
    {
        system("cls");

        for (int i = SNAKE_BODY_NUM - 1; i >= 0; i--)
        {
            gotoxy(snake_x[i], snake_y[i]);
            printf("A");
        }

        // 몸통 좌표를 한칸씩 뒤로(머리를 따라가게끔)
        for (int i = SNAKE_BODY_NUM - 1; i > 0; i--) 
        {
            if (key == 72 || key == 75 || key == 77 || key == 80)
            {
                snake_x[i] = snake_x[i - 1];
                snake_y[i] = snake_y[i - 1];
            }
        }

        key = _getch();
        move_arrow_key(key, &snake_x[0], &snake_y[0], X_MAX, Y_MAX);
        // 뱀 머리 주소만 보내줌
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
    switch (key)
    {
    case 72:    // 위쪽 화살표
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
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
    case 80:    // 아래쪽 화살표
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    default:
        return;
    }
}