#include "my7bits.h"

// 구현된 함수가 잘 동작하는지 확인할 수 있는 테스트용 함수
void test_7bits()
{
   int num = 0;
   char flag;
   int num1 = 0, num2 = 0;

   unsigned char int7bit[ARY_NUM] = { 0, };
   unsigned char a[ARY_NUM] = { 0, };
   unsigned char b[ARY_NUM] = { 0, };
   unsigned char result[ARY_NUM + 1] = { 0, };

   printf("0~63까지의 정수 하나(num) 입력: ");
   scanf("%d", &num);
   
   set_7b_int(int7bit, num);            // 1번 함수 호출
   num = set_int_7b(num, int7bit);      // 2번 함수 호출
   printf("num에 저장된 값(배열에는 역순으로 저장되어 있다): %d\n", num);

   printf("\nbit == b, 10진수 == d, 8진수 == o, 16진수 == x중 입력(f로 끝냄): ");
   while (1)
   {
      scanf("%c", &flag);
      print_7b(int7bit, flag);          // 3번 함수 호출
      if (flag == 'f')
      {
         break;
      }
   }
   
   printf("\n0 ~ 63사이의 정수 두개(a, b) 입력: ");
   scanf("%d %d", &num1, &num2);
   set_7b_int(a, num1);            // 1번 함수 호출 num1을 2진수로 a배열에 저장
   set_7b_int(b, num2);            // 1번 함수 호출 num2를 2진수로 b배열에 저장

   plus_7bs(result, a, b);              // 4번 함수 호출
   print_7b(result, 'd');               // 10진수로 확인
   minus_7bs(result, a, b);             // 5번 함수 호출
   print_7b(result, 'd');               // 10진수로 확인
}

// 1. 입력된 정수 num을 int7bit 배열에 7bit 정수로 저장하는 함수
void set_7b_int(unsigned char int7bit[], int num)
{
   int i = 0;

   while (num != 0)
   {
      int7bit[i] = num % 2;   // 2로 나누었을 때 나머지를 배열에 저장
      num = num / 2;          // 2로 나눈 몫을 저장
      i++;                    // 자릿수 변경
   }
   // 현재 역순으로 저장되어 있다.
}

// 2. 입력된 7bit 정수를 num에 저장하는 함수
int set_int_7b(int num, unsigned char int7bit[])
{
   int i = 0, n = 1;
   num = 0;

   for (i = 0; i < ARY_NUM; i++)
   {
      num = num + (int7bit[i] * n);
      n *= 10;       // 일의 자리 --> 십의 자리 --> 백의 자리...
   }

   return num;
}

// 3. 7bit 정수를 flag에 따라 bit, 10진수, 8진수, 16진수 단위로 출력하는 함수
void print_7b(unsigned char int7bit[], char flag)
{
   int i = 0, j = 0, k = 0;
   int decimal = 0;              // 10진수 저장
   int octal = 0;                // 8진수 저장
   char hex[2] = { 0, };         // 16진수 저장
   int sum = 0, n = 1;           // n은 자릿수 계산, sum은 3~4개의 합            

   if (flag == 'b')
   {
      printf("비트: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", int7bit[i]);
      }
   }

   if (flag == 'd')
   {
      printf("10진수: ");

      if (int7bit[ARY_NUM - 1] == 1)
      {
         printf("-");
      }

      for (i = 0; i < ARY_NUM - 1; i++)
      {
         decimal = decimal + (int)(int7bit[i] * pow(2, i));
         // pow가 double이기 때문에 형변환
      }
      printf("%d", decimal);
   }

   if (flag == 'o')
   {
      // 3개씩 잘라서 계산(2진수의 오른쪽부터)
      for (i = 0; i < ARY_NUM; i += 3)
      {
         for (j = 0; j < 3; j++)
         {
            if (i + j >= ARY_NUM)   // 3개씩 못 묶으면 0으로 대체함
            {
               sum = sum + (int)(0 * pow(2, j));
            }
            else                    // 3개씩 묶어서 계산
            {
               sum = sum + (int)(int7bit[i + j] * pow(2, j));
            }
         }
         octal = octal + (sum * n);
         n *= 10;       // 자리수를 올려줌
         sum = 0;       // sum 초기화
      }
      printf("8진수: %d", octal);
   }

   if (flag == 'x')
   {
      for (i = 0; i < ARY_NUM; i += 4)
      {
         for (j = 0; j < 4; j++)
         {
            if (i + j >= ARY_NUM)   // 4개씩 못 묶으면 0으로 대체함
            {
               sum = sum + (int)(0 * pow(2, j));
            }
            else                    // 4개씩 묶어서 계산
            {
               sum = sum + (int)(int7bit[i + j] * pow(2, j));
            }
         }

         // 16진수는 10부터 'A'
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
      printf("16진수: ");
      for (k = k - 1; k >= 0; k--)
      {
         printf("%c", hex[k]);
      }
   }
}

// 4. 입력된 7bit 두 정수 a + b의 값을 result에 저장하는 함수
void plus_7bs(unsigned char result[], unsigned char a[], unsigned char b[])
{
   int i = 0, plus = 0;

   printf("\n두 정수 a + b의 값\n");

   // a배열 확인
   printf("a배열: ");
   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      printf("%d", a[i]);
   }

   // b배열 확인 
   printf("\nb배열: ");
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

      plus = 0;   // plus 초기화
   } 
   
   // result배열 확인
   printf("\nresult배열: ");
   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      printf("%d", result[i]);
   }
   printf("\n");
}

// 5. 입력된 7bit 두 정수 a - b의 값을 result에 저장하는 함수
void minus_7bs(unsigned char result[], unsigned char a[], unsigned char b[])
{
   int i = 0;

   for (i = ARY_NUM - 1; i >= 0; i--)
   {
      result[i] = 0;       // result 배열 초기화
   }

   printf("\n\n(-b)로 계산");
   two_complement(b);         // b배열을 2의 보수 취해줌
   plus_7bs(result, a, b);    // 더해줌

   if (result[ARY_NUM] == 0)        // 올림수가 없으므로 2의 보수를 취해줌
   {
      two_complement(result);
      result[ARY_NUM - 1] = 1;               // 다만, 부호비트는 1로 음수를 지정함

      printf("실제 값: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", result[i]);
      }
   }
   else             // 올림수가 있으므로 1 버림
   {
      result[ARY_NUM] = 0;                   // 뺀 값이 양수
      
      printf("실제 값: ");
      for (i = ARY_NUM - 1; i >= 0; i--)
      {
         printf("%d", result[i]);
      }
   }
   printf("\n");
}

// 5-1. 2의 보수를 취하는 함수
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
   c[0] += 1;     // 2진수로 표현했을 때 맨 오른쪽 자리에 1을 더함

   for (i = 0; i < ARY_NUM - 1; i++)
   {
      if (c[i] == 2)
      {
         c[i] = 0;
         c[i + 1] += 1;
      }
   }
}