#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int alpha_num = 0, hangul_num = 0;
    char word[80];

    FILE *fp;
    errno_t err;
    err = fopen_s(&fp, "한영 단어.txt", "rt");

    if (NULL != fp)
    {
        // 파일에서 단어로 끊어서 가져옴
        while (EOF != fscanf_s(fp, "%s", word, sizeof(word)))
        {
            if (word[0] >= 0 && word[0] <= 127)
                alpha_num++;
            else
                hangul_num++;
        }

        printf("영어 단어 : %d개,  한글 단어 : %d개\n", alpha_num, hangul_num);
        fclose(fp);
    }
    else
        printf("파일 열기 실패\n");

    return 0;
}


