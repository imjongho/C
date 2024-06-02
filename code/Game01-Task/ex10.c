#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num = 0;
    int freq[45] = { 0, };
    int lotto[6] = { 0, };

    srand((unsigned int)time(NULL));
    while (num < 1000)      // 1000번 반복
    {
        for (int i = 0; i < 6; i++)
        {
            lotto[i] = rand() % 45 + 1;     // 1~45
            for (int j = 0; j < i; j++)
            {
                if (lotto[i] == lotto[j])   // 중복 제거
                {
                    i--;
                    break;
                }
            }
        }

        for (int i = 0; i < 6; i++)         // 빈도수 계산 
        {
            for (int j = 0; j < 45; j++)
            {
                if (lotto[i] == j+1)
                {
                    freq[j]++;
                }
            }
        }

        num++;
    }

    for (int i = 0; i < 45; i++)
    {
        printf("로또번호 %d가 나올 확률 : %.3lf\n", i+1, (double)freq[i]/1000);
    }

    return 0;
}