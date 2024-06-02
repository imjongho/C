#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

typedef struct node {
    char name[SIZE];
    int age;
    struct node *link;
}NODE;

int main(void)
{
    NODE *list = NULL;
    NODE *p_prev = NULL;
    NODE *p, *p_next;
    char buffer[SIZE];
    int age;

    while (1)
    {
        printf("\n���� �Է�(Enter ����) : ");
        gets_s(buffer, SIZE);
        if (buffer[0] == '\0')
        {
            break;
        }

        p = (NODE *)malloc(sizeof(NODE));

        strcpy_s(p -> name, sizeof(p -> name), buffer);
        printf("���� �Է� : ");
        gets_s(buffer, SIZE);
        age = atoi(buffer);
        p -> age = age;
        
        if (list == NULL)
        {
            list = p;
        }
        else
        {
            p_prev -> link = p;
            p -> link = NULL;
        }

        p_prev = p;
    }

    p = list;   // �� ó�� ���
    while (p != NULL)
    {
        printf("[%s, %d]", p -> name, p -> age);
        p = p -> link;

        if (p != NULL)
        {
            printf(" -> ");
        }
    }

    p = list;
    while (p != NULL)
    {
        p_next = p -> link;
        free(p);
        p = p_next;
    }

    return 0;
}