#include <stdio.h>

int main(void)
{
    FILE* fp;
    errno_t err;

    char str[80];

    err = fopen_s(&fp, "insa.txt", "rt");

    if (fp != NULL)
    {
        printf("���� ���� ����\n");

        /*
        while (EOF != fscanf_s(fp, "%s", str, sizeof(str)))
        {
            printf("%s\n", str);
        }
        */

        while (NULL != fgets(str, sizeof(str), fp))
        {
            printf("%s\n", str);
        }

        fclose(fp);
    }
    else
    {
        printf("���� ���� ����\n");
    }

    return 0;
}