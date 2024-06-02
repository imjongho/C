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

    printf("5개의 상품 정보를 입력하세요.\n");

    for (cnt = 0; cnt < 5; cnt++)
    {
        printf("상품명 : ");
        scanf_s("%s", pd[cnt].name, sizeof(pd[cnt].name));
        printf("가격 : ");
        scanf_s("%d", &pd[cnt].price);
        printf("재고량 : ");
        scanf_s("%d", &pd[cnt].size);
    }
    
    printf("상품명\t가격\t재고량\n");
    
    for (cnt = 0; cnt < 5; cnt++)
    {
        printf("%s\t%d\t%d\n", pd[cnt].name, pd[cnt].price, pd[cnt].size);
        if (pd[cnt].size < 10)
        {
            printf("재고부족!\n");
        }
    }

    return 0;
}