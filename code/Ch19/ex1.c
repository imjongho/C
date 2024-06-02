#include <stdio.h>
#include <windows.h>

int main(void)
{
    unsigned char i, cnt = 0;
    system("chcp 437");

    for (i = 128; i < 255; i++) {
        printf("%c(%3d)  ", i, i);
        cnt++;
        if (cnt == 6) {
            cnt = 0;
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}