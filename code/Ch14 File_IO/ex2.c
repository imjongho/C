#include <stdio.h>

int main(void)
{
    FILE *fp;
    errno_t err;
    
    int a, b, c;

    err = fopen_s(&fp, "data.txt", "rt");

    if (NULL != fp)
    {
        printf("파일 열기 성공\n");

        fscanf_s(fp, "%d %d %d", &a, &b, &c);
        printf("%d %d %d\n", a, b, c);

        fclose(fp);
    }
    else
    {
        printf("파일 열기 실패\n");
    }

    return 0;
}