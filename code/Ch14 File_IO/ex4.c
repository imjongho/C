#include <stdio.h>

int main(void)
{
    FILE* fp;
    errno_t err;

    char str[80];

    err = fopen_s(&fp, "insa.txt", "rt");

    if (fp != NULL)
    {
        printf("파일 열기 성공\n");

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
        printf("파일 열기 실패\n");
    }

    return 0;
}