#include <stdio.h>

int main(void)
{
    FILE *fb;
    errno_t err;

    int data;

    err = fopen_s(&fb, "binary.dat", "rb");

    if (NULL != fb)
    {
        printf("���̳ʸ� ���� ���� ����\n");

        fread(&data, sizeof(int), 1, fb);    
        fclose(fb);
        printf("data : %d(0x%04x)\n", data, data);
    }
    else
    {
        printf("���̳ʸ� ���� ���� ����\n");
    }

    return 0;
}