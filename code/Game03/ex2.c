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

게임 규칙 또는 진행에 대한 설명출력 함수 intro_game

*/

void intro_game(void)

{

    printf("정방행렬에 나타난 숫자 중에서\n");

    printf("가장 많이 출현한 숫자를 찾아라!\n\n");

    printf("제한시간은 8초입니다\n\n");

    printf("아무키나 누르면 시작합니다\n");

}



/*

정방행렬 모양으로 난수를 출력하는 함수 print_number

*/

void print_number(int n, int cnt[])

{

    int i, j, r_num;

    for (i = 0; i < MAX_NUMBER; i++)

        cnt[i] = 0; //초기화

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

빈도수가 가장 많은 숫자를 계산하는 함수 find_max

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

빈도수가 가장 적은 숫자를 계산하는 함수 find_min

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

게임 규칙을 출력하는 함수 check_result

*/

void check_result(int user, int answer, int cnt[])

{

    if (user == answer)

        printf("\n맞았습니다\n");

    else

        printf("\n틀렸습니다\n");

    printf("번호:%d, 횟수:%d \n", answer, cnt[answer]);

}



/*

출현 빈도가 가장 많은 숫자를 찾는 게임의 제어 함수 game_control

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

    printf("출현횟수가 가장 많은 숫자 입력 >");
    printf("출현횟수가 가장 적은 숫자 입력 >");

    start = clock();

    while (!_kbhit())

    {

        end = clock();

        pst = (double)(end - start) / CLK_TCK;

        if (TIME_LIMIT < pst)

        {

            printf("\n제한시간을 넘었습니다. \n");

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