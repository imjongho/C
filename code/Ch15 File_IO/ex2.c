#include <stdio.h>

int main(void)
{
    FILE *fb;
    errno_t err;

    int su = 10;
    int su_list[3] = { 4, 6, 8 };

    err = fopen_s(&fb, "list.dat", "wb");

    if (NULL != fb)
    {
        printf("���̳ʸ� ���� ���� ����\n");

        fwrite(&su, sizeof(int), 1, fb);
        fwrite(su_list, sizeof(int), 3, fb);

        fclose(fb);
    }
    else
    {
        printf("���̳ʸ� ���� ���� ����\n");
    }

    return 0;
}