#include <stdio.h>
#include <ctype.h>  // isupper(), tolower()

int main(void)
{
    char op;
    int input;

    do
    {
        printf("프로그램 시작(종료: 99) : ");
        scanf_s("%d", &input);

        if (input == 99)
            break;
        getchar();  // enter키 제거

        printf("알파벳 입력 : ");
        scanf_s("%c", &op, sizeof(op));
        getchar();  // enter키 제거

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

    printf("프로그램을 종료합니다.\n");
    return 0;
}