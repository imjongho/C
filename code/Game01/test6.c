#include <stdio.h>

void draw_rectangle(int c, int r);

int main(void)
{
    int col, row;
    printf("직사각형 입력 : ");
    scanf_s("%d %d", &col, &row);
    draw_rectangle(col, row);

    return 0;
}

void draw_rectangle(int c, int r)
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