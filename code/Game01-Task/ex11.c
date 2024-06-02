#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freq_check(int arr[], int freq[]);    // �󵵼� Ȯ���ϴ� �Լ�

int main(void)
{
    int arr[1000];          // ũ�Ⱑ 1000�� �迭
    int freq[6] = { 0, };   // �ֻ��� ����(1~6)�� �󵵼�

    srand((unsigned int)time(NULL));
    for (int i = 0; i < 1000; i++)  // 1 ~ 6 ���� 1000�� ����
    {
        arr[i] = rand() % 6 + 1;
    }
    
    freq_check(arr, freq);
    
    for (int i = 0; i < 6; i++)     // �� ������ �󵵼��� ���� Ȯ��
    {
        printf("%d������ �󵵼� : %d\n", i + 1, freq[i]);        
        printf("%d������ ���� Ȯ�� : %.3lf\n\n", i + 1, (double)freq[i] / 1000);
    }

    return 0;
}

void freq_check(int arr[], int freq[])
{
    for (int i = 0; i < 1000; i++)      // �� ������ �󵵼�
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