#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int *r, int n);

int main(void)
{
    int i, j; 
    int lotto[6] = { 0, };

    srand((unsigned int)time(NULL));

    for (i = 0; i <= 5; i++)
    {
        lotto[i] = rand() % 45 + 1;
        for (j = 0; j < i; j++)
        {
            if (lotto[i] == lotto[j])
            {
                i--;
                break;
            }
        }
    }

    selection_sort(lotto, 6);

    return 0;
}

void selection_sort(int *r, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", r[i]);
    }

}