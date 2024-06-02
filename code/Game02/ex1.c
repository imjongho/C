#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct trump {
    char order;
    char shape[3];
    char number;
};

void make_card(struct trump m_card[]);
void display_card(struct trump m_card[]);
void shuffle_card(struct trump m_card[]);

int main(void)
{
    struct trump card[52];
    struct trump player_A[7], player_B[7], player_C[7], player_D[7];
    // 4명의 플레이어, 1명당 7장의 카드

    make_card(card);            // 카드 만들기
    shuffle_card(card);         // 셔플

    for (int i = 0; i < 7; i++) {       // 교대로 분배
        player_A[i] = card[i * 4];      // 0, 4, 8, 12...
        player_B[i] = card[i * 4 + 1];  // 1, 5, 9. 13...
        player_C[i] = card[i * 4 + 2];  // 2, 6, 10. 14...
        player_D[i] = card[i * 4 + 3];  // 3, 7, 11. 15...
    }

    printf("player_A : ");
    display_card(player_A);         // player_A의 화면 출력
    printf("\n");
    printf("player_B : ");
    display_card(player_B);         // player_B의 화면 출력
    printf("\n");
    printf("player_C : ");
    display_card(player_C);         // player_C의 화면 출력
    printf("\n");
    printf("player_D : ");
    display_card(player_D);         // player_D의 화면 출력
    printf("\n");

    return 0;
}


void make_card(struct trump m_card[])
{
    int i = 0, j = 0;
    char shape[4][3] = { "♠", "◆", "♥", "♣" };

    for (i = 0; i < 4; i++) {
        for (j = i * 13; j < i * 13 + 13; j++) {
            m_card[j].order = i;
            strcpy_s(m_card[j].shape, sizeof(m_card[j].shape) ,shape[i]);
            m_card[j].number = j % 13 + 1;
            switch (m_card[j].number) {
            case 1:
                m_card[j].number = 'A';
                break;
            case 11:
                m_card[j].number = 'J';
                break;
            case 12:
                m_card[j].number = 'Q';
                break;
            case 13:
                m_card[j].number = 'K';
                break;
            }
        }
    }
}

void display_card(struct trump m_card[])    // 7장의 카드만 보여줌
{
    int i = 0, count = 0;
    for (i = 0; i < 7; i++) {
        printf("%s", m_card[i].shape);

        if (10 < m_card[i].number)
            printf("%-2c  ", m_card[i].number);
        else
            printf("%-2d  ", m_card[i].number);

        /* 필요 없음
        count++;
        if (i % 13 + 1 == 13) {
            printf("\n");
            count = 0;
        }
        */
    }
}

void shuffle_card(struct trump m_card[])
{
    int i = 0, rnd = 0;
    struct trump temp;
    srand((unsigned int)time(NULL));
    
    for (i = 0; i < 52; i++) {
        do
        {
            rnd = rand() % 52;
        } while (rnd == i);
        
        temp = m_card[rnd];
        m_card[rnd] = m_card[i];
        m_card[i] = temp;
    }
}