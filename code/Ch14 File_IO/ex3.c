#include <stdio.h>

int main(void)
{
    FILE *fp;
    errno_t err;

    int num = 0;

    err = fopen_s(&fp, "data.txt", "rt");

    if (NULL != fp)
    {
        printf("���� ���� ����\n");

        while (EOF != fscanf_s(fp, "%d", &num))
        {
            printf("%d\n", num);
        }

        fclose(fp);
    }
    else
    {
        printf("���� ���� ����\n");
    }

    return 0;
}