#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // strcpy_s()

struct STD {
    int sno;
    char name[12];
    char dept[30];
};

int main(void)
{
    int cnt;
    struct STD *p;

    p = (struct STD *)malloc(3 * sizeof(struct STD));

    if (p == NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    p[0].sno = 202001821;
    strcpy_s(p[0].name, sizeof(p[0].name), "임종호");
    strcpy_s(p[0].dept, sizeof(p[0].dept), "컴퓨터 공학부");

    p[1].sno = 222222222;
    strcpy_s(p[1].name, sizeof(p[1].name), "홍길동");
    strcpy_s(p[1].dept, sizeof(p[1].dept), "자동차 공학과");

    for (cnt = 0; cnt < 2; cnt++)
    {
        printf("학번 : %d\n", p[cnt].sno);
        printf("성명 : %s\n", p[cnt].name);
        printf("학과 : %s\n\n", p[cnt].dept);
    }

    free(p);
    return 0;
}