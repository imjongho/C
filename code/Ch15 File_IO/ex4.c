#include <stdio.h>

int main(void)
{
    FILE* fb;
    errno_t err;

    int data_list[3];
    int data = 0, f_size = 0, a = 0;

    err = fopen_s(&fb, "list.dat", "rb");

    if (NULL != fb)
    {
        printf("���̳ʸ� ���� ���� ����\n");

        fread(&data, sizeof(int), 1, fb);
        fread(data_list, sizeof(int), 3, fb);

        fseek(fb, 8, SEEK_SET);
        f_size = ftell(fb);
        printf("���� ũ�� : %d����Ʈ\n", f_size);
        fread(&a, sizeof(int), 1, fb);
        printf("data : %d\n", a);

        fclose(fb);
        
        printf("data_su : %d\n", data);
        for (int i = 0; i < 3; i++)
        {
            printf("[%d] : %d\n", i, data_list[i]);
        }
    }
    else
    {
        printf("���̳ʸ� ���� ���� ����\n");
    }

    return 0;
}