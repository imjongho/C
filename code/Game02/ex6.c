#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int alpha_num = 0, hangul_num = 0;
    char word[80];

    FILE *fp;
    errno_t err;
    err = fopen_s(&fp, "�ѿ� �ܾ�.txt", "rt");

    if (NULL != fp)
    {
        // ���Ͽ��� �ܾ�� ��� ������
        while (EOF != fscanf_s(fp, "%s", word, sizeof(word)))
        {
            if (word[0] >= 0 && word[0] <= 127)
                alpha_num++;
            else
                hangul_num++;
        }

        printf("���� �ܾ� : %d��,  �ѱ� �ܾ� : %d��\n", alpha_num, hangul_num);
        fclose(fp);
    }
    else
        printf("���� ���� ����\n");

    return 0;
}


