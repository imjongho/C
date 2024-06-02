#include <stdio.h>
#include <math.h>       // pow사용

#define ARY_NUM 7

// 구현된 함수가 잘 동작하는지 확인할 수 있는 테스트용 함수
void test_7bits();
// 1. 입력된 정수 num을 int7bit 배열에 7bit 정수로 저장하는 함수
void set_7b_int(unsigned char int7bit[], int num);
// 2. 입력된 7bit 정수를 num에 저장하는 함수
int set_int_7b(int num, unsigned char int7bit[]);
// 3. 7bit 정수를 flag에 따라 bit, 10진수, 8진수, 16진수 단위로 출력하는 함수
void print_7b(unsigned char int7bit[], char flag);
// 4. 입력된 7bit 두 정수 a + b의 값을 result에 저장하는 함수
void plus_7bs(unsigned char result[], unsigned char a[], unsigned char b[]);
// 5. 입력된 7bit 두 정수 a - b의 값을 result에 저장하는 함수
void minus_7bs(unsigned char result[], unsigned char a[], unsigned char b[]);
// 5-1. 2의 보수를 취하는 함수
void two_complement(unsigned char c[]);