#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[40];
    int v = 25;
    double x = 3.14;

    char s[] = "abcd";
    char *t = "�߱���";

   sprintf_s(buf, sizeof(buf), "v = %3d, x = %5.2f", v, x);

    printf("v = %3d, x = %5.2f\n", v, x);
    puts(buf);

    printf("���ڿ� s�� ���� : %d\n", strlen(s));
    printf("sizeof(s)       : %d\n", sizeof(s));
    printf("���ڿ� t�� ���� : %d\n", strlen(t));
    printf("sizeof(t)       : %d\n", sizeof(t));

    
    return 0;
}