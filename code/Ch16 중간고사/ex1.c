#include <stdio.h>

struct product {
    char name[20];
    int price;
    int size;
};

int main(void)
{
    struct product pd[5];
    int cnt;

    printf("5���� ��ǰ ������ �Է��ϼ���.\n");

    for (cnt = 0; cnt < 5; cnt++)
    {
        printf("��ǰ�� : ");
        scanf_s("%s", pd[cnt].name, sizeof(pd[cnt].name));
        printf("���� : ");
        scanf_s("%d", &pd[cnt].price);
        printf("��� : ");
        scanf_s("%d", &pd[cnt].size);
    }
    
    printf("��ǰ��\t����\t���\n");
    
    for (cnt = 0; cnt < 5; cnt++)
    {
        printf("%s\t%d\t%d\n", pd[cnt].name, pd[cnt].price, pd[cnt].size);
        if (pd[cnt].size < 10)
        {
            printf("������!\n");
        }
    }

    return 0;
}