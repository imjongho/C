#include <stdio.h>

int main(void)
{
    int su = 0x00000352;
    FILE *fb;
    errno_t err;

    err = fopen_s(&fb, "binary.dat", "wb");

    if (NULL != fb)
    {
        printf("바이너리 파일 열기 성공\n");

        fwrite(&su, sizeof(int), 1, fb);
        fclose(fb);
    }
    else
    {
        printf("파일 열기 실패\n");
    }

    return 0;
}