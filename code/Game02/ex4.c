#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void intro_gmae(void);
void practice_piano(void);
void display_piano(void);
void practice_result(char output[], char input[], char check[], int total);
void gotoxy(int x, int y);

int main(void)
{
    
    return 0;
}

void intro_gmae(void)
{

}


void practice_piano(void)
{

}

void display_piano(void)
{

}

void practice_result(char output[], char input[], char check[], int total)
{


}


void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}