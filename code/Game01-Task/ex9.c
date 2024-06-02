#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
void draw_check(int c, int r);

int main(void)
{   
    int x, y;               // 1~16������ ��ġ
    int col, row;           // ����, ����
    int num = 1;            // ����

    printf("����, ������ ���̴� space�� �и��Ͽ� �Է��ϼ���.\n");
    printf("n * m ���� ��翡 ���ڰ� 1 ~ n*m ���� ���ϴ�.\n");
    printf("���� * ���� �Է� : ");
    scanf_s("%d %d", &col, &row);
    
    system("cls");
    draw_check(col, row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            x = 3 + (j * 4);    // 3, 7, 11(4ĭ��), ����
            y = 2 + (i * 2);    // 2, 4, 6(2ĭ��), ����
            gotoxy(x, y);
            
            printf("%d", num);
            num++;                 
        }
    }
    printf("\n\n");

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void draw_check(int c, int r)
{
    int i, j;
    unsigned char a = 0xa6;
    unsigned char b[12];

    for (i = 1; i < 12; i++)
        b[i] = 0xa0 + i;

    printf("%c%c ", a, b[3]);
    for (i = 0; i < c - 1; i++)
    {
        printf("%c%c ", a, b[1]);
        printf("%c%c ", a, b[8]);
    }
    printf("%c%c ", a, b[1]);
    printf("%c%c", a, b[4]);
    printf("\n");

    for (i = 0; i < r - 1; i++)
    {
        printf("%c%c ", a, b[2]);
        for (j = 0; j < c; j++)
        {
            printf("  ");
            printf("%c%c ", a, b[2]);
        }
        printf("\n");
        printf("%c%c ", a, b[7]);
        for (j = 0; j < c - 1; j++)
        {
            printf("%c%c ", a, b[1]);
            printf("%c%c ", a, b[11]);
        }
        printf("%c%c ", a, b[1]);
        printf("%c%c", a, b[9]);
        printf("\n");
    }

    printf("%c%c ", a, b[2]);
    for (j = 0; j < c; j++)
    {
        printf("  ");
        printf("%c%c ", a, b[2]);
    }
    printf("\n");

    printf("%c%c ", a, b[6]);
    for (i = 0; i < c - 1; i++)
    {
        printf("%c%c ", a, b[1]);
        printf("%c%c ", a, b[10]);
    }
    printf("%c%c ", a, b[1]);
    printf("%c%c", a, b[5]);
    printf("\n");
}

