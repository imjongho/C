#include <stdio.h>

#include <time.h>

#include <conio.h>

#include <stdlib.h>



#define MATRIX_SIZE 5

#define MAX_NUMBER 4

#define TIME_LIMIT 8



void intro_game(void);

void game_control(void);

void print_number(int n, int cnt[]);

int find_max(int cnt[]);

int find_min(int cnt[]);

void check_result(int user, int answer, int cnt[]);



int main(void)

{
    char key = ' ';

    while (1)
    {
        system("cls");
        srand(time(NULL));
        intro_game();
        key = _getch();
        if (key == 'q') {
            break;
        }
        game_control();
    }

    return 0;
}



/*

���� ��Ģ �Ǵ� ���࿡ ���� ������� �Լ� intro_game

*/

void intro_game(void)

{

    printf("������Ŀ� ��Ÿ�� ���� �߿���\n");

    printf("���� ���� ������ ���ڸ� ã�ƶ�!\n\n");

    printf("���ѽð��� 8���Դϴ�\n\n");

    printf("�ƹ�Ű�� ������ �����մϴ�\n");

}



/*

������� ������� ������ ����ϴ� �Լ� print_number

*/

void print_number(int n, int cnt[])

{

    int i, j, r_num;

    for (i = 0; i < MAX_NUMBER; i++)

        cnt[i] = 0; //�ʱ�ȭ

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)

        {

            r_num = rand() % MAX_NUMBER;

            cnt[r_num] += 1;

            printf("%d ", r_num);

        }

        printf("\n");

    }
}



/*

�󵵼��� ���� ���� ���ڸ� ����ϴ� �Լ� find_max

*/

int find_max(int cnt[])

{

    int i, check, max_num = 0;

    for (i = 0; i < MAX_NUMBER; i++)

    {

        if (max_num <= cnt[i])

        {

            max_num = cnt[i];

            check = i;

        }

    }

    return check;

}



/*

�󵵼��� ���� ���� ���ڸ� ����ϴ� �Լ� find_min

*/

int find_min(int cnt[])

{

    int i, check, min_num = 4;

    for (i = 0; i < MAX_NUMBER; i++)
    {
        if (min_num >= cnt[i])

        {

            min_num = cnt[i];

            check = i;

        }

    }

    return check;

}



/*

���� ��Ģ�� ����ϴ� �Լ� check_result

*/

void check_result(int user, int answer, int cnt[])

{

    if (user == answer)

        printf("\n�¾ҽ��ϴ�\n");

    else

        printf("\nƲ�Ƚ��ϴ�\n");

    printf("��ȣ:%d, Ƚ��:%d \n", answer, cnt[answer]);

}



/*

���� �󵵰� ���� ���� ���ڸ� ã�� ������ ���� �Լ� game_control

*/

void game_control(void)

{

    int cnt[MAX_NUMBER], answer1, answer2, user;

    clock_t start, end;

    double pst;

    system("cls");

    print_number(MATRIX_SIZE, cnt);

    answer1 = find_max(cnt);

    answer2 = find_min(cnt);

    printf("\n\n");

    printf("����Ƚ���� ���� ���� ���� �Է� >");
    printf("����Ƚ���� ���� ���� ���� �Է� >");

    start = clock();

    while (!_kbhit())

    {

        end = clock();

        pst = (double)(end - start) / CLK_TCK;

        if (TIME_LIMIT < pst)

        {

            printf("\n���ѽð��� �Ѿ����ϴ�. \n");

            exit(0);

        }

    }

    user = _getch() - '0';

    printf("%d", user);
    user = _getch() - '0';

    printf("%d", user);

    check_result(user, answer1, cnt);
    check_result(user, answer2, cnt);

    printf("\n\n");





    _getch();
}