#include <stdio.h>

void batting_average(double avg);

int main(void)
{
    double avg;

    printf("Ÿ�� �Է� : ");
    scanf_s("%lf", &avg);

    batting_average(avg);
    printf("\n");

    return 0;
}


void batting_average(double avg)
{
    int num = 10, value;
    char *unit[] = { "��", "Ǭ", "��" };
    char *unit_value[] = { "��", "��", "��", "��", "��", 
                        "��", "��", "ĥ", "��", "��" };
    
    for (int i = 0; i < 3; i++) {
        value = (int)(avg * num) % 10;     // ��) 4.15 --> 4�� intȭ
        for (int j = 0; j < 10; j++) {
            if (value == j) {
                printf("%s%s", unit_value[j], unit[i]);
            }
        }
        num *= 10;
    }
}



