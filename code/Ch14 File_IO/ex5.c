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
        printf("save.txt ���� ���� �Ϸ�\n");
        printf("1. ���ڿ� �Է� : ");
        gets_s(str, sizeof(str));
        
        printf("���Ͽ� �� ���� : %s\n", str);

        for (cnt = 0; str[cnt] != NULL; cnt++)
        {
            fputc(str[cnt], fp);
        }

        fclose(fp);
        printf("save.txt ���� �ݱ� �Ϸ�\n");
    }
    else
    {
        printf("���� ���� ����\n");
    }

    return 0;
}