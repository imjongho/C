#include <stdio.h>
#include <windows.h>
#include <math.h>

#define G 9.8           // �߷�
#define PI 3.14         // ������

void gotoxy(int x, int y);
void animation(char *ball, int x, int y);

int main(void)
{
    char ball[3] = "��";
    double t, v, a, x = 1, y = 1, radian;

    printf("�ӷ�(���� ����) : ");
    scanf_s("%lf", &v);
    printf("���� : ");
    scanf_s("%lf", &a);
    radian = a * PI / 180;
    system("cls");
    
    // ��ǥ�� ����
    gotoxy(50, 20);     // ��ǥ�� ��ǥ
    printf("��");

    for (t = 0; x < 80 && y < 24; t += 0.01) {
        if (y < 0)
            break;

        if (x >= 48 && x <= 52 && y <= 5 && y >= 3) {   // ��ǥ���� ������
            system("cls");
            printf("���ϵ帳�ϴ�!!");
            break;
        }

        x = v * cos(radian) * t;
        y = v * sin(radian) * t - 0.5 * G * t * t;

        animation(ball, (int)x, (int)y);
        
        gotoxy(1, 25);
        printf("x = %lf\ty = %lf\n", x, y);
    }

    return 0;
}


void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


void animation(char *ball, int x, int y)
{
    gotoxy(x, 24 - y);
    printf("%s", ball);
    Sleep(200);
    printf("\b\b  ");
}

