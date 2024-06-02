#include <stdio.h>
#define SIZE 4

int main(void)
{
    int num = 0, i = 0;
    char *fruit[SIZE] = { "Apple", "Tomato", "Pineapple", "Exit" };     // 조건 1
                                                                        
    do      // 조건 2
    {
        for (i = 0; i < SIZE; i++)
        {
            printf("%d. %s\n", i + 1, fruit[i]);
        }

        printf("선택 : ");
        scanf_s("%d", &num);                // 조건 3

        if ((num < 1) || (num > SIZE))      // 조건 4
        {
            printf("숫자는 1 ~ %d만 허용됩니다.\n", SIZE);
        }
        else
        {
            printf("선택한 단어는 \"%s\"입니다.\n", fruit[num - 1]);
        }

        printf("\n");
    } while (num != SIZE);     // 조건 5, Exit은 배열의 마지막에 고정한다.
        
    return 0;
}


