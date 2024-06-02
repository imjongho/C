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
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }

    p[0].sno = 202001821;
    strcpy_s(p[0].name, sizeof(p[0].name), "����ȣ");
    strcpy_s(p[0].dept, sizeof(p[0].dept), "��ǻ�� ���к�");

    p[1].sno = 222222222;
    strcpy_s(p[1].name, sizeof(p[1].name), "ȫ�浿");
    strcpy_s(p[1].dept, sizeof(p[1].dept), "�ڵ��� ���а�");

    for (cnt = 0; cnt < 2; cnt++)
    {
        printf("�й� : %d\n", p[cnt].sno);
        printf("���� : %s\n", p[cnt].name);
        printf("�а� : %s\n\n", p[cnt].dept);
    }

    free(p);
    return 0;
}