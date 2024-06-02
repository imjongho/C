#include <stdio.h>

int main(void)
{
    FILE* fp = NULL;
    errno_t err;

    char str[50];
    int cnt;

    err = fopen_s(&fp, "save.txt", "wt");

    if (err == 0)
    {
        printf("save.txt 파일 생성 완료\n");
        printf("1. 문자열 입력 : ");
        gets_s(str, sizeof(str));
        
        printf("파일에 쓴 내용 : %s\n", str);

        for (cnt = 0; str[cnt] != NULL; cnt++)
        {
            fputc(str[cnt], fp);
        }

        fclose(fp);
        printf("save.txt 파일 닫기 완료\n");
    }
    else
    {
        printf("파일 열기 실패\n");
    }

    return 0;
}