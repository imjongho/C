#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y);

int main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        system("cls");
        for (int j = 1; j <= 9; j++)
        {
            gotoxy(20, 10+j);
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("Press any key\n");
        _getch();
    }

    /*
    char ch;
    printf("\n���ڸ� �Է��ϰ� Enter>");
    scanf_s("%c", &ch, sizeof(ch));
    system("cls");
    printf("�Էµ� ���� %c\n", ch);
    */


    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}