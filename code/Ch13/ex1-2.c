#include <stdio.h>
#define SIZE 4

int main(void)
{
    int num = 0, i = 0;
    char *fruit[SIZE] = { "Apple", "Tomato", "Pineapple", "Exit" };     // ���� 1
                                                                        
    do      // ���� 2
    {
        for (i = 0; i < SIZE; i++)
        {
            printf("%d. %s\n", i + 1, fruit[i]);
        }

        printf("���� : ");
        scanf_s("%d", &num);                // ���� 3

        if ((num < 1) || (num > SIZE))      // ���� 4
        {
            printf("���ڴ� 1 ~ %d�� ���˴ϴ�.\n", SIZE);
        }
        else
        {
            printf("������ �ܾ�� \"%s\"�Դϴ�.\n", fruit[num - 1]);
        }

        printf("\n");
    } while (num != SIZE);     // ���� 5, Exit�� �迭�� �������� �����Ѵ�.
        
    return 0;
}


