#include <stdio.h>

int main(void) 
{
    char hangul[3] = "°¡";
    unsigned char code;

    unsigned char b1 = 200;
    unsigned char b2 = 254;

    unsigned char a1 = 0xb0;
    unsigned char a2;

    unsigned char c1 = 0xca;
    unsigned char c2;

    unsigned char d1 = 0xa1;
    unsigned char d2;

    code = hangul[0];
    printf("%x %d\n", code, code);
    code = hangul[1];
    printf("%x %d\n", code, code);

    printf("%c%c\n", hangul[0], hangul[1]);
    printf("%c%c\n\n", b1, b2);

    for (a2 = 0xa1; a2 <= 0xfe; a2++) 
    {
        printf("%c%c(%2x%2x)", a1, a2, a1, a2);
        if (a2 % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n");

    for (c2 = 0xa1; c2 <= 0xfe; c2++)
    {
        printf("%c%c(%2x%2x)", c1, c2, c1, c2);
        if (c2 % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n");

    for (d2 = 0xa1; d2 <= 0xfe; d2++)
    {
        printf("%c%c(%2x%2x)", d1, d2, d1, d2);
        if (d2 % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n");



    return 0;
}