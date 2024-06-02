#include "my7bits.h"

// ������ �Լ��� �� �����ϴ��� Ȯ���� �� �ִ� �׽�Ʈ�� �Լ�
void test_7bits()
{
   int num = 0;
   char flag;
   int num1 = 0, num2 = 0;

   unsigned char int7bit[ARY_NUM] = { 0, };
   unsigned char a[ARY_NUM] = { 0, };
   unsigned char b[ARY_NUM] = { 0, };
   unsigned char result[ARY_NUM + 1] = { 0, };

   printf("0~63������ ���� �ϳ�(num) �Է�: ");
   scanf("%d", &num);
   
   set_7b_int(int7bit, num);            // 1�� �Լ� ȣ��
   num = set_int_7b(num, int7bit);      // 2�� �Լ� ȣ��
   printf("num�� ����� ��(�迭���� �������� ����Ǿ� �ִ�): %d\n", num);

   printf("\nbit == b, 10���� == d, 8���� == o, 16���� == x�� �Է�(f�� ����): ");
   while (1)
   {
      scanf("%c", &flag);
      print_7b(int7bit, flag);          // 3�� �Լ� ȣ��
      if (flag == 'f')
      {
         break;
      }
   }
   
   printf("\n0 ~ 63������ ���� �ΰ�(a, b) �Է�: ");
   scanf("%d %d", &num1, &num2);
   set_7b_int(a, num1);            // 1�� �Լ� ȣ�� num1�� 2������ a�迭�� ����
   set_7b_int(b, num2);            // 1�� �Լ� ȣ�� num2�� 2������ b�迭�� ����

   plus_7bs(result, a, b);              // 4�� �Լ� ȣ��
   print_7b(result, 'd');               // 10������ Ȯ��
   minus_7bs(result, a, b);             // 5�� �Լ� ȣ��
   print_7b(result, 'd');               // 10������ Ȯ��
}

// 1. �Էµ� ���� num�� int7bit �迭�� 7bit ������ �����ϴ� �Լ�
void set_7b_int(unsigned char int7bit[], int num)
{
   int i = 0;

   while (num != 0)
   {
      int7bit[i] = num % 2;   // 2�� �������� �� �������� �迭�� ����
      num = num / 2;          // 2�� ���� ���� ����
      i++;                    // �ڸ��� ����
   }
   // ���� �������� ����Ǿ� �ִ�.
}

// 2. �Էµ� 7bit ������ num�� �����ϴ� �Լ�
int set_int_7b(int num, unsigned char int7bit[])
{
   int i = 0, n = 1;
   num = 0;

   for (i = 0; i < ARY_NUM; i++)
   {
      num = num + (int7bit[i] * n);
      n *= 10;       // ���� �ڸ� --> ���� �ڸ� --> ���� �ڸ�...
   }

   return num;
}

// 3. 7bit ������ flag�� ���� bit, 10����, 8����, 16���� ������ ����ϴ� �Լ�
void print_7b(unsigned char int7bit[], char flag)
{
   int i = 0, j = 0, k = 0;
   int decimal = 0;              // 10���� ����
   int octal = 0;                // 8���� ����
   char hex[2] = { 0, };         // 16���� ����
   int sum = 0, n = 1;           // n�� �ڸ��� ���, sum�� 3~4���� ��            

   if (flag == 'b')
   {
      printf("��Ʈ: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", int7bit[i]);
      }
   }

   if (flag == 'd')
   {
      printf("10����: ");

      if (int7bit[ARY_NUM - 1] == 1)
      {
         printf("-");
      }

      for (i = 0; i < ARY_NUM - 1; i++)
      {
         decimal = decimal + (int)(int7bit[i] * pow(2, i));
         // pow�� double�̱� ������ ����ȯ
      }
      printf("%d", decimal);
   }

   if (flag == 'o')
   {
      // 3���� �߶� ���(2������ �����ʺ���)
      for (i = 0; i < ARY_NUM; i += 3)
      {
         for (j = 0; j < 3; j++)
         {
            if (i + j >= ARY_NUM)   // 3���� �� ������ 0���� ��ü��
            {
               sum = sum + (int)(0 * pow(2, j));
            }
            else                    // 3���� ��� ���
            {
               sum = sum + (int)(int7bit[i + j] * pow(2, j));
            }
         }
         octal = octal + (sum * n);
         n *= 10;       // �ڸ����� �÷���
         sum = 0;       // sum �ʱ�ȭ
      }
      printf("8����: %d", octal);
   }

   if (flag == 'x')
   {
      for (i = 0; i < ARY_NUM; i += 4)
      {
         for (j = 0; j < 4; j++)
         {
            if (i + j >= ARY_NUM)   // 4���� �� ������ 0���� ��ü��
            {
               sum = sum + (int)(0 * pow(2, j));
            }
            else                    // 4���� ��� ���
            {
               sum = sum + (int)(int7bit[i + j] * pow(2, j));
            }
         }

         // 16������ 10���� 'A'
         if (sum < 10)
         {
            hex[k] = sum + '0';
         }
         else
         {
            hex[k] = 'A' + (sum - 10);
         }
         k++;
         sum = 0;
      }
      printf("16����: ");
      for (k = k - 1; k >= 0; k--)
      {
         printf("%c", hex[k]);
      }
   }
}

// 4. �Էµ� 7bit �� ���� a + b�� ���� result�� �����ϴ� �Լ�
void plus_7bs(unsigned char result[], unsigned char a[], unsigned char b[])
{
   int i = 0, plus = 0;

   printf("\n�� ���� a + b�� ��\n");

   // a�迭 Ȯ��
   printf("a�迭: ");
   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      printf("%d", a[i]);
   }

   // b�迭 Ȯ�� 
   printf("\nb�迭: ");
   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      printf("%d", b[i]);
   }

   // a + b
   for (i = 0; i < ARY_NUM; i++)
   {
      plus = a[i] + b[i] + result[i];

      if (plus == 0)
      {
         result[i] = 0;
      }
      else if (plus == 1)
      {
         result[i] = 1;
      }
      else if (plus == 2)
      {
         result[i] = 0;
         result[i + 1] = 1;
      }
      else        // plus == 3
      {
         result[i] = 1;
         result[i + 1] = 1;
      }

      plus = 0;   // plus �ʱ�ȭ
   } 
   
   // result�迭 Ȯ��
   printf("\nresult�迭: ");
   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      printf("%d", result[i]);
   }
   printf("\n");
}

// 5. �Էµ� 7bit �� ���� a - b�� ���� result�� �����ϴ� �Լ�
void minus_7bs(unsigned char result[], unsigned char a[], unsigned char b[])
{
   int i = 0;

   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      result[i] = 0;       // result �迭 �ʱ�ȭ
   }

   printf("\n\n(-b)�� ���");
   two_complement(b);         // b�迭�� 2�� ���� ������
   plus_7bs(result, a, b);    // ������

   if (result[ARY_NUM] == 0)        // �ø����� �����Ƿ� 2�� ������ ������
   {
      two_complement(result);
      result[ARY_NUM - 1] = 1;               // �ٸ�, ��ȣ��Ʈ�� 1�� ������ ������

      printf("���� ��: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", result[i]);
      }
   }
   else             // �ø����� �����Ƿ� 1 ����
   {
      result[ARY_NUM] = 0;                   // �� ���� ���
      
      printf("���� ��: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", result[i]);
      }
   }
   printf("\n");
}

// 5-1. 2�� ������ ���ϴ� �Լ�
void two_complement(unsigned char c[])
{
   int i = 0;

   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      if (c[i] == 0)
      {
         c[i] = 1;
      }
      else    // b[i] == 1
      {
         c[i] = 0;
      }
   }
   c[0] += 1;     // 2������ ǥ������ �� �� ������ �ڸ��� 1�� ����

   for (i = 0; i < ARY_NUM - 1; i++)
   {
      if (c[i] == 2)
      {
         c[i] = 0;
         c[i + 1] += 1;
      }
   }
}