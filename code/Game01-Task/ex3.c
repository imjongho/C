#include <stdio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y);
void gotoxy_time(int x, int y);

int main(void)
{
    gotoxy_time(70, 1);     // ���� ���
    gotoxy_time(60, 3);
    printf("\n\n");

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void gotoxy_time(int x, int y)
{
    gotoxy(x, y);   // ��ġ

    // ���� �ð� ���
    time_t now_time = time(NULL);
    struct tm t;
    localtime_s(&t, &now_time);
    printf("%d�� %d�� %d��", t.tm_hour, t.tm_min, t.tm_sec);
}



