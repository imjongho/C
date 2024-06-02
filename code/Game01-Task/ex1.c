#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
void gotoxy_str(char *str, int x, int y);

int main(void)
{
    char str[50];
    printf("문자열 입력 : ");
    scanf_s("%s", str, sizeof(str));
    system("cls");
    
    gotoxy_str(str, 7, 7);     // 호출
    printf("\n\n");

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void gotoxy_str(char *str, int x, int y)
{
    gotoxy(x, y);
    printf("%s", str);
}







