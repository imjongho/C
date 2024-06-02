#include <stdio.h>
#include <math.h>       // pow���

#define ARY_NUM 7

// ������ �Լ��� �� �����ϴ��� Ȯ���� �� �ִ� �׽�Ʈ�� �Լ�
void test_7bits();
// 1. �Էµ� ���� num�� int7bit �迭�� 7bit ������ �����ϴ� �Լ�
void set_7b_int(unsigned char int7bit[], int num);
// 2. �Էµ� 7bit ������ num�� �����ϴ� �Լ�
int set_int_7b(int num, unsigned char int7bit[]);
// 3. 7bit ������ flag�� ���� bit, 10����, 8����, 16���� ������ ����ϴ� �Լ�
void print_7b(unsigned char int7bit[], char flag);
// 4. �Էµ� 7bit �� ���� a + b�� ���� result�� �����ϴ� �Լ�
void plus_7bs(unsigned char result[], unsigned char a[], unsigned char b[]);
// 5. �Էµ� 7bit �� ���� a - b�� ���� result�� �����ϴ� �Լ�
void minus_7bs(unsigned char result[], unsigned char a[], unsigned char b[]);
// 5-1. 2�� ������ ���ϴ� �Լ�
void two_complement(unsigned char c[]);