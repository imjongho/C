#include <stdio.h>

int main(void)
{
    FILE *fp;
    errno_t err;

    int num = 0;

    err = fopen_s(&fp, "data.txt", "rt");

    if (NULL != fp)
    {
        printf("파일 열기 성공\n");

        while (EOF != fscanf_s(fp, "%d", &num))
        {
            printf("%d\n", num);
        }

        fclose(fp);
    }
    else
    {
        printf("파일 열기 실패\n");
    }

    return 0;
}