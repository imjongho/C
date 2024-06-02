#include <stdio.h>

int main(void)
{
    FILE *fp;
    errno_t err;

    err = fopen_s(&fp, "sample.txt", "wt");

    if (NULL != fp)
    {
        printf("1. 새로운 파일 생성 후 문자열 저장 안료\n");
        fprintf(fp, "Happy Day\n");
        fprintf(fp, "Good Day\n");
        printf("2. 윈도우 탐색기에서 sample.txt 파일 내용 확인\n");
        fclose(fp);
    }
    else
    {
        printf("파일 열기 실패\n");
    }

    return 0;
}