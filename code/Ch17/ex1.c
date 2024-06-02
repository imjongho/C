#include <stdio.h>
#include <stdlib.h>     // malloc(), free()

int main(void)
{
    int cnt = 0;
    int *score;     // �����͸� ����Ͽ� ���� �޸� �ּҷ� ���
    score = (int *)malloc(3 * sizeof(int));     // ���� �޸� �Ҵ�

    if (score == NULL)
    {
        printf("���� �޸� �Ҵ� ���� �߻�\n");
        exit(1);    // ���α׷� ����  1 : ������ ����, 0 : ���� ����
    }

    score[0] = 20;
    score[1] = 60;
    *(score + 2) = 80;

    for (cnt = 0; cnt < 3; cnt++)
    {
        printf("%d��° ���� : %d\n", cnt + 1, score[cnt]);
    }

    free(score);    // �ݳ�

    return 0;

}