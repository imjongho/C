#include <stdio.h>
#include <string.h>
#define SIZE 30

int main(void)
{
    int i = 0, len = 0;
    char str[SIZE] = { 0, };

    printf("���ڿ� �Է�(30����Ʈ �̳�) : ");
    gets_s(str, sizeof(str));

    len = strlen(str);
    printf("�Է��� ���ڿ��� ���� : %d����Ʈ\n", len);
    
    for (i = 0; i < len; i++)
    {
        printf("*(ps + %02d) : %c\n", i, *(str + i));
    }

    return 0;
}



