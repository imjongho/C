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
        puts("input.dat파일이 존재하지 않는다.\n");
        exit(1);
    }

    puts("input.dat파일 찾았다.");

    fprintf(out, "성명\t| 국어\t| 수학\t| 영어\t| 총점\t| 평균\n");

    for (cnt = 0; cnt <= 2; cnt++)
    {
        fscanf_s(in, "%s %d %d %d", name, sizeof(name), &kor, &mat, &eng);
        total = kor + mat + eng;
        avg = total / 3.0;
        fprintf(out, "%s\t| %d\t| %d\t| %d\t| %d\t| %4.2lf\n", name, kor, mat, eng, total, avg);
    }
    fprintf(out, "--------------------------------------------------------------------\n");

    puts("총점과 평균 산출 완료");
    puts("output.dat 파일의 내용 확인");

    fclose(in);
    fclose(out);

    return 0;
}