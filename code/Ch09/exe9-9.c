#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 5�� ����: �Ʒ��� ���� �Լ� 5�� ���
void setNumber(void);            // ���� �߻� �Լ�
void printHead(void);            // ������� �� �Է�
void printHigher(int guess);     // ����� �� < ����
void printLower(int guess);      // ����� �� > ����
void printAnswer(int guess);     // ����� �� = ����

int number = 0;            // �������� number
static int min = 1;        // min�� ���� �ܺκ���
static int max = 100;      // max�� ���� �ܺκ���
int trycount = 0;

int main(void)
{
   int guess = 0;

   setNumber();
   printHead();

   // 2�� ����: ���� ������ ���
   while (1)
   {
      scanf("%d", &guess);
      trycount++;                // 10�� ����
      if (number > guess)
      {
         printHigher(guess);
      }
      else if (number < guess)
      {
         printLower(guess);
      }
      else
      {
         printAnswer(guess);
         break;                  // ���߸� while�� �������� 
      }
   }

   return 0;
}

// 1�� ����: 1~100�� �ϳ��� ���� �߻�
void setNumber()
{
   srand(time(NULL));
   number = rand() % 100 + 1;    // number�� ����
}

void printHead()
{
   printf("1~100������ ���� �� ������ �ֽ��ϴ�. --> ");
}

// 3�� ����: ��Ʈ�� �ڼ��� ��(4�� ����: min�� max �̿�)
void printHigher(int guess)
{
   printf("%d���� ū �����Դϴ�.(�õ� Ƚ�� %d��)\n", min = guess, trycount);
   printf("%d~%d������ ������ �Է��ϼ���: ", min, max);
}

void printLower(int guess)
{
   printf("%d���� ���� �����Դϴ�.(�õ� Ƚ�� %d��)\n", max = guess, trycount);
   printf("%d~%d������ ������ �Է��ϼ���: ", min, max);
}

void printAnswer(int guess)
{
   printf("�����Դϴ�. �� %d������ ���� %d�� ���ƽ��ϴ�.\n", trycount, guess);
}