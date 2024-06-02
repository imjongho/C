#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);
void move_arrow_key(char key, int *num, int *change);

int main(void)
{
    char key;
    int num = 10;           // 기본 숫자
    int change = 1;         // 증감 단위
    do
    {
        system("cls");

        gotoxy(30, 15);     // 화면 중앙에 값 표시
        printf("현재 증감/감소 단위 : %d", change);

        gotoxy(30, 10);
        printf("%d", num);

        key = _getch();
        move_arrow_key(key, &num, &change);
    } while (key != 27);

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move_arrow_key(char key, int *num, int *change)
{
    switch (key)
    {
    case 72:    // 상(증가)
        *num = *num + *change;
        break;
    case 75:    // 좌(증감단위 감소)
        *change = *change - 1;
        break;
    case 77:    // 우(증감단위 증가)
        *change = *change + 1;
        break;
    case 80:    // 하(감소)
        *num = *num - *change;
        break;
    default:
        return;
    }
}