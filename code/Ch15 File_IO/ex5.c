#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cnt, kor, mat, eng, total;
    char name[16];
    double avg;

    FILE *in, *out;
    errno_t err1, err2;

    err1 = fopen_s(&in, "input.dat", "r");
    err2 = fopen_s(&out, "output.dat", "w");

    if (in == NULL || out == NULL)
    {
        puts("input.dat������ �������� �ʴ´�.\n");
        exit(1);
    }

    puts("input.dat���� ã�Ҵ�.");

    fprintf(out, "����\t| ����\t| ����\t| ����\t| ����\t| ���\n");

    for (cnt = 0; cnt <= 2; cnt++)
    {
        fscanf_s(in, "%s %d %d %d", name, sizeof(name), &kor, &mat, &eng);
        total = kor + mat + eng;
        avg = total / 3.0;
        fprintf(out, "%s\t| %d\t| %d\t| %d\t| %d\t| %4.2lf\n", name, kor, mat, eng, total, avg);
    }
    fprintf(out, "--------------------------------------------------------------------\n");

    puts("������ ��� ���� �Ϸ�");
    puts("output.dat ������ ���� Ȯ��");

    fclose(in);
    fclose(out);

    return 0;
}