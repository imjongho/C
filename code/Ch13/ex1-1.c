#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i = 0;
    int arr[SIZE] = { 23, 10, 15, 92, 88 };     // ���� 1
    int *max;               // ���� 2

    max = (int*)arr[0];     // ���� 3
    max = &arr[0];

    printf("�־��� �迭 ��� �߿��� �ִ� ���ϴ� ���α׷�\n");
    printf("�迭 ��� : arr[ ] = {");
    for (i = 0; i < SIZE - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d}\n", arr[SIZE - 1]);

    for (i = 0; i < SIZE; i++)      // ���� 4
    {
        printf("%d��° �迭 ���: %d\n", i + 1, arr[i]);
        if (arr[i] > *max)          // ���� 5
        {
            *max = *(max + i);
        }
    }
    printf("%d�� ���� �߿��� �ִ��� %d�Դϴ�.\n", SIZE, *max);
    
    return 0;
}


