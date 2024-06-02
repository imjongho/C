#include <stdio.h>
#include <string.h>
#define SIZE 30

int main(void)
{
    int i = 0, len = 0;
    char str[SIZE] = { 0, };

    printf("문자열 입력(30바이트 이내) : ");
    gets_s(str, sizeof(str));

    len = strlen(str);
    printf("입력한 문자열의 길이 : %d바이트\n", len);
    
    for (i = 0; i < len; i++)
    {
        printf("*(ps + %02d) : %c\n", i, *(str + i));
    }

    return 0;
}



