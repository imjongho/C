#include <stdio.h>

int main(void)
{
    int su = 0x00000352;
    FILE *fb;
    errno_t err;

    err = fopen_s(&fb, "binary.dat", "wb");

    if (NULL != fb)
    {
        printf("���̳ʸ� ���� ���� ����\n");

        fwrite(&su, sizeof(int), 1, fb);
        fclose(fb);
    }
    else
    {
        printf("���� ���� ����\n");
    }

    return 0;
}