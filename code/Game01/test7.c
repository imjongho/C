#include <stdio.h>

void draw_check_pattern(void);

int main(void)
{
    draw_check_pattern();
    return 0;
}

void draw_check_pattern(void)
{
    unsigned char a = 0xa6;
    unsigned char b[12];  
    int i;

    for (i = 1; i < 12; i++)
        b[i] = 0xa0 + i;

    printf("%c%c ", a, b[3]);
    printf("%c%c ", a, b[8]);
    printf("%c%c ", a, b[4]);
    printf("\n");
    printf("%c%c ", a, b[7]);
    printf("%c%c ", a, b[11]);
    printf("%c%c ", a, b[9]);
    printf("\n");
    printf("%c%c ", a, b[6]);
    printf("%c%c ", a, b[10]);
    printf("%c%c ", a, b[5]);
    printf("\n");
}