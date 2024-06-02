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
    int snake_x[SNAKE_BODY_NUM] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };    // snake_x[0]: ��Ӹ� x��ġ
    int snake_y[SNAKE_BODY_NUM] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };    // snake_y[0]: ��Ӹ� y��ġ
    // �첿�� ��ġ ����

    do
    {
        system("cls");

        for (int i = SNAKE_BODY_NUM - 1; i >= 0; i--)
        {
            gotoxy(snake_x[i], snake_y[i]);
            printf("A");
        }

        // ���� ��ǥ�� ��ĭ�� �ڷ�(�Ӹ��� ���󰡰Բ�)
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
        // �� �Ӹ� �ּҸ� ������
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
    case 72:    // ���� ȭ��ǥ
        *y = *y - 1;
        if (*y < 1)
            *y = 1;
        break;
    case 75:    // ���� ȭ��ǥ
        *x = *x - 1;
        if (*x < 1)
            *x = 1;
        break;
    case 77:    // ������ ȭ��ǥ
        *x = *x + 1;
        if (*x > x_b)
            *x = x_b;
        break;
    case 80:    // �Ʒ��� ȭ��ǥ
        *y = *y + 1;
        if (*y > y_b)
            *y = y_b;
        break;
    default:
        return;
    }
}