#include <stdio.h>
#include <stdlib.h>     // malloc(), free()

int main(void)
{
    int cnt = 0;
    int *score;     // 포인터를 사용하여 동적 메모리 주소로 사용
    score = (int *)malloc(3 * sizeof(int));     // 동적 메모리 할당

    if (score == NULL)
    {
        printf("동적 메모리 할당 오류 발생\n");
        exit(1);    // 프로그램 종료  1 : 비정상 졸료, 0 : 정상 종료
    }

    score[0] = 20;
    score[1] = 60;
    *(score + 2) = 80;

    for (cnt = 0; cnt < 3; cnt++)
    {
        printf("%d번째 점수 : %d\n", cnt + 1, score[cnt]);
    }

    free(score);    // 반납

    return 0;

}