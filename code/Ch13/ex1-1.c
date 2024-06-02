#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i = 0;
    int arr[SIZE] = { 23, 10, 15, 92, 88 };     // 조건 1
    int *max;               // 조건 2

    max = (int*)arr[0];     // 조건 3
    max = &arr[0];

    printf("주어진 배열 요소 중에서 최댓값 구하는 프로그램\n");
    printf("배열 요소 : arr[ ] = {");
    for (i = 0; i < SIZE - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d}\n", arr[SIZE - 1]);

    for (i = 0; i < SIZE; i++)      // 조건 4
    {
        printf("%d번째 배열 요소: %d\n", i + 1, arr[i]);
        if (arr[i] > *max)          // 조건 5
        {
            *max = *(max + i);
        }
    }
    printf("%d개 숫자 중에서 최댓값은 %d입니다.\n", SIZE, *max);
    
    return 0;
}


