#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freq_check(int arr[], int freq[]);    // 빈도수 확인하는 함수

int main(void)
{
    int arr[1000];          // 크기가 1000인 배열
    int freq[6] = { 0, };   // 주사위 눈금(1~6)의 빈도수

    srand((unsigned int)time(NULL));
    for (int i = 0; i < 1000; i++)  // 1 ~ 6 눈금 1000개 생성
    {
        arr[i] = rand() % 6 + 1;
    }
    
    freq_check(arr, freq);
    
    for (int i = 0; i < 6; i++)     // 각 눈금의 빈도수에 대한 확률
    {
        printf("%d눈금의 빈도수 : %d\n", i + 1, freq[i]);        
        printf("%d눈금이 나올 확률 : %.3lf\n\n", i + 1, (double)freq[i] / 1000);
    }

    return 0;
}

void freq_check(int arr[], int freq[])
{
    for (int i = 0; i < 1000; i++)      // 각 눈금의 빈도수
    {
        switch (arr[i])
        {
        case 1:
            freq[0]++;
            break;
        case 2:
            freq[1]++;
            break;
        case 3:
            freq[2]++;
            break;
        case 4:
            freq[3]++;
            break;
        case 5:
            freq[4]++;
            break;
        case 6:
            freq[5]++;
            break;
        }
    }
}