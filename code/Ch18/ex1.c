#include <stdio.h>
#include <ctype.h>  // isupper(), tolower()

int main(void)
{
    char op;
    int input;

    do
    {
        printf("���α׷� ����(����: 99) : ");
        scanf_s("%d", &input);

        if (input == 99)
            break;
        getchar();  // enterŰ ����

        printf("���ĺ� �Է� : ");
        scanf_s("%c", &op, sizeof(op));
        getchar();  // enterŰ ����

        if (isupper(op))
        {
            op = tolower(op);
        }
        else if (islower(op))
        {
            op = toupper(op);
        }

        printf("%c\n\n", op);

    } while (1);

    printf("���α׷��� �����մϴ�.\n");
    return 0;
}