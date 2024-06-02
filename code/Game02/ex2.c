#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define X_MAX 30
#define Y_MAX 20

void gotoxy(int x, int y);
void ball(char *ball, int x, int y);
void animation(int *x, int *y, int *move, int x_b, int y_b);
void draw_rectangle(int c, int r);      // ���� �׸���

int main(void)
{
    char circle[3] = "��";
    int x = X_MAX / 2, y = Y_MAX, move = 1;   // ó���� ���� ���� 
    draw_rectangle(X_MAX, Y_MAX);             // ���� ����

    do
    {
        animation(&x, &y, &move, X_MAX, Y_MAX);
        ball(circle, x, y);
    } while (!_kbhit());

    return 0;
}


void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


void ball(char *ball, int x, int y)
{
    gotoxy(x, y);
    printf("%s", ball);
    Sleep(100);
    gotoxy(x, y);
    printf("  ");   // ����� system("cls")�� ���ڱ��� ����� ������ �Ұ�
}


void animation(int *x, int *y, int *move, int x_b, int y_b)
{
    switch (*move) {
    case 1:                 // �밢��(���� ��)
        *x -= 2;
        *y -= 1;
        if (*x < 3) {
            *x = 3;
            *move = 2;      // ������ȯ
        }
        if (*y < 2) {
            *y = 2;
            *move = 4;
        }
        break;
    case 2:                 // �밢��(������ ��)
        *x += 2;
        *y -= 1;
        if (*x > x_b) {
            *x = x_b;
            *move = 1;
        }
        if (*y < 2) {
            *y = 2;
            *move = 3;
        }
        break;
    case 3:                 // �밢��(������ �Ʒ�)
        *x += 2;
        *y += 1;
        if (*x >= x_b) {
            *x = x_b;
            *move = 4;
        }
        if (*y > y_b) {
            *y = y_b + 1;
            *move = 2;
        }
        break;
    case 4:                 // �밢��(���� �Ʒ�)
        *x -= 2;
        *y += 1;
        if (*x < 3) {
            *x = 3;
            *move = 3;
        }
        if (*y > y_b) {
            *y = y_b + 1;
            *move = 1;
        }
        break;
    }
}


void draw_rectangle(int c, int r)   // ���簢��
{
    int i, j;
    unsigned char a = 0xa6;
    unsigned char b[7];

    for (i = 1; i < 7; i++)
        b[i] = 0xa0 + i;

    printf("%c%c", a, b[3]);
    for (i = 0; i < c; i++)
        printf("%c%c", a, b[1]);

    printf("%c%c", a, b[4]);
    printf("\n");
    for (i = 0; i < r; i++)
    {
        printf("%c%c", a, b[2]);
        for (j = 0; j < c; j++)
        {
            printf(" ");
        }
        printf("%c%c", a, b[2]);
        printf("\n");
    }

    printf("%c%c", a, b[6]);
    for (i = 0; i < c; i++)
        printf("%c%c", a, b[1]);

    printf("%c%c", a, b[5]);
    printf("\n");
}
