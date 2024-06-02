#include <stdio.h>
#include <string.h>

void reverse_hangul(char *st);

int main(void)
{
    char *s = "가ㄴ달아";

    printf("순방향 출력 : %s\n", s);
    printf("역방향 출력 : ");
    reverse_hangul(s);

    return 0;
}

void reverse_hangul(char *st)
{
    int i = 0;
    for (i = strlen(st) - 2; i >= 0; i-=2) 
    {
        printf("%c%c", st[i], st[i+1]);
    }
}